#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    /*   ui(new Ui::Widget), before {*/

    //    ui->setupUi(this);
    static QWidget *window = new QWidget();
    QSpinCust *spin1=new QSpinCust();
    QLineEdit *lineEdit1 = new QLineEdit();
    QPushButton *button1 = new QPushButton("&Clear");
    QPushButton *button2 = new QPushButton("&Quit");
    QHBoxLayout *layout1 = new QHBoxLayout();
    QVBoxLayout *layout2 = new QVBoxLayout();
    QVBoxLayout *layout4 = new QVBoxLayout();
    QHBoxLayout *layout3 = new QHBoxLayout();
    QLabel *Label = new QLabel();
    QLabel *Label2= new QLabel();
    QTabWidget *tab1= new QTabWidget();
    QTabWidget *tab2= new QTabWidget();

    spin1->setMaximum(9);
    spin1->setMinimum(-1);
    spin1->setValue(-1);
    Label->setMinimumWidth(30);
    Label2->setText("<font color=blue>About</font>");
    window->setWindowTitle("Numerology Calculator");
    layout1->addWidget(lineEdit1);
    layout4->setSpacing(100);
    layout4->addWidget(Label2);
    layout3->addWidget(button1);
    layout3->addWidget(button2);
    layout1->addWidget(Label);
    layout2->addLayout(layout1);
    layout2->addLayout(layout3);
//    layout2->addLayout(layout4);

    QObject::connect(lineEdit1,SIGNAL(textChanged(QString)),spin1,SLOT(Numerology(QString)));
    QObject::connect(button1,SIGNAL(clicked()),lineEdit1,SLOT(clear()));
    QObject::connect(button2,SIGNAL(clicked()),window,SLOT(close()));
    QObject::connect(spin1,SIGNAL(valueChanged(QString)),Label,SLOT(setText(QString)));

//    tab1->setTabBar(tab2);
//    tab1->setTabText(0,tab1);
//    tab1->setTabText(1,tab2);
//   tab1->setLayout(layout2);
    window->setLayout(layout2);
    window->setMaximumHeight(60);
    window->setMaximumWidth(200);
    window->show();
}

/*void Widget::show()
{
    window.show();
}*/

Widget::~Widget()
{
//    delete ui;
}



void QSpinCust::Numerology(QString a)
{
    int i=0, count=0;
    if(a.size()>0)
    {    while(i!=a.size())
        {
            char dumm=a.at(i).toLower().toAscii();

            if(dumm<='9' && dumm >='0')
                count+=dumm-48;
            else if( dumm >= 'a' && dumm<='z' )
                count+= (int)dumm-'a'+1;
            i++;
        }
        if(count%9)
            count=count%9;
        else
            count=9;
    }
    else
        count = 0;
    this->setValue(count);
}
