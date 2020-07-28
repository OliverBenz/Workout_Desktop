#include "exercise.h"

Exercise::Exercise(int id, QString name, bool dumbbell, int reps, int sets){
    this->id = id;
    this->name = name;
    this->dumbbell = dumbbell;
    this->recommended_reps = reps;
    this->recommended_sets = sets;
}

void Exercise::setNote(QString note){
    this->note = note;
}

QString Exercise::getName(){
    return this->dumbbell ? this->name + " (Dumbell)" : this->name;
}
