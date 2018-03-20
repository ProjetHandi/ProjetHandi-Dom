/********************************************************************************
** Form generated from reading UI file 'frame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_H
#define UI_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QWidget *centralWidget;
    QPushButton *telephoner;
    QPushButton *precedent;
    QPushButton *suivant;
    QPushButton *contact1;
    QPushButton *contact2;
    QPushButton *contact3;
    QPushButton *contact4;
    QPushButton *contact5;
    QPushButton *contact6;

    void setupUi(QMainWindow *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QStringLiteral("Frame"));
        Frame->resize(602, 330);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frame->sizePolicy().hasHeightForWidth());
        Frame->setSizePolicy(sizePolicy);
        Frame->setMinimumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QStringLiteral("../Images/missk8.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Frame->setWindowIcon(icon);
        Frame->setStyleSheet(QLatin1String("p\n"
"{\n"
"    border-radius: 10px;\n"
"}"));
        centralWidget = new QWidget(Frame);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        telephoner = new QPushButton(centralWidget);
        telephoner->setObjectName(QStringLiteral("telephoner"));
        telephoner->setEnabled(true);
        telephoner->setGeometry(QRect(240, 270, 121, 51));
        sizePolicy.setHeightForWidth(telephoner->sizePolicy().hasHeightForWidth());
        telephoner->setSizePolicy(sizePolicy);
        telephoner->setCursor(QCursor(Qt::PointingHandCursor));
        telephoner->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Images/phone.png"), QSize(), QIcon::Normal, QIcon::Off);
        telephoner->setIcon(icon1);
        telephoner->setIconSize(QSize(32, 32));
        telephoner->setFlat(true);
        precedent = new QPushButton(centralWidget);
        precedent->setObjectName(QStringLiteral("precedent"));
        precedent->setEnabled(false);
        precedent->setGeometry(QRect(10, 100, 61, 81));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../T\303\251l\303\251chargements/f.png"), QSize(), QIcon::Normal, QIcon::Off);
        precedent->setIcon(icon2);
        precedent->setIconSize(QSize(64, 64));
        precedent->setFlat(true);
        suivant = new QPushButton(centralWidget);
        suivant->setObjectName(QStringLiteral("suivant"));
        suivant->setEnabled(true);
        suivant->setGeometry(QRect(530, 100, 61, 81));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../T\303\251l\303\251chargements/f2.png"), QSize(), QIcon::Normal, QIcon::Off);
        suivant->setIcon(icon3);
        suivant->setIconSize(QSize(64, 64));
        suivant->setFlat(true);
        contact1 = new QPushButton(centralWidget);
        contact1->setObjectName(QStringLiteral("contact1"));
        contact1->setGeometry(QRect(80, 20, 131, 121));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../Images/Documents/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        contact1->setIcon(icon4);
        contact1->setIconSize(QSize(128, 128));
        contact1->setFlat(true);
        contact2 = new QPushButton(centralWidget);
        contact2->setObjectName(QStringLiteral("contact2"));
        contact2->setGeometry(QRect(250, 30, 101, 101));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../Images/Documents/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        contact2->setIcon(icon5);
        contact2->setIconSize(QSize(128, 128));
        contact2->setFlat(true);
        contact3 = new QPushButton(centralWidget);
        contact3->setObjectName(QStringLiteral("contact3"));
        contact3->setGeometry(QRect(410, 30, 111, 101));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../Images/Documents/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        contact3->setIcon(icon6);
        contact3->setIconSize(QSize(128, 128));
        contact3->setFlat(true);
        contact4 = new QPushButton(centralWidget);
        contact4->setObjectName(QStringLiteral("contact4"));
        contact4->setGeometry(QRect(90, 160, 111, 101));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../Images/Documents/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        contact4->setIcon(icon7);
        contact4->setIconSize(QSize(128, 128));
        contact4->setFlat(true);
        contact5 = new QPushButton(centralWidget);
        contact5->setObjectName(QStringLiteral("contact5"));
        contact5->setGeometry(QRect(240, 160, 121, 111));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../Images/Documents/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        contact5->setIcon(icon8);
        contact5->setIconSize(QSize(128, 128));
        contact5->setFlat(true);
        contact6 = new QPushButton(centralWidget);
        contact6->setObjectName(QStringLiteral("contact6"));
        contact6->setGeometry(QRect(410, 160, 111, 101));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../Images/Documents/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        contact6->setIcon(icon9);
        contact6->setIconSize(QSize(128, 128));
        contact6->setFlat(true);
        Frame->setCentralWidget(centralWidget);

        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QMainWindow *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "HandiDom - Softphone", Q_NULLPTR));
        telephoner->setText(QString());
        precedent->setText(QString());
        suivant->setText(QString());
        contact1->setText(QString());
        contact2->setText(QString());
        contact3->setText(QString());
#ifndef QT_NO_TOOLTIP
        contact4->setToolTip(QApplication::translate("Frame", "<html><head/><body><p><span style=\" color:#cc0000;\">WESH</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        contact4->setText(QString());
        contact5->setText(QString());
        contact6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_H
