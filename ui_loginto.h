/********************************************************************************
** Form generated from reading UI file 'loginto.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINTO_H
#define UI_LOGINTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Loginto
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *userlineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passwordlineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *okpushButton;
    QPushButton *exitpushButton_2;

    void setupUi(QDialog *Loginto)
    {
        if (Loginto->objectName().isEmpty())
            Loginto->setObjectName(QStringLiteral("Loginto"));
        Loginto->resize(454, 223);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        Loginto->setWindowIcon(icon);
        gridLayout = new QGridLayout(Loginto);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(Loginto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(201, 61));
        label_3->setMaximumSize(QSize(561, 141));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/image/logo.png")));
        label_3->setScaledContents(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Loginto);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        userlineEdit = new QLineEdit(Loginto);
        userlineEdit->setObjectName(QStringLiteral("userlineEdit"));
        userlineEdit->setEnabled(false);
        userlineEdit->setFont(font);

        horizontalLayout->addWidget(userlineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Loginto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        passwordlineEdit_2 = new QLineEdit(Loginto);
        passwordlineEdit_2->setObjectName(QStringLiteral("passwordlineEdit_2"));
        passwordlineEdit_2->setFont(font);

        horizontalLayout_2->addWidget(passwordlineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        okpushButton = new QPushButton(Loginto);
        okpushButton->setObjectName(QStringLiteral("okpushButton"));
        okpushButton->setFont(font);

        horizontalLayout_3->addWidget(okpushButton);

        exitpushButton_2 = new QPushButton(Loginto);
        exitpushButton_2->setObjectName(QStringLiteral("exitpushButton_2"));
        exitpushButton_2->setFont(font);

        horizontalLayout_3->addWidget(exitpushButton_2);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);


        retranslateUi(Loginto);

        QMetaObject::connectSlotsByName(Loginto);
    } // setupUi

    void retranslateUi(QDialog *Loginto)
    {
        Loginto->setWindowTitle(QApplication::translate("Loginto", "\345\223\210\345\260\224\346\273\250\345\267\245\344\270\232\345\244\247\345\255\246-\344\270\223\345\256\266\346\212\275\345\217\226\347\263\273\347\273\237", 0));
        label_3->setText(QString());
        label->setText(QApplication::translate("Loginto", "\347\224\250\346\210\267\345\220\215", 0));
        userlineEdit->setText(QApplication::translate("Loginto", "user", 0));
        label_2->setText(QApplication::translate("Loginto", "\345\257\206\347\240\201      ", 0));
        okpushButton->setText(QApplication::translate("Loginto", "\347\241\256\350\256\244", 0));
        exitpushButton_2->setText(QApplication::translate("Loginto", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Loginto: public Ui_Loginto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINTO_H
