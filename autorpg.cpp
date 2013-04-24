#include "autorpg.h"
#include "ui_autorpg.h"

#include <QDebug>

AutoRpg::AutoRpg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AutoRpg)
{
    ui->setupUi(this);
}

AutoRpg::~AutoRpg()
{
    delete ui;
}

void AutoRpg::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}



void AutoRpg::on_actionNew_character_triggered()
{
    NewCharacter *newCharDlg = new NewCharacter(this);

    connect(newCharDlg, SIGNAL(characterCreated(Character*)), this, SLOT(startGame(Character*)) );

    if( newCharDlg->exec() == QDialog::Accepted ) {
        ui->statusBar->showMessage("Character " + m_Character->getName() + " created!", 5000);
    }
}

void AutoRpg::startGame(Character *ch)
{
    m_Character = ch;
    game = new Game(ch, ui->te_EventLog);
    connect(game, SIGNAL(update()), this, SLOT(updateData()));
    game->start();
    ui->frame->setEnabled(true);
    updateData();
}

void AutoRpg::on_actionGenerate_name_triggered()
{
    NameGenerator::generate(m_Character->getRace(), m_Character->getClass());
}

void AutoRpg::updateData()
{
    ui->lb_chName->setText(m_Character->getFullName());
    ui->lb_chStr->setText(QVariant(m_Character->getStr()).toString());
    ui->lb_chDex->setText(QVariant(m_Character->getDex()).toString());
    ui->lb_chCon->setText(QVariant(m_Character->getCon()).toString());
    ui->lb_chInt->setText(QVariant(m_Character->getInt()).toString());

    ui->prb_Exp->setMinimum(0);
    ui->prb_Exp->setMaximum(m_Character->getExpToLvlUp());
    ui->prb_Exp->setValue(m_Character->getExp());
}
