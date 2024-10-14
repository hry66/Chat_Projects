#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    login_dlg=new LoginDialog(this);
    setCentralWidget(login_dlg);
    //login_dlg->show();

    //和注册界面的连接
    connect(login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchRegister);
    register_dlg=new RegisterDialog(this);

    login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    register_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    register_dlg->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
//    if(login_dlg){
//        delete login_dlg;
//        login_dlg=nullptr;
//    }
//    if(register_dlg){
//        delete register_dlg;
//        register_dlg=nullptr;
//    }
}

void MainWindow::SlotSwitchRegister()
{
    setCentralWidget(register_dlg);
    login_dlg->hide();
    register_dlg->show();
}

