#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCheckBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	connect(ui->checkBox, &QCheckBox::stateChanged, this, [this](int state) {
		if (state == Qt::Checked) {
			ui->webEngineView->page()->runJavaScript("enabledReaction = true;");
		} else {
			ui->webEngineView->page()->runJavaScript("enabledReaction = false;");
		}
	});
	
	WebClass* webobj = new WebClass();
	webobj->win = this;
	QWebChannel* channel = new QWebChannel(this);
	channel->registerObject("webobj", webobj);
	ui->webEngineView->page()->setWebChannel(channel);

    ui->webEngineView->setUrl(QUrl("file:///html/book.html"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setSentenceText(const QString& text) {
		ui->lineEdit->setText(text);
}