#pragma once

#include <QMainWindow>
#include <vector>

#include "exercise.hpp"

QT_BEGIN_NAMESPACE
    namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT
    std::vector<Exercise *> exercises;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setName(const QString &name);
    QString getName();
    void fillList();

private:
    Ui::MainWindow *ui;
};
