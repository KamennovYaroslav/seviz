#ifndef EPUBRENDERER_H
#define EPUBRENDERER_H

#include <QObject>
#include <QWebEngineView>

class EpubRenderer : public QObject
{
    Q_OBJECT
public:
    explicit EpubRenderer(QWebEngineView*);

	// open
	// close
	// ����� ��������� dom?
	
	// C++ �� ��������� ������ namespace ������ �������. ��������� ������ ����� �����������.
	// [[deprecated("��� ������������� �������� ��������� � JS/CSS ������ ��������.")]] ?
	// ��������� js �� ��������
	// �������� css �� ��������

	// ������� ��������� ������ �� �� �������
	// ���������������� ����������
	// ����� ����������� �����������
	// ������ ��� ����� ������ ��� ������ �������� ������

private:
	QWebEngineView *m_view;
	QWebChannel* m_webchannel;
};

#endif // EPUBRENDERER_H
