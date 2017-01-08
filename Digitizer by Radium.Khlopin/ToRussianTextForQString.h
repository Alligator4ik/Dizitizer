#pragma once
#include <QTextCodec>

inline QString toRussian(const char * text) {
	// подбираем нужную кодировку, другой вариант UTF8
	return QTextCodec::codecForName("CP1251")->toUnicode(text);
}

inline QString toRussian(const QString text) {
	// подбираем нужную кодировку, другой вариант UTF8
	return QTextCodec::codecForName("CP1251")->toUnicode(text.toUtf8());
}