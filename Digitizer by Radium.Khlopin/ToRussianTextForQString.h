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

/**
 * \brief ������� ����������� ������ �� QString, � ������� ����� ����� ���� ������� �������.
 */
static std::string makeStdString(const QString& text) {
	auto byteArray = text.toLocal8Bit();
	return std::string(byteArray.data(), byteArray.size());
}

static QString makeQString(const std::string& text) {
	return QString::fromLocal8Bit(text.data(), text.size());
}