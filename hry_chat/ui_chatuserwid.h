/********************************************************************************
** Form generated from reading UI file 'chatuserwid.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATUSERWID_H
#define UI_CHATUSERWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatUserWid
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *icon_wid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon_lb;
    QWidget *user_info_wid;
    QVBoxLayout *verticalLayout;
    QLabel *user_name_lb;
    QLabel *user_chat_lb;
    QWidget *time_wid;
    QHBoxLayout *horizontalLayout_3;
    QLabel *time_lb;

    void setupUi(QWidget *ChatUserWid)
    {
        if (ChatUserWid->objectName().isEmpty())
            ChatUserWid->setObjectName(QString::fromUtf8("ChatUserWid"));
        ChatUserWid->resize(400, 70);
        ChatUserWid->setMinimumSize(QSize(0, 70));
        ChatUserWid->setMaximumSize(QSize(16777215, 70));
        horizontalLayout = new QHBoxLayout(ChatUserWid);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 2, 6, 2);
        icon_wid = new QWidget(ChatUserWid);
        icon_wid->setObjectName(QString::fromUtf8("icon_wid"));
        icon_wid->setMinimumSize(QSize(50, 50));
        icon_wid->setMaximumSize(QSize(50, 50));
        horizontalLayout_2 = new QHBoxLayout(icon_wid);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        icon_lb = new QLabel(icon_wid);
        icon_lb->setObjectName(QString::fromUtf8("icon_lb"));
        icon_lb->setMinimumSize(QSize(45, 45));
        icon_lb->setMaximumSize(QSize(45, 45));

        horizontalLayout_2->addWidget(icon_lb);


        horizontalLayout->addWidget(icon_wid);

        user_info_wid = new QWidget(ChatUserWid);
        user_info_wid->setObjectName(QString::fromUtf8("user_info_wid"));
        user_info_wid->setMaximumSize(QSize(150, 16777215));
        verticalLayout = new QVBoxLayout(user_info_wid);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        user_name_lb = new QLabel(user_info_wid);
        user_name_lb->setObjectName(QString::fromUtf8("user_name_lb"));

        verticalLayout->addWidget(user_name_lb);

        user_chat_lb = new QLabel(user_info_wid);
        user_chat_lb->setObjectName(QString::fromUtf8("user_chat_lb"));
        user_chat_lb->setMaximumSize(QSize(120, 16777215));

        verticalLayout->addWidget(user_chat_lb);


        horizontalLayout->addWidget(user_info_wid);

        time_wid = new QWidget(ChatUserWid);
        time_wid->setObjectName(QString::fromUtf8("time_wid"));
        time_wid->setMinimumSize(QSize(50, 50));
        time_wid->setMaximumSize(QSize(50, 50));
        horizontalLayout_3 = new QHBoxLayout(time_wid);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        time_lb = new QLabel(time_wid);
        time_lb->setObjectName(QString::fromUtf8("time_lb"));
        time_lb->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(time_lb);


        horizontalLayout->addWidget(time_wid);


        retranslateUi(ChatUserWid);

        QMetaObject::connectSlotsByName(ChatUserWid);
    } // setupUi

    void retranslateUi(QWidget *ChatUserWid)
    {
        ChatUserWid->setWindowTitle(QApplication::translate("ChatUserWid", "Form", nullptr));
        icon_lb->setText(QString());
        user_name_lb->setText(QApplication::translate("ChatUserWid", "hry", nullptr));
        user_chat_lb->setText(QApplication::translate("ChatUserWid", "Hello World!", nullptr));
        time_lb->setText(QApplication::translate("ChatUserWid", "13:14", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatUserWid: public Ui_ChatUserWid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATUSERWID_H
