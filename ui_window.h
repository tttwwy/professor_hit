/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QAction *changepassword;
    QAction *exit;
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *add_button;
    QPushButton *delete_button;
    QPushButton *pushButton;
    QPushButton *save_button;
    QTableView *tableView;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLineEdit *findCompany;
    QTableView *treeView_3;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTreeView *treeView;
    QTreeView *treeView_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QLabel *label_10;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *ProjectNo;
    QLabel *label_5;
    QLineEdit *ProjectName;
    QLabel *label_8;
    QComboBox *ProjectForm_comboBox_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *begin_button;
    QPushButton *continue_button;
    QPushButton *save_button_2;
    QPushButton *print_button;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(877, 518);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        Window->setWindowIcon(icon);
        changepassword = new QAction(Window);
        changepassword->setObjectName(QStringLiteral("changepassword"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(11);
        changepassword->setFont(font);
        exit = new QAction(Window);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setFont(font);
        action = new QAction(Window);
        action->setObjectName(QStringLiteral("action"));
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(11);
        tabWidget->setFont(font1);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        add_button = new QPushButton(tab_2);
        add_button->setObjectName(QStringLiteral("add_button"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        add_button->setFont(font2);

        horizontalLayout_4->addWidget(add_button);

        delete_button = new QPushButton(tab_2);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        delete_button->setFont(font2);

        horizontalLayout_4->addWidget(delete_button);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font2);

        horizontalLayout_4->addWidget(pushButton);

        save_button = new QPushButton(tab_2);
        save_button->setObjectName(QStringLiteral("save_button"));
        save_button->setFont(font2);

        horizontalLayout_4->addWidget(save_button);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(12);
        tableView->setFont(font3);

        gridLayout->addWidget(tableView, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_6->addWidget(label_13);

        findCompany = new QLineEdit(tab_3);
        findCompany->setObjectName(QStringLiteral("findCompany"));

        horizontalLayout_6->addWidget(findCompany);


        gridLayout_5->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        treeView_3 = new QTableView(tab_3);
        treeView_3->setObjectName(QStringLiteral("treeView_3"));
        treeView_3->setFont(font3);

        gridLayout_5->addWidget(treeView_3, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        groupBox->setFont(font4);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setFont(font3);

        gridLayout_2->addWidget(treeView, 0, 0, 1, 1);

        treeView_2 = new QTreeView(groupBox);
        treeView_2->setObjectName(QStringLiteral("treeView_2"));
        treeView_2->setFont(font3);

        gridLayout_2->addWidget(treeView_2, 3, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        label_7->setFont(font5);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setFont(font1);

        horizontalLayout_3->addWidget(comboBox_2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(tab);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setFont(font1);

        horizontalLayout_3->addWidget(comboBox_3);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_6);

        spinBox = new QSpinBox(tab);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setFont(font1);
        spinBox->setMinimum(1);

        horizontalLayout_3->addWidget(spinBox);

        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(3, 2);

        gridLayout_3->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_9);

        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout_5->addWidget(dateEdit);

        timeEdit = new QTimeEdit(tab);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        horizontalLayout_5->addWidget(timeEdit);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);

        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(4, 2);

        gridLayout_3->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        ProjectNo = new QLineEdit(tab);
        ProjectNo->setObjectName(QStringLiteral("ProjectNo"));
        ProjectNo->setFont(font1);

        horizontalLayout->addWidget(ProjectNo);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_5);

        ProjectName = new QLineEdit(tab);
        ProjectName->setObjectName(QStringLiteral("ProjectName"));
        ProjectName->setFont(font1);

        horizontalLayout->addWidget(ProjectName);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout->addWidget(label_8);

        ProjectForm_comboBox_4 = new QComboBox(tab);
        ProjectForm_comboBox_4->setObjectName(QStringLiteral("ProjectForm_comboBox_4"));
        ProjectForm_comboBox_4->setFont(font1);

        horizontalLayout->addWidget(ProjectForm_comboBox_4);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(5, 1);

        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        begin_button = new QPushButton(tab);
        begin_button->setObjectName(QStringLiteral("begin_button"));
        begin_button->setFont(font2);

        horizontalLayout_2->addWidget(begin_button);

        continue_button = new QPushButton(tab);
        continue_button->setObjectName(QStringLiteral("continue_button"));
        continue_button->setFont(font2);

        horizontalLayout_2->addWidget(continue_button);

        save_button_2 = new QPushButton(tab);
        save_button_2->setObjectName(QStringLiteral("save_button_2"));
        save_button_2->setFont(font2);

        horizontalLayout_2->addWidget(save_button_2);

        print_button = new QPushButton(tab);
        print_button->setObjectName(QStringLiteral("print_button"));
        print_button->setFont(font2);

        horizontalLayout_2->addWidget(print_button);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font3);

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 877, 24));
        menubar->setFont(font1);
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        QFont font6;
        font6.setPointSize(11);
        menu_2->setFont(font6);
        Window->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(changepassword);
        menu->addAction(exit);
        menu_2->addAction(action);

        retranslateUi(Window);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "\345\223\210\345\260\224\346\273\250\345\267\245\344\270\232\345\244\247\345\255\246-\344\270\223\345\256\266\346\212\275\345\217\226\347\263\273\347\273\237", 0));
        changepassword->setText(QApplication::translate("Window", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        exit->setText(QApplication::translate("Window", "\351\200\200\345\207\272", 0));
        action->setText(QApplication::translate("Window", "\345\205\263\344\272\216", 0));
        add_button->setText(QApplication::translate("Window", "\346\226\260\345\242\236\344\277\241\346\201\257", 0));
        delete_button->setText(QApplication::translate("Window", "\345\210\240\351\231\244\344\277\241\346\201\257", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("Window", "\344\277\256\346\224\271\345\246\202\346\236\234\346\234\252\350\242\253\344\277\235\345\255\230\357\274\214\345\210\231\345\217\257\344\273\245\346\222\244\351\224\200", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("Window", "\346\222\244\351\224\200\344\277\256\346\224\271", 0));
#ifndef QT_NO_TOOLTIP
        save_button->setToolTip(QApplication::translate("Window", "\344\277\256\346\224\271\344\270\200\346\227\246\344\277\235\345\255\230\357\274\214\345\210\231\346\227\240\346\263\225\346\222\244\351\224\200", 0));
#endif // QT_NO_TOOLTIP
        save_button->setText(QApplication::translate("Window", "\344\277\235\345\255\230\344\277\256\346\224\271", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Window", "\344\270\223\345\256\266\344\277\241\346\201\257", 0));
        label_13->setText(QApplication::translate("Window", "\345\267\245\344\275\234\345\215\225\344\275\215\357\274\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Window", "\345\215\225\344\275\215\344\277\241\346\201\257", 0));
        groupBox->setTitle(QApplication::translate("Window", "\351\232\217\346\234\272\346\212\275\345\217\226\347\273\223\346\236\234", 0));
        label_7->setText(QApplication::translate("Window", "\346\212\275\345\217\226\347\273\223\346\236\234", 0));
        label_2->setText(QApplication::translate("Window", "\350\201\214\347\247\260\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Window", "\344\270\215\351\231\220", 0)
        );
        label_3->setText(QApplication::translate("Window", "\344\270\223\344\270\232\357\274\232", 0));
        label_6->setText(QApplication::translate("Window", "\346\211\200\351\234\200\344\272\272\346\225\260\357\274\232", 0));
        label_9->setText(QApplication::translate("Window", "\350\257\204\346\240\207\346\227\266\351\227\264", 0));
        label_10->setText(QApplication::translate("Window", "\350\257\204\346\240\207\345\234\260\347\202\271", 0));
        label_4->setText(QApplication::translate("Window", "\345\267\245\347\250\213\347\274\226\345\217\267\357\274\232", 0));
        label_5->setText(QApplication::translate("Window", "\345\267\245\347\250\213\345\220\215\347\247\260\357\274\232", 0));
        label_8->setText(QApplication::translate("Window", "\346\213\233\346\240\207\345\275\242\345\274\217\357\274\232", 0));
        ProjectForm_comboBox_4->clear();
        ProjectForm_comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("Window", "\345\205\254\345\274\200", 0)
         << QApplication::translate("Window", "\351\202\200\350\257\267", 0)
        );
        begin_button->setText(QApplication::translate("Window", "\345\274\200\345\247\213\346\212\275\345\217\226", 0));
        continue_button->setText(QApplication::translate("Window", "\347\273\247\347\273\255\346\212\275\345\217\226", 0));
        save_button_2->setText(QApplication::translate("Window", "\344\277\235\345\255\230\347\273\223\346\236\234", 0));
        print_button->setText(QApplication::translate("Window", "\346\211\223\345\215\260\347\273\223\346\236\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Window", "\351\232\217\346\234\272\346\212\275\345\217\226", 0));
        label->setText(QString());
        menu->setTitle(QApplication::translate("Window", "\347\224\250\346\210\267", 0));
        menu_2->setTitle(QApplication::translate("Window", "\345\205\263\344\272\216", 0));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
