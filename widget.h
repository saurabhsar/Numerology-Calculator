/*
    This file is a part of Numerology-Calculator application written
    in C++

    Copyright (C) 2011   Saurabh Araiyer,  sizzsa(at)gmail(dot)com
    http://decapsulatingabstraction.blogspot.com/

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>

*/

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
