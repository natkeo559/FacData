/********************************************************************************
** Form generated from reading UI file 'FacDatanfPnIQ.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FACDATANFPNIQ_H
#define FACDATANFPNIQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QFrame *LeftFrame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_9;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *lineEdit_7;
    QLabel *label_6;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_8;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_12;
    QLabel *label_10;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_Default;
    QPushButton *pushButton_Refresh;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QFrame *TopRightFrame;
    QTabWidget *GraphSelectorWidget;
    QWidget *tab_1;
    QWidget *tab_2;
    QWidget *tab_3;
    QFrame *BottomRightFrame;

    void setupUi(QFrame *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName(QString::fromUtf8("Application"));
        Application->resize(902, 650);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Application->sizePolicy().hasHeightForWidth());
        Application->setSizePolicy(sizePolicy);
        Application->setFocusPolicy(Qt::ClickFocus);
        Application->setFrameShadow(QFrame::Raised);
        Application->setLineWidth(1);
        LeftFrame = new QFrame(Application);
        LeftFrame->setObjectName(QString::fromUtf8("LeftFrame"));
        LeftFrame->setGeometry(QRect(0, 0, 450, 650));
        sizePolicy.setHeightForWidth(LeftFrame->sizePolicy().hasHeightForWidth());
        LeftFrame->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(133, 131, 134, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(200, 197, 202, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(166, 164, 168, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(66, 65, 67, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(89, 87, 89, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(194, 193, 194, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        LeftFrame->setPalette(palette);
        LeftFrame->setAutoFillBackground(true);
        LeftFrame->setFrameShape(QFrame::StyledPanel);
        LeftFrame->setFrameShadow(QFrame::Plain);
        LeftFrame->setLineWidth(1);
        verticalLayoutWidget = new QWidget(LeftFrame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 431, 367));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_10 = new QLineEdit(verticalLayoutWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        QPalette palette1;
        QBrush brush10(QColor(48, 49, 50, 63));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        QBrush brush11(QColor(70, 70, 70, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_10->setPalette(palette1);
        lineEdit_10->setInputMethodHints(Qt::ImhNone);
        lineEdit_10->setFrame(true);
        lineEdit_10->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_10, 6, 1, 1, 1);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_3->setPalette(palette2);
        lineEdit_3->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_3, 1, 3, 1, 1);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_2->setPalette(palette3);
        lineEdit_2->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setTextFormat(Qt::PlainText);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_5->setPalette(palette4);
        lineEdit_5->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_5, 2, 2, 1, 1);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFrameShadow(QFrame::Raised);
        label_9->setTextFormat(Qt::PlainText);
        label_9->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::NoFrame);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_6->setPalette(palette5);
        lineEdit_6->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_6, 2, 3, 1, 1);

        lineEdit_1 = new QLineEdit(verticalLayoutWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette6.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_1->setPalette(palette6);
        lineEdit_1->setInputMethodHints(Qt::ImhNone);
        lineEdit_1->setFrame(true);
        lineEdit_1->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_1, 1, 1, 1, 1);

        lineEdit_9 = new QLineEdit(verticalLayoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_9->setPalette(palette7);
        lineEdit_9->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_9, 3, 3, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFrameShadow(QFrame::Raised);
        label_4->setTextFormat(Qt::PlainText);
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette8.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_7->setPalette(palette8);
        lineEdit_7->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_7, 3, 1, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFrameShadow(QFrame::Raised);
        label_6->setTextFormat(Qt::PlainText);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        lineEdit_11 = new QLineEdit(verticalLayoutWidget);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette9.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_11->setPalette(palette9);
        lineEdit_11->setInputMethodHints(Qt::ImhNone);
        lineEdit_11->setFrame(true);
        lineEdit_11->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_11, 7, 1, 1, 1);

        lineEdit_8 = new QLineEdit(verticalLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette10.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_8->setPalette(palette10);
        lineEdit_8->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_8, 3, 2, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFrameShadow(QFrame::Raised);
        label_5->setTextFormat(Qt::PlainText);
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFrameShadow(QFrame::Raised);
        label_8->setTextFormat(Qt::PlainText);
        label_8->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFrameShadow(QFrame::Raised);
        label_7->setTextFormat(Qt::PlainText);
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette11.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_4->setPalette(palette11);
        lineEdit_4->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_4, 2, 1, 1, 1);

        lineEdit_12 = new QLineEdit(verticalLayoutWidget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette12.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        lineEdit_12->setPalette(palette12);
        lineEdit_12->setInputMethodHints(Qt::ImhNone);
        lineEdit_12->setFrame(true);
        lineEdit_12->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_12, 8, 1, 1, 1);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setTextFormat(Qt::AutoText);
        label_10->setScaledContents(false);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 5, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_Clear = new QPushButton(verticalLayoutWidget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setFlat(false);

        gridLayout_2->addWidget(pushButton_Clear, 0, 0, 1, 1);

        pushButton_Default = new QPushButton(verticalLayoutWidget);
        pushButton_Default->setObjectName(QString::fromUtf8("pushButton_Default"));
        pushButton_Default->setFlat(false);

        gridLayout_2->addWidget(pushButton_Default, 0, 1, 1, 1);

        pushButton_Refresh = new QPushButton(verticalLayoutWidget);
        pushButton_Refresh->setObjectName(QString::fromUtf8("pushButton_Refresh"));
        pushButton_Refresh->setFlat(false);

        gridLayout_2->addWidget(pushButton_Refresh, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        TopRightFrame = new QFrame(Application);
        TopRightFrame->setObjectName(QString::fromUtf8("TopRightFrame"));
        TopRightFrame->setGeometry(QRect(450, 0, 450, 450));
        sizePolicy.setHeightForWidth(TopRightFrame->sizePolicy().hasHeightForWidth());
        TopRightFrame->setSizePolicy(sizePolicy);
        TopRightFrame->setFrameShape(QFrame::StyledPanel);
        TopRightFrame->setFrameShadow(QFrame::Raised);
        GraphSelectorWidget = new QTabWidget(TopRightFrame);
        GraphSelectorWidget->setObjectName(QString::fromUtf8("GraphSelectorWidget"));
        GraphSelectorWidget->setGeometry(QRect(0, 0, 450, 450));
        sizePolicy.setHeightForWidth(GraphSelectorWidget->sizePolicy().hasHeightForWidth());
        GraphSelectorWidget->setSizePolicy(sizePolicy);
        GraphSelectorWidget->setAutoFillBackground(true);
        GraphSelectorWidget->setElideMode(Qt::ElideRight);
        GraphSelectorWidget->setUsesScrollButtons(false);
        GraphSelectorWidget->setDocumentMode(true);
        GraphSelectorWidget->setTabsClosable(false);
        GraphSelectorWidget->setMovable(false);
        GraphSelectorWidget->setTabBarAutoHide(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        GraphSelectorWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        GraphSelectorWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        GraphSelectorWidget->addTab(tab_3, QString());
        BottomRightFrame = new QFrame(Application);
        BottomRightFrame->setObjectName(QString::fromUtf8("BottomRightFrame"));
        BottomRightFrame->setGeometry(QRect(450, 450, 450, 200));
        sizePolicy.setHeightForWidth(BottomRightFrame->sizePolicy().hasHeightForWidth());
        BottomRightFrame->setSizePolicy(sizePolicy);
        BottomRightFrame->setFrameShape(QFrame::StyledPanel);
        BottomRightFrame->setFrameShadow(QFrame::Raised);

        retranslateUi(Application);

        GraphSelectorWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QFrame *Application)
    {
        Application->setWindowTitle(QCoreApplication::translate("Application", "Application", nullptr));
        label_3->setText(QCoreApplication::translate("Application", "Full", nullptr));
        label_9->setText(QCoreApplication::translate("Application", "Full", nullptr));
        label->setText(QCoreApplication::translate("Application", "Asst", nullptr));
        label_2->setText(QCoreApplication::translate("Application", "Assoc", nullptr));
        label_4->setText(QCoreApplication::translate("Application", "Asst", nullptr));
        label_6->setText(QCoreApplication::translate("Application", "Full", nullptr));
        label_5->setText(QCoreApplication::translate("Application", "Assoc", nullptr));
        label_8->setText(QCoreApplication::translate("Application", "Assoc", nullptr));
        label_7->setText(QCoreApplication::translate("Application", "Asst", nullptr));
        label_10->setText(QCoreApplication::translate("Application", "Initial", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("Application", "Clear", nullptr));
        pushButton_Default->setText(QCoreApplication::translate("Application", "Default", nullptr));
        pushButton_Refresh->setText(QCoreApplication::translate("Application", "Refresh", nullptr));
        GraphSelectorWidget->setTabText(GraphSelectorWidget->indexOf(tab_1), QCoreApplication::translate("Application", "Tab 1", nullptr));
        GraphSelectorWidget->setTabText(GraphSelectorWidget->indexOf(tab_2), QCoreApplication::translate("Application", "Tab 2", nullptr));
        GraphSelectorWidget->setTabText(GraphSelectorWidget->indexOf(tab_3), QCoreApplication::translate("Application", "Tab 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FACDATANFPNIQ_H
