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
    QString translate(QString &input);

private:
    //QHash faster than QMap if there are more than 20 elements
    QHash <QChar, QString> charHash;
    QHash <QString, QChar> morseHash;
    QString output;
};

#endif // MORS_H
