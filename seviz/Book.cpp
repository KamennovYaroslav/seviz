#include "Book.h"
#include <exception>

Book::Book(const QString& epubPath, QWebEngineView* view) : 
    QObject(nullptr),
    m_renderer(view),
    m_epubPath(epubPath)
{
}

Book::~Book()
{
}

void Book::open() {
    // ����������� �� ��������� �����
    // �������� opf � epub.js
    m_renderer.open(m_epubPath); //TODO
    // ���� ������ - ������� exception
}
