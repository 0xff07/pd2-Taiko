#include "entrymenu.h"
#include "ui_entrymenu.h"

EntryMenu::EntryMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EntryMenu)
{
    ui->setupUi(this);
}

EntryMenu::~EntryMenu()
{
    delete ui;
}
