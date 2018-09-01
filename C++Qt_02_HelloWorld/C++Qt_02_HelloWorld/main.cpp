#include <QtCore/QCoreApplication>
#include <QDebug>					//Gibt Zugriff auf Qt "Debugfunktionen".

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);	//"QCoreApplication" ist Teil von "QtCore" und ist die Applikation selbst.

	qDebug() << "Hello World!";		//"qDebug" ist eine Debugfunktion. Hier wird der QString "Hello World" in der Konsole ausgegeben.

	return a.exec();				//Hier wird die QCoreApplication "a" ausgeführt.
}
