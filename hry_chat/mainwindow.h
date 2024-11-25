#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"logindialog.h"
#include"registerdialog.h"
#include"resetdialog.h"
#include"chatdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    LoginDialog* login_dlg;
    RegisterDialog* register_dlg;
    ResetDialog* reset_dlg;
    ChatDialog* chat_dlg;

public slots:
    void SlotSwitchRegister();
    void SlotSwitchLogin();
    void SlotSwitchReset();
    void SlotSwitchReset2Login();
    void SlotSwitchChat();
};
#endif // MAINWINDOW_H
