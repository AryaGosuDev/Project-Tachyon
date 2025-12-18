#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ProjectTachyon.h"

class ProjectTachyon : public QMainWindow
{
    Q_OBJECT

public:
    ProjectTachyon(QWidget *parent = nullptr);
    ~ProjectTachyon();

private:
    Ui::ProjectTachyonClass ui;
};

