#include <QMessageBox>

#include "dbhelper.h"
#include "mainwindow.h"

dbHelper::dbHelper(){
    this->db = QSqlDatabase::addDatabase("QMYSQL");
    this->db.setHostName("127.0.0.1");
    this->db.setUserName("root");
    this->db.setPassword("1234");
    this->db.setDatabaseName("workout");
}

bool dbHelper::open(){
    return this->db.open();
}

void dbHelper::close(){
   this->db.close();
}

std::vector<Exercise *> dbHelper::getExercises(){
    QSqlQuery query;
    query.exec("SELECT * FROM exercises;");

    std::vector<Exercise *> ex;
    while(query.next()){
        Exercise *exer = new Exercise(
            query.value(0).toInt(),
            query.value(1).toString(),
            query.value(2).toBool(),
            query.value(3).toInt(),
            query.value(4).toInt()
        );

        ex.push_back(exer);
    }
    return ex;
}
