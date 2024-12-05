#ifndef FINDFAILEDDLG_H
#define FINDFAILEDDLG_H

#include <QDialog>

namespace Ui {
class FindFailedDlg;
}

class FindFailedDlg : public QDialog
{
    Q_OBJECT

public:
    explicit FindFailedDlg(QWidget *parent = nullptr);
    ~FindFailedDlg();

private:
    Ui::FindFailedDlg *ui;

private slots:
    void on_fail_sure_button_clicked();
};

#endif // FINDFAILEDDLG_H
