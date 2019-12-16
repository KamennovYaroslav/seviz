#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QWebChannel>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	explicit MainWindow(QWidget* parent = nullptr);
	~MainWindow();

	void setSentenceText(const QString& text);

private:
	Ui::MainWindow* ui;
};

#endif // MAINWINDOW_H

class WebClass : public QObject
{
	Q_OBJECT

public:
	MainWindow* win;

public slots:
	void onSentenceAction(const QString& text)
	{
		win->setSentenceText(text);
	}
};



