#ifndef ENTRYMENU_H
#define ENTRYMENU_H

#include <QMainWindow>

namespace Ui {
class EntryMenu;
}

class EntryMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit EntryMenu(QWidget *parent = 0);
    ~EntryMenu();

private:
    Ui::EntryMenu *ui;
};

#endif // ENTRYMENU_H
