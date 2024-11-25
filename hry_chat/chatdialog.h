#ifndef CHATDIALOG_H
#define CHATDIALOG_H
#include <QDialog>
#include"global.h"
#include"statewidget.h"

namespace Ui {
class ChatDialog;
}

class ChatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChatDialog(QWidget *parent = nullptr);
    ~ChatDialog();

    void addChatUserList();// 测试添加用户列表
    void ClearLabelState(StateWidget* lb);

private:
    Ui::ChatDialog *ui;

    void ShowSearch(bool bsearch = false);
    void AddLBGroup(StateWidget* lb);

    ChatUIMode _mode;
    ChatUIMode _state;

    bool _b_loading;
    QList<StateWidget*> _lb_list;

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;
    void handleGlobalMousePress(QMouseEvent* event);

private slots:
    void slot_loading_chat_user();
    void slot_side_chat();
    void slot_side_contact();
    void slot_text_changed(const QString& s);
};

#endif // CHATDIALOG_H