/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTreeWidget *treeWidget;
    QLabel *CT_Img_Label;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QLCDNumber *yearLcdNumber;
    QLCDNumber *monthLcdNumber;
    QLCDNumber *dayLcdNumber;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;
    QPushButton *startPushButton;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *nameLabel;
    QRadioButton *maleRadioButton;
    QRadioButton *femaleRadioButton;
    QSpinBox *ageSpinBox;
    QLabel *label_2;
    QComboBox *ethinComboBox;
    QLabel *label_4;
    QLineEdit *ssnLineEdit;
    QLabel *label_5;
    QLabel *photoLabel;
    QWidget *tab_2;
    QTableView *basicTableView;
    QTextEdit *caseTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(984, 803);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 0, 591, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 90, 256, 192));
        QPalette palette;
        QBrush brush(QColor(170, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        treeWidget->setPalette(palette);
        CT_Img_Label = new QLabel(centralwidget);
        CT_Img_Label->setObjectName(QString::fromUtf8("CT_Img_Label"));
        CT_Img_Label->setGeometry(QRect(300, 100, 591, 391));
        CT_Img_Label->setFrameShape(QFrame::Box);
        CT_Img_Label->setFrameShadow(QFrame::Sunken);
        CT_Img_Label->setPixmap(QPixmap(QString::fromUtf8("CT.png")));
        CT_Img_Label->setScaledContents(true);
        CT_Img_Label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 80, 72, 15));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(false);
        timeEdit->setGeometry(QRect(620, 70, 118, 22));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(10);
        timeEdit->setFont(font2);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setReadOnly(true);
        yearLcdNumber = new QLCDNumber(centralwidget);
        yearLcdNumber->setObjectName(QString::fromUtf8("yearLcdNumber"));
        yearLcdNumber->setGeometry(QRect(750, 70, 64, 23));
        yearLcdNumber->setDigitCount(4);
        yearLcdNumber->setProperty("value", QVariant(1900.000000000000000));
        monthLcdNumber = new QLCDNumber(centralwidget);
        monthLcdNumber->setObjectName(QString::fromUtf8("monthLcdNumber"));
        monthLcdNumber->setGeometry(QRect(820, 70, 31, 23));
        monthLcdNumber->setDigitCount(2);
        monthLcdNumber->setSegmentStyle(QLCDNumber::Flat);
        monthLcdNumber->setProperty("value", QVariant(1.000000000000000));
        dayLcdNumber = new QLCDNumber(centralwidget);
        dayLcdNumber->setObjectName(QString::fromUtf8("dayLcdNumber"));
        dayLcdNumber->setGeometry(QRect(860, 70, 31, 23));
        dayLcdNumber->setDigitCount(2);
        dayLcdNumber->setSegmentStyle(QLCDNumber::Flat);
        dayLcdNumber->setProperty("value", QVariant(1.000000000000000));
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(900, 110, 22, 371));
        verticalSlider->setValue(30);
        verticalSlider->setOrientation(Qt::Vertical);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(300, 500, 591, 22));
        horizontalSlider->setValue(60);
        horizontalSlider->setOrientation(Qt::Horizontal);
        startPushButton = new QPushButton(centralwidget);
        startPushButton->setObjectName(QString::fromUtf8("startPushButton"));
        startPushButton->setGeometry(QRect(300, 520, 93, 41));
        startPushButton->setFont(font1);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(410, 530, 481, 23));
        progressBar->setValue(0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 540, 251, 201));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        tabWidget->setPalette(palette1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        nameLabel = new QLabel(tab);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(30, 20, 71, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font3.setPointSize(14);
        nameLabel->setFont(font3);
        maleRadioButton = new QRadioButton(tab);
        maleRadioButton->setObjectName(QString::fromUtf8("maleRadioButton"));
        maleRadioButton->setGeometry(QRect(30, 50, 41, 19));
        maleRadioButton->setChecked(true);
        femaleRadioButton = new QRadioButton(tab);
        femaleRadioButton->setObjectName(QString::fromUtf8("femaleRadioButton"));
        femaleRadioButton->setGeometry(QRect(90, 50, 41, 19));
        femaleRadioButton->setChecked(false);
        ageSpinBox = new QSpinBox(tab);
        ageSpinBox->setObjectName(QString::fromUtf8("ageSpinBox"));
        ageSpinBox->setGeometry(QRect(90, 90, 42, 22));
        ageSpinBox->setValue(18);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 31, 20));
        ethinComboBox = new QComboBox(tab);
        ethinComboBox->addItem(QString());
        ethinComboBox->setObjectName(QString::fromUtf8("ethinComboBox"));
        ethinComboBox->setGeometry(QRect(80, 120, 87, 22));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 120, 31, 16));
        ssnLineEdit = new QLineEdit(tab);
        ssnLineEdit->setObjectName(QString::fromUtf8("ssnLineEdit"));
        ssnLineEdit->setEnabled(false);
        ssnLineEdit->setGeometry(QRect(110, 150, 113, 21));
        ssnLineEdit->setReadOnly(true);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 150, 72, 15));
        photoLabel = new QLabel(tab);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));
        photoLabel->setGeometry(QRect(150, 10, 81, 101));
        photoLabel->setFrameShape(QFrame::Panel);
        photoLabel->setScaledContents(true);
        photoLabel->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        basicTableView = new QTableView(centralwidget);
        basicTableView->setObjectName(QString::fromUtf8("basicTableView"));
        basicTableView->setGeometry(QRect(290, 570, 651, 171));
        caseTextEdit = new QTextEdit(centralwidget);
        caseTextEdit->setObjectName(QString::fromUtf8("caseTextEdit"));
        caseTextEdit->setGeometry(QRect(10, 300, 251, 221));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 984, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\215\227\344\272\254\345\270\202\351\274\223\346\245\274\345\214\273\351\231\242\350\277\234\347\250\213\350\257\212\346\226\255\347\263\273\347\273\237", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\351\274\223\346\245\274\345\214\273\351\231\242", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "\347\262\237\346\260\264\345\214\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "\351\252\250\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "\350\241\200\347\256\241\345\244\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "\345\277\203\350\204\217\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "\350\204\221\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("MainWindow", "\347\245\236\347\273\217\345\206\205\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("MainWindow", "\351\253\230\346\267\263\345\214\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("MainWindow", "\345\221\274\345\220\270\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("MainWindow", "\346\266\210\345\214\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem7->child(2);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("MainWindow", "\346\263\214\345\260\277\345\244\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem7->child(3);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("MainWindow", "\344\270\255\345\214\273\347\247\221", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        CT_Img_Label->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "CT \345\275\261\345\203\217", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "HH:mm:ss", nullptr));
        startPushButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\257\212\346\226\255", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "\346\202\243\350\200\205\345\220\215", nullptr));
        maleRadioButton->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        femaleRadioButton->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\271\264\351\276\204", nullptr));
        ethinComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\346\261\211", nullptr));

        ethinComboBox->setCurrentText(QCoreApplication::translate("MainWindow", "\346\261\211", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\260\221\346\227\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\214\273\344\277\235\345\215\241\347\274\226\345\217\267", nullptr));
        photoLabel->setText(QCoreApplication::translate("MainWindow", "\346\232\202\346\227\240\347\205\247\347\211\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\347\227\205\345\216\206", nullptr));
        caseTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\260\232\346\234\252\345\241\253\345\206\231</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
