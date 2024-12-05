/********************************************************************************
** Form generated from reading UI file 'findfaileddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDFAILEDDLG_H
#define UI_FINDFAILEDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>

QT_BEGIN_NAMESPACE

class Ui_FindFailedDlg
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *fail_tip;
    QLabel *fail_tip2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    ClickedBtn *fail_sure_button;

    void setupUi(QDialog *FindFailedDlg)
    {
        if (FindFailedDlg->objectName().isEmpty())
            FindFailedDlg->setObjectName(QString::fromUtf8("FindFailedDlg"));
        FindFailedDlg->resize(260, 163);
        verticalLayout = new QVBoxLayout(FindFailedDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        fail_tip = new QLabel(FindFailedDlg);
        fail_tip->setObjectName(QString::fromUtf8("fail_tip"));
        fail_tip->setMinimumSize(QSize(0, 25));
        fail_tip->setMaximumSize(QSize(16777215, 25));
        fail_tip->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(fail_tip);

        fail_tip2 = new QLabel(FindFailedDlg);
        fail_tip2->setObjectName(QString::fromUtf8("fail_tip2"));
        fail_tip2->setMinimumSize(QSize(0, 25));
        fail_tip2->setMaximumSize(QSize(16777215, 25));
        fail_tip2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(fail_tip2);

        widget = new QWidget(FindFailedDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fail_sure_button = new ClickedBtn(widget);
        fail_sure_button->setObjectName(QString::fromUtf8("fail_sure_button"));
        fail_sure_button->setMinimumSize(QSize(100, 30));
        fail_sure_button->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(fail_sure_button);


        verticalLayout->addWidget(widget);


        retranslateUi(FindFailedDlg);

        QMetaObject::connectSlotsByName(FindFailedDlg);
    } // setupUi

    void retranslateUi(QDialog *FindFailedDlg)
    {
        FindFailedDlg->setWindowTitle(QApplication::translate("FindFailedDlg", "Dialog", nullptr));
        fail_tip->setText(QApplication::translate("FindFailedDlg", "\346\234\252\346\211\276\345\210\260\350\257\245\347\224\250\346\210\267\357\274\201", nullptr));
        fail_tip2->setText(QApplication::translate("FindFailedDlg", "\350\257\267\346\243\200\346\237\245\346\202\250\345\241\253\345\206\231\347\232\204\350\264\246\345\217\267\346\230\257\345\220\246\346\255\243\347\241\256", nullptr));
        fail_sure_button->setText(QApplication::translate("FindFailedDlg", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindFailedDlg: public Ui_FindFailedDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDFAILEDDLG_H
