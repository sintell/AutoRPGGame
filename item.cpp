#include "item.h"

Item::Item() :
    m_Name("Trash")
{
}

Item::Item(QString name) :
    m_Name(name)
{
}

Item::Item(QString name, QList<unsigned> bonusStats) :
    m_Name(name),
    m_BonusStats(bonusStats)
{
}
