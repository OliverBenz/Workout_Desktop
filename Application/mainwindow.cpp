#include <vector>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbhelper.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    this->fillList();
}

MainWindow::~MainWindow(){
    for(Exercise* ex: this->exercises)
        delete ex;
    delete ui;
}

void MainWindow::setName(const QString &name){
    ui->lineEdit->setText(name);
}

QString MainWindow::getName(){
    return ui->lineEdit->text();
}

void MainWindow::fillList(){
    dbHelper db;
    if(db.open()){
        this->exercises = db.getExercises();
        db.close();
    }

    for(auto it = std::begin(this->exercises); it != std::end(this->exercises); ++it){
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setText((*it)->getName());
        ui->listExercises->addItem(newItem);
    }
}
