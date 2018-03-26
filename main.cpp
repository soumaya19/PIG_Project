#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;



    string colorPlayer1="#ffffff", colorPlayer2="#ffffff";



    return app.exec();

}
