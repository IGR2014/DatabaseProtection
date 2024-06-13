//
#include "database.h"
//
#include <QDebug>
#include <QSqlError>


//
Database::Database(QObject *parent) :
	QObject {parent}
{
	//

}

//
[[nodiscard]]
auto Database::createTable_Users(QSqlDatabase &db) noexcept -> std::optional<QSqlQuery>
{
	const auto text	= QString(
R"query(CREATE TABLE IF NOT EXISTS Users (
	ID INTEGER NOT NULL,
	UserName BLOB NOT NULL,
	UserPassword BLOB NOT NULL,
	UserPhrase BLOB NOT NULL
);)query").trimmed();
	auto query = QSqlQuery {db};
	if (!query.prepare(text)) {
		qDebug() << query.lastError() << '\n' << Qt::endl;
		return std::nullopt;
	}
	qDebug().nospace().noquote() << text << '\n' << Qt::endl;
	return query;
}
