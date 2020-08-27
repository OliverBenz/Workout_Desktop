#pragma once

#include <QString>

class Exercise{
    QString m_name;
    size_t m_id;
    bool m_dumbbell;
    int m_recommended_sets;
    int m_recommended_reps;
    QString m_note;

public:
    Exercise(int m_id, QString, bool m_dumbbell, int sets, int reps);
    void setNote(QString m_note);

    QString getName();
};
