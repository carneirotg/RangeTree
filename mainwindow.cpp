#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rangenode.h"

#include <stdio.h>
#include <QMessageBox>
#include <iostream>


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
void MainWindow::clearInserirBox(){
    ui->lineEditNomeInserir->clear();
    ui->spinBoxCoordenadaXInserir->setValue(0);
    ui->spinBoxCoordenadaYInserir->setValue(0);
}

void MainWindow::on_pushButtonLimparInserir_clicked(){
   clearInserirBox();
}
void MainWindow::on_pushButtonInserir_clicked(){

    std::string name;
    if(!ui->lineEditNomeInserir->text().isEmpty()){
         name = ui->lineEditNomeInserir->text().toStdString();
         int x = ui->spinBoxCoordenadaXInserir->value();
         int y = ui->spinBoxCoordenadaYInserir->value();
         RangeNode* rn = new RangeNode(name, x, y);         
         mainRangeTree.insertNode(rn);
         clearInserirBox();
    } else {
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

