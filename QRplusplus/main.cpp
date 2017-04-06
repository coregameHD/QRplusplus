#include "qrplusplus.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QRplusplus w;
	w.show();
	return a.exec();
}
