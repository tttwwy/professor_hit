/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

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
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *old;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *new_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *new_3;
    QSplitter *splitter_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(258, 150);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChangePassword->setWindowIcon(icon);
        gridLayout = new QGridLayout(ChangePassword);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ChangePassword);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        old = new QLineEdit(ChangePassword);
        old->setObjectName(QStringLiteral("old"));

        horizontalLayout->addWidget(old);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        new_2 = new QLineEdit(ChangePassword);
        new_2->setObjectName(QStringLiteral("new_2"));

        horizontalLayout_2->addWidget(new_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(ChangePassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        new_3 = new QLineEdit(ChangePassword);
        new_3->setObjectName(QStringLiteral("new_3"));

        horizontalLayout_3->addWidget(new_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        splitter_4 = new QSplitter(ChangePassword);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);
        splitter_4->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);
        splitter_4->addWidget(pushButton_2);

        gridLayout->addWidget(splitter_4, 3, 0, 1, 1);


        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("ChangePassword", "\345\216\237\345\257\206\347\240\201", 0));
        label_2->setText(QApplication::translate("ChangePassword", "\346\226\260\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("ChangePassword", "\345\206\215\346\254\241\350\276\223\345\205\245", 0));
        pushButton->setText(QApplication::translate("ChangePassword", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("ChangePassword", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
