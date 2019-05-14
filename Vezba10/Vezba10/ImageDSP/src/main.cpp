
#include "MainWindow.h"

#include <QApplication>

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	MainWindow& w = MainWindow(QString("prjs/features.imgdsp"), 0);
	w.showMaximized();

	return a.exec();
}
