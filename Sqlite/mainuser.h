#ifndef MAINUSER_H
#define MAINUSER_H
#include <QMainWindow>
#include <QDialog>
#include "searchnote.h"
#include <QMenu>




namespace Ui {
class MainUser;
}

class MainUser : public QDialog
{
    Q_OBJECT

public:
    explicit MainUser(QWidget *parent = 0);
    ~MainUser();

private slots:
    void on_addNotesButton_clicked();

private:
    Ui::MainUser *ui;
};

#endif // MAINUSER_H
