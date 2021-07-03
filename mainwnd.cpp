#include "mainwnd.h"
#include <QGridLayout>
#include "liquidplot.h"
#include <QVariant>
#include <QSlider>


MainWnd::MainWnd(QWidget *parent) : QWidget(parent)
{
    setProperty("canMove", "true");
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint | Qt::WindowMinMaxButtonsHint);

    CreateAllChildWnd();
    InitCtrl();
    InitSolts();
    Relayout();
}

void MainWnd::CreateAllChildWnd()
{

}

void MainWnd::InitCtrl()
{

}

void MainWnd::InitSolts()
{

}

void MainWnd::Relayout()
{
    LiquidPlot *pLiquidPlot1 = new LiquidPlot(this);
    LiquidPlot *pLiquidPlot2 = new LiquidPlot(this);
//    LiquidPlot *pLiquidPlot3 = new LiquidPlot(this);
//    LiquidPlot *pLiquidPlot4 = new LiquidPlot(this);

    pLiquidPlot2->SetPlotType(LiquidPlot::PLOTTYPE_RECTANGLE);

    // 滑动条
    QSlider *pSlider = new QSlider(this);
    pSlider->setOrientation(Qt::Horizontal);
    pSlider->setMinimum(0);
    pSlider->setMaximum(100);
    pSlider->setSingleStep(1);

    connect(pSlider, &QSlider::valueChanged, pLiquidPlot1, &LiquidPlot::SetPercent);
    connect(pSlider, &QSlider::valueChanged, pLiquidPlot2, &LiquidPlot::SetPercent);
//    connect(pSlider, &QSlider::valueChanged, pLiquidPlot3, &LiquidPlot::SetPercent);
//    connect(pSlider, &QSlider::valueChanged, pLiquidPlot4, &LiquidPlot::SetPercent);

    QGridLayout *layoutMain = new QGridLayout(this);
    layoutMain->addWidget(pLiquidPlot1, 0, 0);
    layoutMain->addWidget(pLiquidPlot2, 0, 1);
//    layoutMain->addWidget(pLiquidPlot3, 1, 0);
//    layoutMain->addWidget(pLiquidPlot4, 1, 1);

    layoutMain->addWidget(pSlider, 2, 0, 1, 2);

    layoutMain->setMargin(8);
}
