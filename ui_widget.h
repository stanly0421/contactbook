/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QTableWidget *tableWidget;
    QGroupBox *inputGroupBox;
    QVBoxLayout *groupBoxLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        Widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                stop:0 #e3f2fd, stop:1 #bbdefb);\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #1565c0;\n"
"    font-weight: bold;\n"
"    font-size: 12pt;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: white;\n"
"    border: 2px solid #64b5f6;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    font-size: 11pt;\n"
"    selection-background-color: #42a5f5;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1976d2;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #2196f3;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1976d2;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0d47a1;\n"
"}\n"
"\n"
"QPushButton#pushButton {\n"
"    background-col"
                        "or: #4caf50;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed {\n"
"    background-color: #388e3c;\n"
"}\n"
"\n"
"QPushButton#pushButton_4 {\n"
"    background-color: #f44336;\n"
"}\n"
"\n"
"QPushButton#pushButton_4:hover {\n"
"    background-color: #e53935;\n"
"}\n"
"\n"
"QPushButton#pushButton_4:pressed {\n"
"    background-color: #c62828;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: white;\n"
"    border: 2px solid #90caf9;\n"
"    border-radius: 10px;\n"
"    gridline-color: #bbdefb;\n"
"    selection-background-color: #64b5f6;\n"
"    selection-color: white;\n"
"    font-size: 10pt;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #1976d2;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    border: 1px solid #1565c0;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QHeaderView::section:hover {\n"
"    background-color: #1565c0;\n"
""
                        "}"));
        verticalLayoutWidget_2 = new QWidget(Widget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 760, 560));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        titleLabel = new QLabel(verticalLayoutWidget_2);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 20pt;\n"
"    font-weight: bold;\n"
"    color: #0d47a1;\n"
"    background-color: rgba(255, 255, 255, 180);\n"
"    border-radius: 12px;\n"
"    padding: 15px;\n"
"}"));

        verticalLayout_2->addWidget(titleLabel);

        tableWidget = new QTableWidget(verticalLayoutWidget_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(0, 250));

        verticalLayout_2->addWidget(tableWidget);

        inputGroupBox = new QGroupBox(verticalLayoutWidget_2);
        inputGroupBox->setObjectName("inputGroupBox");
        inputGroupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgba(255, 255, 255, 200);\n"
"    border: 2px solid #64b5f6;\n"
"    border-radius: 10px;\n"
"    margin-top: 10px;\n"
"    font-size: 13pt;\n"
"    font-weight: bold;\n"
"    color: #1565c0;\n"
"    padding-top: 15px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px 15px;\n"
"    background-color: #2196f3;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"}"));
        groupBoxLayout = new QVBoxLayout(inputGroupBox);
        groupBoxLayout->setSpacing(10);
        groupBoxLayout->setObjectName("groupBoxLayout");
        groupBoxLayout->setContentsMargins(15, 15, 15, 15);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(inputGroupBox);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(inputGroupBox);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(inputGroupBox);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(inputGroupBox);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(inputGroupBox);
        label->setObjectName("label");
        label->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(inputGroupBox);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(inputGroupBox);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(80, 0));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_4 = new QLineEdit(inputGroupBox);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_5->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_5);


        groupBoxLayout->addLayout(verticalLayout);


        verticalLayout_2->addWidget(inputGroupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(15);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 40));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(100, 40));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(100, 40));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(100, 40));

        horizontalLayout_4->addWidget(pushButton_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\351\200\232\350\250\212\351\214\204\347\256\241\347\220\206\347\263\273\347\265\261", nullptr));
        titleLabel->setText(QCoreApplication::translate("Widget", "\360\237\223\207 \351\200\232\350\250\212\351\214\204\347\256\241\347\220\206\347\263\273\347\265\261", nullptr));
        inputGroupBox->setTitle(QCoreApplication::translate("Widget", "\350\201\257\347\265\241\344\272\272\350\263\207\350\250\212", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\360\237\216\223 \345\255\270\350\231\237:", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\360\237\217\253 \347\217\255\347\264\232:", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\360\237\221\244 \345\247\223\345\220\215:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\360\237\223\236 \351\233\273\350\251\261:", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\342\234\205 \346\226\260\345\242\236", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\360\237\223\245 \345\214\257\345\205\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\360\237\222\276 \345\214\257\345\207\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\342\235\214 \347\265\220\346\235\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
