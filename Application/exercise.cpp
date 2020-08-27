#include "exercise.hpp"

Exercise::Exercise(int id, QString name, bool dumbbell, int reps, int sets){
    this->m_id = id;
    this->m_name = name;
    this->m_dumbbell = dumbbell;
    this->m_recommended_reps = reps;
    this->m_recommended_sets = sets;
}

void Exercise::setNote(QString note){
    this->m_note = note;
}

QString Exercise::getName(){
    return this->m_dumbbell ? this->m_name + " (Dumbell)" : this->m_name;
}
