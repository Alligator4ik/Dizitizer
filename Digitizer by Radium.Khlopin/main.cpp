#include <MainWindowController.h>

int main(int argc, char *argv[])
{
	ios_base::sync_with_stdio(false);
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
