#ifndef NOTECREATOR_H
#define NOTECREATOR_H

#include <QMainWindow>
#include "profile.h"
#include <QTextEdit>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "note.h"
#include "QFontDialog"
#include "QFont"

namespace Ui {
class NoteCreator;
}

class NoteCreator : public QMainWindow
{
    Q_OBJECT


public:
    explicit NoteCreator(QWidget *parent = 0);
    explicit NoteCreator(QWidget *parent, Note *my_list);
    ~NoteCreator();

private slots:


    void on_actionCopy_triggered();

    void on_actionSave_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_File_triggered();

    void on_actionSave_As_triggered();

    void on_actionUnderline_triggered();

    void on_actionItalics_triggered();

    void on_actionBold_triggered();

    void on_actionFont_triggered();





    void on_fontComboBox_activated(const QString &arg1);

    void on_actionFont_Color_triggered();

    void on_actionHighlight_Color_triggered();

    void on_writeSpace_textChanged();



    void on_actionSave_As_Online_triggered();

private:
    Ui::NoteCreator *ui;
    QString filePath;
    Note list;

    //QFontComboBox * fontBox;// = new QFontComboBox;
};

#endif // NOTECREATOR_H
