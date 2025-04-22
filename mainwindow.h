#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<QFileDialog>
#include<QBuffer>
#include<vector>
#include"opencv2/opencv.hpp"
#include"opencv2/highgui/highgui.hpp"//opencv高层GUI和媒体I/O
#include"opencv2/imgproc/imgproc.hpp"//opencv图像处理
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QSqlQuery>
#include<QTimer>
#include<QSqlError>
using namespace cv;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initMainWindow();
    void ctImgRead();
    void ctImgProc();
    void ctImgSave();
    void ctImgShow();
    void ctImgHoughCircles();
    void onTableSelectChange(int row);
    void showUserPhoto();
    static bool createMySqlConn()
    {
        QSqlDatabase sqldb = QSqlDatabase::addDatabase("QMYSQL");
        sqldb.setHostName("localhost");
        sqldb.setDatabaseName("patient");
        sqldb.setUserName("root");
        sqldb.setPassword("114514");
        if(!sqldb.open())
        {
            QMessageBox::critical(0,QObject::tr("false"),"false to connect",QMessageBox::Cancel);
            return false;
        }
        else
        {
            QMessageBox::information(0,QObject::tr("true"),"true to connect",QMessageBox::Cancel);
        }

//        QSqlQuery query(sqldb);
//        QString photoPath = "D:/Work/SUT/FY25/CPlus/Telemedicine/wxt.png";
//        QFile photoFile(photoPath);
//        if(photoFile.exists())
//        {
//            if (!photoFile.open(QIODevice::ReadOnly)) {
//                QMessageBox::information(0,QObject::tr("false"),"Failed to open photo file");
//                sqldb.close();
//                return false;
//            }
//            QByteArray picdata = photoFile.readAll();
//            photoFile.close();

//            QVariant var(picdata);
//            QString sqlstr = "UPDATE user_profile set picture=? where name='司马武彤'";
//            query.prepare(sqlstr);
//            query.addBindValue(var);
//            if(!query.exec())
//            {
//                QMessageBox::information(0,QObject::tr("false"),"photo false: " + query.lastError().text());
//            }
//            else
//            {
//                QMessageBox::information(0,QObject::tr("success"),"photo success");
//            }
//        }
//        else
//        {
//            QMessageBox::information(0,QObject::tr("false"),"Photo file does not exist");
//        }

        sqldb.close();
        return true;
    }
private slots:
    void on_startPushButton_clicked();
    void on_basicTableView_clicked(const QModelIndex &index);
    void on_tabWidget_tabBarClicked(int index);
    void onTimeOut();

private:
    Ui::MainWindow *ui;
    Mat myCtImg;
    Mat myCtGrayImg;
    QImage myCtQImage;
    QSqlTableModel *model;
    QSqlTableModel *model_d;
    QTimer *myTimer;

};
#endif // MAINWINDOW_H
