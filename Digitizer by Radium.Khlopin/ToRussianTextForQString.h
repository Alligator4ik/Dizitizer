#pragma once
#include <QTextCodec>

inline QString toRussian(const char * text) {
	// ��������� ������ ���������, ������ ������� UTF8
	return QTextCodec::codecForName("CP1251")->toUnicode(text);
}

inline QString toRussian(const QString text) {
	// ��������� ������ ���������, ������ ������� UTF8
	return QTextCodec::codecForName("CP1251")->toUnicode(text.toUtf8());
}