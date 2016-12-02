#ifndef SEARCHNOTE_H
#define SEARCHNOTE_H

#include "profile.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <search.h>
#include <QMenu>
#include "note.h"
#include "profile.h"

#include <QDialog>

namespace Ui {
class SearchNote;
}

class SearchNote : public QDialog
{
    Q_OBJECT

public:
    explicit SearchNote(QWidget *parent = 0);
    explicit SearchNote (QWidget *parent, Note list);
    ~SearchNote();

private slots:
    void on_searchButton_clicked();

    void on_addNoteYes_clicked();

    void on_quitButton_clicked();

private:
    Ui::SearchNote *ui;
    Note tempList;

public:
    Note returnNoteList();


};

#endif // SEARCHNOTE_H
