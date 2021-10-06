#include "bomber.h"
#include "ui_bomber.h"

bomber::bomber(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::bomber)
{
    ui->setupUi(this);
}

bomber::~bomber()
{
    delete ui;
}

