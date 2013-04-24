﻿#ifndef AUTORPG_H
#define AUTORPG_H

#include "newcharacter.h"
#include "game.h"

#include <QMainWindow>

namespace Ui {
class AutoRpg;
}

class AutoRpg : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit AutoRpg(QWidget *parent = 0);
    ~AutoRpg();


protected:
    void changeEvent(QEvent *e);

public slots:
    void updateData();

private slots:
    void on_actionNew_character_triggered();
    void startGame(Character* ch);

    void on_actionGenerate_name_triggered();

private:

    Ui::AutoRpg *ui;

    Game *game;
    Character* m_Character;

};

#endif // AUTORPG_H
