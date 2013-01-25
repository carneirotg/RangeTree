#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    //Ações dos ìtens do menu
    void on_actionSair_triggered();
   // Formulário Inserir
    void on_pushButtonLimparInserir_clicked();
    void on_pushButtonInserir_clicked();
    //Formulário Excluir
    void on_pushButtonLimparExcluir_clicked();
    //Formulário Buscar por Nó
    void on_pushButtonLimparBuscaNo_clicked();
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
