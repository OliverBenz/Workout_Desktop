#ifndef EXERCISE_H
#define EXERCISE_H

#include <QString>

class Exercise{
    QString name;
    size_t id;
    bool dumbbell;
    int recommended_sets;
    int recommended_reps;
    QString note;

public:
    Exercise(int id, QString, bool dumbbell, int sets, int reps);
    void setNote(QString note);

    QString getName();
};

#endif // EXERCISE_H
