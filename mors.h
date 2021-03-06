#ifndef MORS_H
#define MORS_H
#include "QMap"
#include "QHash"
#include "QDebug"
#include "QRegExp"

class Mors
{
public:
    Mors();
    QString translateToMorse(QString &input);
    QString translateToText(QString &input);

private:
    //QHash faster than QMap if there are more than 20 elements
    QHash <QChar, QString> charHash;
    QString output;
};

#endif // MORS_H
