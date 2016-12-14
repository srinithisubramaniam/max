#include <QApplication>
#include <Qtsql>
#include <QtGui/QWindow>
#include <QMessageBox>
#include <QTableWidget>
#include<QTableview.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
QTableWidget* table= new QTableWidget();
   // db.setHostName("local host");
    db.setDatabaseName("sri");
    db.setUserName("root");
    db.setPassword("admin");
 //bool ok = db.open();
    if (!db.open())
       {
        // QMessageBox::critical(0, QObject::tr("Database Error"),
                   //db.lastError().text());
        qDebug() << "DATABASE not connected";

       }
    else
            qDebug() << "DATABASE connected";

      QSqlQuery query("SELECT * FROM test");
      table = new QTableWidget();
      table->setWindowTitle("Connect to mysql database example");


    table->setColumnCount(query.record().count());
   table->setRowCount(query.size());

    int index=0;
   while (query.next())
   {
   table->setItem(index,0,new QTableWidgetItem(query.value(0).toString()));
   table->setItem(index,1,new QTableWidgetItem(query.value(1).toString()));
    table->setItem(index,2,new QTableWidgetItem(query.value(2).toString()));

   table->setWindowTitle(QString::fromUtf8("student table"));
   table->resize(376, 301);
   table->item(0,0)->setBackgroundColor(Qt::lightGray);
   table->item(0,1)->setBackgroundColor(Qt::yellow);
    table->item(0,2)->setBackgroundColor(Qt::darkMagenta);


        QPalette* palette = new QPalette();
        palette->setBrush(QPalette::Base,*(new QBrush(*(new QPixmap("D:/image3.jpg")))));
        table->setPalette(*palette);


   index++;
   }

    table->show();
    return a.exec();

}
