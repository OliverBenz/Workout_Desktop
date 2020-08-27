#pragma once

#include <QtSql>
#include <QSqlDatabase>
#include <vector>

#include "exercise.hpp"

class dbHelper{
    QSqlDatabase db;

public:
    dbHelper();

    bool open();
    void close();
    std::vector<Exercise *> getExercises();
};
