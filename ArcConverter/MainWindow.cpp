#include "MainWindow.h"

#include <math.h>
#include <iostream>
#include <fstream>
#include <QFileDialog>
#include <QGridLayout>
#include <QList>

using namespace std;

#define PI 3.14159265

PicWidget::PicWidget(QWidget *parent) :
    QFrame(parent)
{
    //setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    center = QPoint(480/2, 272/2);
    startangle = 90+45;
    endangle = 360+45;
    steps = 150;
}

PicWidget::~PicWidget()
{
}

const QSize PicWidget::sizeHint()
{
    return QSize(MAX_WIDTH+2, MAX_HEIGHT+2);
}

const QSize PicWidget::minimumSizeHint()
{
    return QSize(MAX_WIDTH, MAX_HEIGHT);
}

void PicWidget::paintEvent(QPaintEvent * event)
{
    QFrame::paintEvent(event);

    /*int nHeight = img.height() > MAX_HEIGHT ? MAX_HEIGHT : img.height();
    int nWidth = img.width() > MAX_WIDTH ? MAX_WIDTH : img.width();
    // Coupure de l'image
    img = img.copy(0, 0, nWidth, nHeight);
    if ( global_use_palette )
        img = img.convertToFormat(QImage::Format_Indexed8);
    else
        img = img.convertToFormat(QImage::Format_RGB16);*/

    QPainter painter(this);                     // painting done
    painter.drawImage(1, 1, img);    // draw the picture at (0,0)

    // Draw the axes
    QPen penCenter(Qt::blue, 8, Qt::SolidLine);
    painter.setPen(penCenter);
    painter.drawPoint(center);
    double cx = center.x() + 480.0*cos(startangle*PI/180);
    double cy = center.y() + 480.0*sin(startangle*PI/180);
    QPen penStart(Qt::red, 2, Qt::SolidLine);
    painter.setPen(penStart);
    painter.drawLine(center, QPointF(cx,cy));
    cx = center.x() + 480.0*cos(endangle*PI/180);
    cy = center.y() + 480.0*sin(endangle*PI/180);
    QPen penEnd(Qt::green, 2, Qt::SolidLine);
    painter.setPen(penEnd);
    painter.drawLine(center, QPointF(cx,cy));
    cx = center.x() + 480.0*cos((startangle+endangle)/2*PI/180);
    cy = center.y() + 480.0*sin((startangle+endangle)/2*PI/180);
    QPen penMid(Qt::yellow, 2, Qt::SolidLine);
    painter.setPen(penMid);
    painter.drawLine(center, QPointF(cx,cy));
}

// ----------------------------------------------

MainWindow::MainWindow(QWidget *parent)
{
    // Create the layout
    QGridLayout* layout = new QGridLayout();
    this->setLayout(layout);

    // Display the widgets
    //this->setGeometry(200, 200, 520, 440);
    m_pic.setParent(this);
    m_pic.setGeometry(20, 20, 480, 272);
    m_button.setParent(this);
    m_button.setText("Start Conversion");
    lblSteps.setParent(this);
    txtSteps.setParent(this);
    lblSteps.setText("Steps:");
    txtSteps.setText("140");
    connect(&m_button, SIGNAL(clicked()), this, SLOT(OnStart()));

    m_btnUpCenter.setParent(this);
    m_btnDownCenter.setParent(this);
    m_btnLeftCenter.setParent(this);
    m_btnRightCenter.setParent(this);
    m_btnUpStart.setParent(this);
    m_btnDownStart.setParent(this);
    m_btnUpEnd.setParent(this);
    m_btnDownEnd.setParent(this);

    m_btnUpCenter.setText("Up Center");
    m_btnDownCenter.setText("Down Center");
    m_btnLeftCenter.setText("Left Center");
    m_btnRightCenter.setText("Right Center");
    m_btnUpStart.setText("Up Start Angle");
    m_btnDownStart.setText("Down Start Angle");
    m_btnUpEnd.setText("Up End Angle");
    m_btnDownEnd.setText("Down End Angle");

    connect(&m_btnUpCenter, SIGNAL(clicked()), this, SLOT(OnBtnUpCenter()));
    connect(&m_btnDownCenter, SIGNAL(clicked()), this, SLOT(OnBtnDownCenter()));
    connect(&m_btnLeftCenter, SIGNAL(clicked()), this, SLOT(OnBtnLeftCenter()));
    connect(&m_btnRightCenter, SIGNAL(clicked()), this, SLOT(OnBtnRightCenter()));
    connect(&m_btnUpStart, SIGNAL(clicked()), this, SLOT(OnBtnUpStart()));
    connect(&m_btnDownStart, SIGNAL(clicked()), this, SLOT(OnBtnDownStart()));
    connect(&m_btnUpEnd, SIGNAL(clicked()), this, SLOT(OnBtnUpEnd()));
    connect(&m_btnDownEnd, SIGNAL(clicked()), this, SLOT(OnBtnDownEnd()));

    // Place all widgets in the layout
    layout->addWidget(&m_pic, 0, 0, 1, 5);
    layout->addWidget(&m_button, 1, 2);
    layout->addWidget(&lblSteps, 2, 2);
    layout->addWidget(&txtSteps, 3, 2);
    layout->addWidget(&m_btnUpCenter, 2, 0);
    layout->addWidget(&m_btnDownCenter, 3, 0);
    layout->addWidget(&m_btnLeftCenter, 2, 1);
    layout->addWidget(&m_btnRightCenter, 3, 1);
    layout->addWidget(&m_btnUpStart, 2, 3);
    layout->addWidget(&m_btnDownStart, 3, 3);
    layout->addWidget(&m_btnUpEnd, 2, 4);
    layout->addWidget(&m_btnDownEnd, 3, 4);

    // Open a file
    browseSrc();
}

MainWindow::~MainWindow()
{

}


void MainWindow::browseSrc()
{
    QString str = QFileDialog::getOpenFileName(this, "Import picture", QString(), "Pictures (*.bmp *.pnm *.jpg *.png)");

    QImage img(MAX_WIDTH, MAX_HEIGHT, QImage::Format_Mono);
    img.fill(0);
    if (img.load(str))
    {
        int nWidth, nHeight, nNbColors;
        nWidth = img.width();
        nHeight = img.height();
        nNbColors = img.numColors();

        if ( nNbColors == 0)
        {
            img = img.copy(0, 0, nWidth < MAX_WIDTH ? nWidth : MAX_WIDTH, nHeight < MAX_HEIGHT ? nHeight : MAX_HEIGHT);
            img = img.convertToFormat(QImage::Format_Indexed8);
        }
        //else
        //    ui->qtNbCouleurs->setText(QString("Number of colors : ") + QString().number(nNbColors));

        nHeight = img.height() > MAX_HEIGHT ? MAX_HEIGHT : img.height();
        nWidth = img.width() > MAX_WIDTH ? MAX_WIDTH : img.width();
        // Coupure de l'image
        img = img.copy(0, 0, nWidth, nHeight);
        //if ( global_use_palette )
        //    img = img.convertToFormat(QImage::Format_Indexed8);
        //else
        //    img = img.convertToFormat(QImage::Format_RGB16);
        img = img.convertToFormat(QImage::Format_Mono);
    }

    img = img.convertToFormat(QImage::Format_Indexed8);
    m_pic.img = img;
}

void MainWindow::OnStart()
{
    QList<unsigned short> sizelist;

    // This function will do the conversion to the (X,Y,HLen) format
    unsigned int nbSteps = txtSteps.text().toInt();
    if ( nbSteps < 2 || nbSteps > 300)
        return;

    if ( m_pic.startangle >= m_pic.endangle )
        return;

    // Open outfile
    ofstream outfile;
    outfile.open("ArcData.c", ios_base::trunc);
    outfile << "// Arc data programmed in flash memory" << endl;
    outfile << "#include \"ArcData.h\"" << endl << endl;
    outfile << "#define ARC_ANGLE_SPAN " << nbSteps << endl << endl;
    outfile << "LineData ArcData[ARC_ANGLE_SPAN][ARC_MAX_LINES] = { " << endl;

    // For each step
    for( unsigned int i = 0; i < nbSteps; i++)
    {
        QList<LineData> list;
        double stepangle = (m_pic.endangle - m_pic.startangle)/nbSteps;
        double prevangle = m_pic.startangle + (stepangle * (double)i);
        double currangle = m_pic.startangle + (stepangle * (double)(i+1));

        // Find the parameters of the two line limits
        QPointF p1( m_pic.center.x() + 480.0*cos(prevangle*PI/180), m_pic.center.y() + 480.0*sin(prevangle*PI/180));
        QPointF p2( m_pic.center.x() + 480.0*cos(currangle*PI/180), m_pic.center.y() + 480.0*sin(currangle*PI/180));
        double a1 = (m_pic.center.y() - p1.y())/(m_pic.center.x() - p1.x());
        double b1 = p1.y() - (a1 * p1.x());
        double a2 = (m_pic.center.y() - p2.y())/(m_pic.center.x() - p2.x());
        double b2 = p2.y() - (a2 * p2.x());

        // Check the sign of the included zone
        QPointF p3( m_pic.center.x() + 480.0*cos(((prevangle+(stepangle/2))*PI/180)), m_pic.center.y() + 480.0*sin(((prevangle+(stepangle/2))*PI/180)));
        bool l1neg = (p3.x() * a1 + b1 - p3.y()) > 0 ? false : true;
        bool l2neg = (p3.x() * a2 + b2 - p3.y()) > 0 ? false : true;

        // Scan each line
        for ( unsigned int y = 0; y < MAX_HEIGHT; y++)
        {
            bool fFirstPixelFound = false;
            unsigned int unHLen = 0;
            QPoint pointFirst;

            // Search for active pixels
            for ( unsigned int x = 0; x < MAX_WIDTH; x++)
            {
                bool fIsInside = ((((double)x * a1 + b1 - (double)y) > 0) != l1neg); // Check for l1 limit
                fIsInside &= ((((double)x * a2 + b2 - (double)y) > 0) != l2neg); // Check for l2 limit
                if( m_pic.img.pixel(x, y) == 0xFFFFFFFF && fIsInside) // Black pixel inside our limit
                {
                    if (!fFirstPixelFound )
                    {
                        fFirstPixelFound = true;
                        pointFirst = QPoint(x,y);
                        unHLen = 0;
                    }
                    else
                    {
                        unHLen++;
                    }
                }
                else
                {
                    if ( fFirstPixelFound )
                    {
                        fFirstPixelFound = false;
                        LineData data;
                        data.PosX = (unsigned short) pointFirst.x();
                        data.PosY = (unsigned short) pointFirst.y();
                        data.HLen = (unsigned short) unHLen;
                        list.append(data);
                    }
                }
            }

            // End of the line
            if ( fFirstPixelFound )
            {
                fFirstPixelFound = false;
                LineData data;
                data.PosX = (unsigned short) pointFirst.x();
                data.PosY = (unsigned short) pointFirst.y();
                data.HLen = (unsigned short) unHLen;
                list.append(data);
            }
        }

        // Store this angle data in text file
        sizelist.append( list.size() );
        outfile << "    { ";
        for ( int idx = 0; idx < list.size(); idx++ )
        {
            outfile << "{" << list[idx].PosX << ", " << list[idx].PosY << ", " << list[idx].HLen << "}, ";
        }
        outfile << " }, // step = " << i << endl;
    }

    // Store the size array
    outfile << "};" << endl << endl;
    outfile << "unsigned char ArcDataSize[ARC_ANGLE_SPAN] = { ";
    unsigned short usMaxSize = 0;
    for( int idx = 0; idx < sizelist.size(); idx++ )
    {
        outfile << sizelist[idx] << ", ";
        if (sizelist[idx] > usMaxSize) usMaxSize = sizelist[idx];
    }
    outfile << "};" << endl << endl;

    outfile << "#define ARC_MAX_LINES " << usMaxSize << endl;

    // Close output file
    outfile.close();
}

void MainWindow::OnBtnUpCenter()
{
    m_pic.center = m_pic.center + QPoint(0, -1);
    m_pic.repaint();
}

void MainWindow::OnBtnDownCenter()
{
    m_pic.center = m_pic.center + QPoint(0, 1);
    m_pic.repaint();
}

void MainWindow::OnBtnLeftCenter()
{
    m_pic.center = m_pic.center + QPoint(-1, 0);
    m_pic.repaint();
}

void MainWindow::OnBtnRightCenter()
{
    m_pic.center = m_pic.center + QPoint(1, 0);
    m_pic.repaint();
}

void MainWindow::OnBtnUpStart()
{
    m_pic.startangle++;
    m_pic.repaint();
}

void MainWindow::OnBtnDownStart()
{
    m_pic.startangle--;
    m_pic.repaint();
}

void MainWindow::OnBtnUpEnd()
{
    m_pic.endangle++;
    m_pic.repaint();
}

void MainWindow::OnBtnDownEnd()
{
    m_pic.endangle--;
    m_pic.repaint();
}
