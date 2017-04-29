#include <QtWidgets/QApplication>
#include "qrplusplus.h"

int main(int argc, char *argv[]){
	QApplication apps(argc, argv);
	QRplusplus w;
	w.show();

	return apps.exec();
}