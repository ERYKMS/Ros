#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"secdialog.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Login_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *secdialog;
};

#endif // MAINWINDOW_H
