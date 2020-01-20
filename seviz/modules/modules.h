#pragma once
#include <list>

/*
    ��� ���������� ������ ����� � ���� �����:
    1. ����������� header ������ ������
    2. � ������� ���� �������� �������� ������� ������ ������ (����������� ����� new!)
*/

#include "SyntaxTree/SyntaxTree.h"

class AbstractModule;
std::list<AbstractModule*> getSevizModulePointers() {
    return
    {
        new SyntaxTree()
    };
}