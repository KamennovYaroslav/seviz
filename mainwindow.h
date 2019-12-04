#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QWebChannel>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class WebClass : public QObject
{
	Q_OBJECT
public slots:
	void onSentenceAction()
	{
		QMessageBox::information(NULL, "jscallme", "I'm called by js!");
	}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
