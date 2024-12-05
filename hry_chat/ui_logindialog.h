/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickedlabel.h"

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *err_tip;
    QWidget *head_widget;
    QGridLayout *gridLayout;
    QLabel *head_label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *email_lable;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pass_lable;
    QLineEdit *pass_edit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    ClickedLabel *forget_label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *login_button;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *register_button;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(336, 529);
        LoginDialog->setMinimumSize(QSize(300, 500));
        LoginDialog->setMaximumSize(QSize(336, 529));
        verticalLayout_2 = new QVBoxLayout(LoginDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        err_tip = new QLabel(LoginDialog);
        err_tip->setObjectName(QString::fromUtf8("err_tip"));

        verticalLayout->addWidget(err_tip);

        head_widget = new QWidget(LoginDialog);
        head_widget->setObjectName(QString::fromUtf8("head_widget"));
        head_widget->setMinimumSize(QSize(200, 230));
        gridLayout = new QGridLayout(head_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        head_label = new QLabel(head_widget);
        head_label->setObjectName(QString::fromUtf8("head_label"));
        head_label->setMinimumSize(QSize(200, 200));
        head_label->setMaximumSize(QSize(200, 200));
        head_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(head_label, 0, 0, 1, 1);


        verticalLayout->addWidget(head_widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        email_lable = new QLabel(LoginDialog);
        email_lable->setObjectName(QString::fromUtf8("email_lable"));
        email_lable->setMinimumSize(QSize(0, 25));
        email_lable->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(email_lable);

        email_edit = new QLineEdit(LoginDialog);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));
        email_edit->setMinimumSize(QSize(0, 25));
        email_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(email_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pass_lable = new QLabel(LoginDialog);
        pass_lable->setObjectName(QString::fromUtf8("pass_lable"));
        pass_lable->setMinimumSize(QSize(0, 25));
        pass_lable->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(pass_lable);

        pass_edit = new QLineEdit(LoginDialog);
        pass_edit->setObjectName(QString::fromUtf8("pass_edit"));
        pass_edit->setMinimumSize(QSize(0, 25));
        pass_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(pass_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        forget_label = new ClickedLabel(LoginDialog);
        forget_label->setObjectName(QString::fromUtf8("forget_label"));
        forget_label->setMinimumSize(QSize(0, 25));
        forget_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(forget_label);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        login_button = new QPushButton(LoginDialog);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setMinimumSize(QSize(100, 30));

        horizontalLayout_4->addWidget(login_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        register_button = new QPushButton(LoginDialog);
        register_button->setObjectName(QString::fromUtf8("register_button"));
        register_button->setMinimumSize(QSize(100, 30));

        horizontalLayout_5->addWidget(register_button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        err_tip->setText(QString());
        head_label->setText(QString());
        email_lable->setText(QApplication::translate("LoginDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        pass_lable->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        forget_label->setText(QApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        login_button->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        register_button->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
