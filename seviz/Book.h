#pragma once

#include <QObject>
#include <QWebEngineView>
#include "epubrenderer.h"

class Book : public QObject
{
	Q_OBJECT

public:
	Book(QWebEngineView *view);
	~Book();

	// open - ����������� �� ��������� ����� � ����������� ��������
	// save - ������� dom � ������� � ��������� ���������� ��������� ����� � epub � epub
	// close - ���������?, ����� ������ �� �������
	// hasSavedChanges ?
	// reload

	// getExtraContent(key) // � ������� ������� ���� ��������� 
	// setExtraContent(key, value);

	// getRenderer

private:
	EpubRenderer m_renderer;
};
