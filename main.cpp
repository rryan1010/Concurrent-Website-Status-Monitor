#include <QApplication>
#include "MainWindow.h"

// Create QApplication and opens MainWindow.
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}