#include <QApplication>
#include <QMessageBox>

#include "mainwindow.h"
#include "dbhelper.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.setName("Slim Shady");
    w.show();

    return a.exec();
}
