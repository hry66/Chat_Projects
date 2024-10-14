#include "mainwindow.h"
#include <QApplication>
#include<QFile>

/******************************************************************************
 *
 * @file       main.cpp
 * @brief      主窗口
 *
 * @author     hry(cited from llfc)
 * @date       2024/09/18
 * @history
 *****************************************************************************/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //加载qss
    QFile qss(":/style/stylesheet.qss");
    if(qss.open(QFile::ReadOnly)){
        qDebug("Open qss successed");
        QString style=QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }
    else{
        qDebug("Open qss failed");
    }

    QString fileName="config.ini";
    QString app_path=QCoreApplication::applicationDirPath();
    QString config_path=QDir::toNativeSeparators(app_path+QDir::separator()+fileName);
    QSettings settings(config_path,QSettings::IniFormat);
    QString gate_host=settings.value("GateServer/host").toString();
    QString gate_port=settings.value("GateServer/port").toString();
    gate_url_prefix="http://"+gate_host+":"+gate_port;

    MainWindow w;
    w.show();
    w.adjustSize();//后加的
    return a.exec();
}
