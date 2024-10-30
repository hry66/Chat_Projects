#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    login_dlg=new LoginDialog(this);
    login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(login_dlg);
    //login_dlg->show();

    //和注册界面的连接
    connect(login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchRegister);

    //连接登陆界面忘记密码信号
    connect(login_dlg,&LoginDialog::switchReset,this,&MainWindow::SlotSwitchReset);

    register_dlg=new RegisterDialog(this);
    login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    register_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    register_dlg->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SlotSwitchRegister()
{
    register_dlg = new RegisterDialog(this);

    register_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //连接注册界面返回登录信号
    connect(register_dlg, &RegisterDialog::sigSwitchLogin, this, &MainWindow::SlotSwitchLogin);

    setCentralWidget(register_dlg);
    login_dlg->hide();
    register_dlg->show();
}

void MainWindow::SlotSwitchLogin()
{
    //创建一个CentralWidget, 并将其设置为MainWindow的中心部件
    login_dlg = new LoginDialog(this);
    login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(login_dlg);

    register_dlg->hide();
    login_dlg->show();

    //连接登录界面注册信号
    connect(login_dlg, &LoginDialog::switchRegister, this, &MainWindow::SlotSwitchRegister);

    //注册返回登录信号和槽函数
    connect(login_dlg, &LoginDialog::switchReset, this, &MainWindow::SlotSwitchReset);
}

void MainWindow::SlotSwitchReset()
{
    //创建一个CentralWidget, 并将其设置为MainWindow的中心部件
    reset_dlg = new ResetDialog(this);
    reset_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    setCentralWidget(reset_dlg);
    login_dlg->hide();
    reset_dlg->show();

    //注册返回登录信号和槽函数
    connect(reset_dlg, &ResetDialog::switchLogin, this, &MainWindow::SlotSwitchReset2Login);
}

void MainWindow::SlotSwitchReset2Login()
{
    //创建一个CentralWidget, 并将其设置为MainWindow的中心部件
    login_dlg = new LoginDialog(this);
    login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(login_dlg);

    reset_dlg->hide();
    login_dlg->show();

    //连接登录界面注册信号
    connect(login_dlg, &LoginDialog::switchReset, this, &MainWindow::SlotSwitchReset);
    //连接登录界面注册信号
    connect(login_dlg, &LoginDialog::switchRegister, this, &MainWindow::SlotSwitchRegister);
}

