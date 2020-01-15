#ifndef EPUBRENDERER_H
#define EPUBRENDERER_H

#include <QObject>
#include <QWebEngineView>

class EpubRenderer : public QObject
{
	Q_OBJECT
public:
    explicit EpubRenderer(QWebEngineView*);

	void open(const QString& opfPath);
	// close
	// ����� ��������� dom?
	// reload
	
	// C++ �� ��������� ������ namespace ������ �������. ��������� ������ ����� �����������.
	// [[deprecated("��� ������������� �������� ��������� � JS/CSS ������ ��������.")]] ?
	// ��������� js �� ��������
	// �������� css �� ��������

	// ������� ��������� ������ �� �� �������
	// ���������������� ����������
	// ����� ����������� �����������
	// ������ ��� ����� ������ ��� ������ �������� ������
	
public slots:
	void setPageLoadedState(bool loaded) { 
		// std::conditional_variable
		qDebug() << "page loaded: " << loaded;
		if (loaded)
			this->open("ivanhoe.epub");
	}

private:
	QWebEngineView *m_view;
	QWebChannel* m_webchannel;
};

#endif // EPUBRENDERER_H
