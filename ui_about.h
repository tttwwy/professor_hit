/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(531, 259);
        About->setMinimumSize(QSize(531, 259));
        About->setMaximumSize(QSize(531, 259));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 513, 121));
        label->setMinimumSize(QSize(281, 81));
        label->setMaximumSize(QSize(741, 221));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/image/logo.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(About);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 220, 75, 23));
        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 130, 345, 81));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "\345\205\263\344\272\216", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("About", "\345\205\263\351\227\255", 0));
        label_2->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Copyright 2014 by \347\216\213\345\223\262.All rights reserved.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\254\344\272\247\345\223\201\344\275\277\347\224\250\346\235\203\345\261\236\344\272\216\357\274\232\345\223\210\345\260\224\346\273\250\345\267\245\344\270\232\345\244\247\345\255\246</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
