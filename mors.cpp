#include "mors.h"

Mors::Mors()
{
    charHash['a'] = ".-";
    charHash['b'] = "-...";
    charHash['c'] = "-.-.";
    charHash['d'] = "-..";
    charHash['e'] = ".";
    charHash['f'] = "..-.";
    charHash['g'] = "--.";
    charHash['h'] = "....";
    charHash['i'] = "..";
    charHash['j'] = ".---";
    charHash['k'] = "-.-";
    charHash['l'] = ".-..";
    charHash['m'] = "--";
    charHash['n'] = "-.";
    charHash['o'] = "---";
    charHash['p'] = ".--.";
    charHash['q'] = "--.-";
    charHash['r'] = ".-.";
    charHash['s'] = "...";
    charHash['t'] = "-";
    charHash['u'] = "..-";
    charHash['v'] = "...-";
    charHash['w'] = ".--";
    charHash['x'] = "-..-";
    charHash['y'] = "-.--";
    charHash['z'] = "--..";
    charHash['0'] = "-----";
    charHash['1'] = ".----";
    charHash['2'] = "..---";
    charHash['3'] = "...--";
    charHash['4'] = "....-";
    charHash['5'] = ".....";
    charHash['6'] = "-....";
    charHash['7'] = "--...";
    charHash['8'] = "---..";
    charHash['9'] = "----.";
    charHash['.'] = ".-.-.-";
    charHash[','] = "--..--";
    charHash['?'] = "..--..";
    charHash[' '] = "/";
}

QString Mors::translate(QString &input)
{
    qDebug()<< input;

    input.remove(QRegExp("[^a-zA-Z\\d\\s]"));

    //input.remove(QRegExp(QString::fromUtf8("[-`~!@#$%^&*()_—+=|:;<>«»,.?/{}\'\"\\\[\\\]\\\\]")));

    input.toLower();

    qDebug()<<input;

    //QHash<QChar, QString>::const_iterator iterator;
    QString tmp;

    for(int i=0; i< input.size(); i++)
    {
        qDebug()<<input[i];
        tmp = charHash[input[i]];
        output.append(tmp);
    }
    return output;

}
