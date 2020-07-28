#ifndef DBHELPER_H
#define DBHELPER_H

#include <QtSql>
#include <QSqlDatabase>
#include <vector>

#include "exercise.h"

class dbHelper{
    QSqlDatabase db;

public:
    dbHelper();

    bool open();
    void close();
    std::vector<Exercise *> getExercises();
};

#endif // DBHELPER_H
