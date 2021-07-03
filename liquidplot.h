#ifndef LIQUIDPLOT_H
#define LIQUIDPLOT_H

#include <QWidget>

class LiquidPlot : public QWidget
{
    Q_OBJECT

public:
    LiquidPlot(QWidget *parent = 0);
    ~LiquidPlot();

    enum EPlotType
    {
        PLOTTYPE_CIRCULAR,
        PLOTTYPE_RECTANGLE,
        PLOTTYPE_DIAMOND,
    };

public slots:
    void SetPercent(int nPercent) { m_nPercent = nPercent; update(); }
    int GetPercent() { return m_nPercent; }

    void SetPlotType(EPlotType ePlotType) { m_ePlotType = ePlotType; update(); }

private:
    void paintEvent(QPaintEvent *event);
    void DrawCircularPlot(QPainter *p, QRect rcRect);
    void timerEvent(QTimerEvent *event);

private:
    void CreateAllChildWnd();
    void InitCtrl();
    void InitSolts();
    void Relayout();

private:
    EPlotType m_ePlotType;
    QFont m_iconFont;
    int m_nPercent;
    uint m_fOffset;
};

#endif // LIQUIDPLOT_H
