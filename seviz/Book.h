#pragma once

#include <QObject>
#include <QWebEngineView>
#include "epubrenderer.h"

class Book : public QObject
{
	Q_OBJECT

public:
	Book(const QString& epubPath, QWebEngineView *view);
	~Book();

	void open();
	// open - ����������� �� ��������� ����� � ����������� ��������
	// save - ������� dom � ������� � ��������� ���������� ��������� ����� � epub � epub
	// close - ���������?, ����� ������ �� �������
	// hasSavedChanges ?

	// getExtraContent(key) // � ������� ������� ���� ���������. ����� �� �����?
	// setExtraContent(key, value);

	// getRenderer

private:
	EpubRenderer m_renderer;
	QString m_epubPath;
};
