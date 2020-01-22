#pragma once
#include <QObject>
#include <QWebEngineView>
#include "epubrenderer.h"

class Book : public QObject
{
    Q_OBJECT

public:
    Book(const QString& epubPath, EpubRenderer* view);
    ~Book();

    void open();
    bool hasUnsavedChanges();
    // open - ����������� �� ��������� ����� � ����������� ��������
    // save - ������� dom � ������� � ��������� ���������� ��������� ����� � epub � epub
    // close - ���������?, ����� ������ �� �������

    // getExtraContent(key) // � ������� ������� ���� ���������. ����� �� �����?
    // setExtraContent(key, value);

    // getRenderer

private:
    EpubRenderer* m_renderer;
    QString m_epubPath;
};
