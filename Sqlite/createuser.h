#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class CreateUser;
}

class CreateUser : public QDialog
{
    Q_OBJECT

public:
    explicit CreateUser(QWidget *parent = 0);
    ~CreateUser();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateUser *ui;
};

#endif // CREATEUSER_H
