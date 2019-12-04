#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	WebClass* webobj = new WebClass();
	QWebChannel* channel = new QWebChannel(this);
	channel->registerObject("webobj", webobj);
	ui->webEngineView->page()->setWebChannel(channel);

    ui->webEngineView->setUrl(QUrl("file:///html/book.html"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
