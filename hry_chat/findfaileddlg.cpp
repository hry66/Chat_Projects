#include "findfaileddlg.h"
#include "ui_findfaileddlg.h"
#include<QDebug>

FindFailedDlg::FindFailedDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindFailedDlg)
{
    ui->setupUi(this);
    setWindowTitle("添加");
    setWindowFlags(windowFlags()|Qt::FramelessWindowHint);
    this->setObjectName("FindFailedDlg");
    ui->fail_sure_button->SetState("normal","hover","press");
    this->setModal(true);
}

FindFailedDlg::~FindFailedDlg()
{
    qDebug()<<"FindFailedDlg destruct";
    delete ui;
}

void FindFailedDlg::on_fail_sure_button_clicked()
{
    this->hide();
}
