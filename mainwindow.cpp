#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rangenode.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Ações dos Ítens do Menu
void MainWindow::on_actionSair_triggered(){
        QApplication::quit();
}

//Formulário Inserir
void MainWindow::on_pushButtonLimparInserir_clicked(){
    ui->lineEditNomeInserir->clear();
    ui->spinBoxCoordenadaXInserir->setValue(0);
    ui->spinBoxCoordenadaYInserir->setValue(0);
}
void MainWindow::on_pushButtonInserir_clicked(){
    if(ui->lineEditNomeInserir->text().isEmpty()){
         QMessageBox::critical(this,"Inclusão:","Favor digitar um nome válido.");
    }
}

//Formulário Excluir
void MainWindow::on_pushButtonLimparExcluir_clicked(){
    ui->spinBoxCoordenadaXExcluir->setValue(0);
    ui->spinBoxCoordenadaYExcluir->setValue(0);
}
//Formulário Buscar por Nó
void MainWindow::on_pushButtonLimparBuscaNo_clicked(){
    ui->spinBoxCoordenadaXBuscaNo->setValue(0);
    ui->spinBoxCoordenadaYBuscaNo->setValue(0);
}
