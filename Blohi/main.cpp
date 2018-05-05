#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <vintic.h>

int main(int argc, char *argv[])
{
    qmlRegisterType<Vintic>("Vi", 1, 0, "Vi");
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
