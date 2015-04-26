#include "stdafx.h"
#include "MyString.h"

class CMyString
{
public:
// ����������� �� ���������
CMyString();
// �����������, ���������������� ������ ������� ������
// � ����������� ������� ��������
CMyString(const char * pString)
{

};
// �����������, ���������������� ������ ������� ��
// ����������� ������� �������� �����
CMyString(const char * pString, unsigned length);
// ����������� �����������
CMyString(CMyString const& other);
// ������������ ����������� (��� ������������, ����������� � C++11)
// ����������� ��������� � ������������ ���������� ������������
CMyString(CMyString && other);
// �����������, ���������������� ������ ������� ��
// ������ ����������� ���������� C++
CMyString(std::string const& stlString);
// ���������� ������ - ����������� ������, ���������� ��������� ������
~CMyString();
// ���������� ����� ������ (��� ����� ������������ �������� �������)
unsigned GetLength()const
{
	sizeof(massiv)/sizeof(massiv[0]);
}
// ���������� ��������� �� ������ �������� ������.
// � ����� ������� ����������� ������ ���� ����������� ������� ������
// ���� ���� ������ ������
const char* GetStringData()const;
// ���������� ��������� � �������� ������� ������ �� ������ length ��������
CMyString const SubString(unsigned start, unsigned length = UINT_MAX)const;
// ������� ������ (������ ���������� ����� ������� �����)
void Clear();
};