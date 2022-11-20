#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/user.jpg");
    int w=ui->labelPic->width();
    int h=ui->labelPic->height();
    ui->labelPic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->statusBar->addPermanentWidget(ui->label_progres);
    ui->statusBar->addPermanentWidget(ui->progressBar);


}

MainWindow::~MainWindow()
{
    delete ui;
}
;
void MainWindow::on_Login_clicked()
{
    QString username =ui->LineEditName->text();
    QString password =ui->LineEditPassword->text();
    if(username=="test"&& password=="test"){
        QMessageBox::information(this,"Login","Username and password correct");
        secdialog= new SecDialog(this);
        secdialog->show();
        ui->statusBar->showMessage("Username and pasword correct",5000);
    }
    else{
        ui->statusBar->showMessage("Usarname and password not correct",5000);
        QMessageBox::warning(this,"Login","username and password is not correct");
    }
}
