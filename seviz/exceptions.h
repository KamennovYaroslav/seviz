#pragma once
#include <exception>
#include <string>
#include <QString>

class qt_info_exception : std::exception {
public:
    qt_info_exception() {}

    qt_info_exception(const std::string& description) :
        m_descr(QString::fromStdString(description)) {}
    
    qt_info_exception(const QString& description) :
        m_descr(description) {}
  
    qt_info_exception(const char* description) :
        m_descr(description) {}
    

    QString description() const { return m_descr; }

private:
    QString m_descr;
};

class DuplicateModulesException : public qt_info_exception {
    const char* what() const override {
        return "������� ������ � ����������� ID";
    }
};

class IOException : qt_info_exception {
    using qt_info_exception::qt_info_exception;
    const char* what() const override {
        return description().prepend("������ ��� ������ �� ����: ").toLocal8Bit();
    }
};

class InvalidEpubException : qt_info_exception {
    using qt_info_exception::qt_info_exception;
};