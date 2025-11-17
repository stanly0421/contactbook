#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

QString mFilename="C:/Users/user/Desktop/ex/ContactBook/contactbook.txt";

// 寫入檔案函數
void Write (QString Filename, QString str)
{
    QFile mFile (Filename); // 宣告QFile函數
    // 寫入檔案判斷
    if(!mFile.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "could not open file for write";
        return;
    }
    QTextStream out(&mFile);
    out << str; // 將內容輸出至txt檔
    mFile.flush(); // 刷新mFile
    mFile.close(); // 關閉mFile
}

// 讀取檔案函數
QString Read(QString Filename)
{
    QFile mFile(Filename);  // 宣告QFile函數
    QString fileContent;

    if (!mFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "could not open file for read";
        return "";
    }

    QTextStream in(&mFile);
    fileContent = in.readAll(); // 讀取所有內容
    mFile.close(); // 關閉mFile
    return fileContent;
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(4);
    QStringList ColTotle;
    ui->tableWidget->setHorizontalHeaderLabels(ColTotle);
    ColTotle << QStringLiteral("學號") << QStringLiteral("班級") << QStringLiteral("姓名") << QStringLiteral("電話");
    ui->tableWidget->setHorizontalHeaderLabels(ColTotle);
}

Widget::~Widget()
{
    delete ui;
}

// 插入新資料列
void Widget::on_pushButton_clicked()
{
    QTableWidgetItem *inputRow1, *inputRow2, *inputRow3, *inputRow4;
    inputRow1 = new QTableWidgetItem(QString(ui->lineEdit->text()));
    inputRow2 = new QTableWidgetItem(QString(ui->lineEdit_2->text()));
    inputRow3 = new QTableWidgetItem(QString(ui->lineEdit_3->text()));
    inputRow4 = new QTableWidgetItem(QString(ui->lineEdit_4->text()));
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, inputRow1);
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, inputRow2);
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, inputRow3);
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, inputRow4);
}

// 儲存資料到檔案
void Widget::on_pushButton_2_clicked()
{
    QString saveFile = ""; // 存檔內容
    int rc = 0, cc = 0;
    rc = ui->tableWidget->rowCount();
    cc = ui->tableWidget->columnCount();
    mFilename = QFileDialog::getSaveFileName(this, "匯出存檔", ".");
    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < cc; j++) {
            saveFile += ui->tableWidget->item(i, j)->text() + ",";
        }
        saveFile += "\n";
    }
    Write(mFilename, saveFile); // 呼叫Write
}

// 匯入資料
// 匯入資料
void Widget::on_pushButton_3_clicked()
{
    QString openFile = QFileDialog::getOpenFileName(this, "匯入檔案", "", "Text Files (*.txt);;All Files (*)");

    if (openFile.isEmpty()) {
        return; // 如果未選擇檔案，則退出
    }

    QString fileContent = Read(openFile); // 讀取檔案內容
    QStringList rows = fileContent.split("\n"); // 按行分割

    // 清空現有的資料
    ui->tableWidget->setRowCount(0);

    // 將檔案內容逐行插入到 tableWidget 中
    foreach (const QString &row, rows) {
        // 用 "," 分割每一列的資料，並過濾掉空字串
        QStringList columns = row.split(",");
        columns.removeAll("");  // 移除空白項目

        if (columns.size() == 4) {  // 只處理有4欄位的資料
            int rowCount = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(rowCount);

            for (int i = 0; i < columns.size(); ++i) {
                ui->tableWidget->setItem(rowCount, i, new QTableWidgetItem(columns[i]));
            }
        }
    }
}

// 結束應用程式
void Widget::on_pushButton_4_clicked()
{
    // 提示是否確定關閉
    QMessageBox::StandardButton reply = QMessageBox::question(this, "結束", "確定要結束程式嗎？",
                                                              QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        close(); // 關閉視窗
    }
}
