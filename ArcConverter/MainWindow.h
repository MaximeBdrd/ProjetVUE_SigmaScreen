#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QFrame>
#include <QPushButton>
#include <QLabel>
#include <QPainter>
#include <QPicture>
#include <QLineEdit>

#define MAX_HEIGHT 272
#define MAX_WIDTH 480

typedef struct {
    unsigned short PosX;
    unsigned short PosY;
    unsigned short HLen;
} LineData;

class PicWidget : public QFrame
{
    Q_OBJECT

public:
    explicit PicWidget(QWidget *parent = 0);
    ~PicWidget();

    virtual const QSize sizeHint();
    virtual const QSize minimumSizeHint();

protected:
    virtual void paintEvent ( QPaintEvent * event );

public:
    QImage img;
    QPoint center;
    double startangle;
    double endangle;
    int steps;
};

class MainWindow : public QWidget
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void browseSrc();

    QPushButton m_button;
    PicWidget m_pic;
    QLabel lblSteps;
    QLineEdit txtSteps;

    QPushButton m_btnUpCenter;
    QPushButton m_btnDownCenter;
    QPushButton m_btnLeftCenter;
    QPushButton m_btnRightCenter;
    QPushButton m_btnUpStart;
    QPushButton m_btnDownStart;
    QPushButton m_btnUpEnd;
    QPushButton m_btnDownEnd;

public slots:
    void OnBtnUpCenter();
    void OnBtnDownCenter();
    void OnBtnLeftCenter();
    void OnBtnRightCenter();
    void OnBtnUpStart();
    void OnBtnDownStart();
    void OnBtnUpEnd();
    void OnBtnDownEnd();

    void OnStart();
};

#endif // MAINWINDOW_H

