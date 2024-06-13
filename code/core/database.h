#ifndef DATABASE_H
#define DATABASE_H


//
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>


//
class Database : public QObject
{

	Q_OBJECT


public:

	//
	explicit Database(QObject *parent = nullptr);

	//
	[[nodiscard]]
	auto	createTable_Users(QSqlDatabase &db) noexcept -> std::optional<QSqlQuery>;


};

#endif // DATABASE_H
