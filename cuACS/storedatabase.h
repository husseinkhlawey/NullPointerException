#ifndef STOREDATABASE_H
#define STOREDATABASE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>

class storeDatabase : public QMainWindow
{
    Q_OBJECT
public:
    explicit storeDatabase(QWidget *parent = nullptr);

    QSqlDatabase databass;

    void closes();
    void opens();

signals:

public slots:
};

#endif // STOREDATABASE_H
