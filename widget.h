#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSpinBox>
#include <QString>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QLCDNumber>
#include <QTabWidget>

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    void show();
    ~Widget();

private:
//    Ui::Widget *ui;
};

class QSpinCust : public QSpinBox
{
    Q_OBJECT

public:

public slots:
    void Numerology(QString a);

signals:

private:
};

#endif // WIDGET_H
