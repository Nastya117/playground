#ifndef VINTIC_H
#define VINTIC_H
#include <QObject>
#include <QVariant>


class Vintic : public QObject
{
    Q_OBJECT
public:
    Vintic(QObject* = nullptr);
public slots:
    int x();
    QVariantList vinny();
};

#endif // VINTIC_H
