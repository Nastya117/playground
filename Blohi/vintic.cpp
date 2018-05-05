#include "vintic.h"
#include <QDebug>


Vintic::Vintic(QObject*)
{

}

int Vintic::x()
{
    int r = std::rand() % 800;
    return r;
}

QVariantList Vintic::vinny()
{
    QVariantList rez;
    QVariantMap a;
    a["id"] = QVariant("1");
    a["x"] = QVariant("100");
    a["y"] = QVariant("200");
    a["koblo"] = QVariant("14");
    rez.append(QVariant::fromValue(a));

    a["id"] = QVariant("2");
    a["x"] = QVariant("100");
    a["y"] = QVariant("200");
    a["koblo"] = QVariant("14");
    rez.append(QVariant::fromValue(a));

    a["id"] = QVariant("3");
    a["x"] = QVariant("100");
    a["y"] = QVariant("200");
    a["koblo"] = QVariant("14");
    rez.append(QVariant::fromValue(a));

    a["id"] = QVariant("4");
    a["x"] = QVariant("100");
    a["y"] = QVariant("200");
    a["koblo"] = QVariant("14");
    rez.append(QVariant::fromValue(a));

    a["id"] = QVariant("5");
    a["x"] = QVariant("100");
    a["y"] = QVariant("200");
    a["koblo"] = QVariant("14");
    rez.append(QVariant::fromValue(a));

    return rez;
}
