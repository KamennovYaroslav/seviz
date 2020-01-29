#ifndef EPUBRENDERER_H
#define EPUBRENDERER_H

#include <QObject>
#include <QWebEngineView>
#include <QVariant>
#include <QVector>
#include "BookModels.h"

class EpubRenderer : public QObject
{
    Q_OBJECT
public:
    explicit EpubRenderer(QWebEngineView*);

    // ��������� �����. ��������: �������� ����������
    void open(const QString& opfPath);
    void showChapter(int index);
    void close();
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
        // conditional variable?
        qDebug() << "page loaded: " << loaded;
        //if (loaded)
            //this->open("ivanhoe.epub");
    }

    void setChaptersList(const QVariant&);
    
signals:
    void bookLoaded(const QVector<Chapter> &chapters);

private:
    QWebEngineView *m_view;
    QWebChannel* m_webchannel;
};

#endif // EPUBRENDERER_H
