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

QString Mors::translateToText(QString &input)
{
   qDebug()<< input;

   //remove all characters that are different than . - and space
   input.remove(QRegExp("[^.\\^-\\]"));
   qDebug()<< input;

   //double space split into single words
   QStringList singleWords = input.split("  ", QString::SkipEmptyParts);
   QStringList strings;

   //iterate through singleWords
   foreach (auto &string, singleWords)
   {
     strings = string.split(" ", QString::SkipEmptyParts);

     for (auto i = strings.begin(); i!= strings.end(); ++i)
     {
        qDebug()<<charHash.key(*i);
        output.append(charHash.key(*i));
     }

     output.append(" ");
   }

   return output;
}

QString Mors::translateToMorse(QString &input)
{
    //qDebug()<< input;

    //remove all chars which are not alphanumerical and spaces
    input.remove(QRegExp("[^a-zA-Z\\d\\s]"));

    //make lower case
    input.toLower();

    QString tmp;

    for(int i=0; i< input.size(); i++)
    {
        //qDebug()<<input[i];
        tmp = charHash[input[i]];
        output.append(tmp);
    }

    return output;
}
