#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <string>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  timer = new QTimer(this);
  connect(timer, SIGNAL(timeout()), this, SLOT(putData()));
  connect(ui->connectButton,
          SIGNAL(clicked(bool)),
          this,
          SLOT(connectAction()));
  connect(ui->disconnectButton,
          SIGNAL(clicked(bool)),
          this,
          SLOT(disconnectAction()));
  connect(ui->startButton,
          SIGNAL(clicked(bool)),
          this,
          SLOT(startAction()));
  connect(ui->stopButton,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stopAction()));
}

void MainWindow::tcpConnect(){
  socket->connectToHost("127.0.0.1",1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}

void MainWindow::putData()
{
  int output = generateRandom();
  QString number = QString::number(output);
  QDateTime datetime;
  QString str;

  if(socket->state()== QAbstractSocket::ConnectedState){
      datetime = QDateTime::currentDateTime();
      str = "set "+
          datetime.toString(Qt::ISODate)+
          " "+
          number+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        printDisplay(str);
        qDebug() << "wrote";
      }
  }
}

void MainWindow::connectAction()
{
  socket->connectToHost(ui->ipInput->text(),1234);
  if(socket->waitForConnected(3000)){
    ui->textDisplay->append("Connected");
  }
  else{
    ui->textDisplay->append("Disconnected");
  }
}

void MainWindow::disconnectAction()
{
    socket->disconnectFromHost();
    if(socket->waitForConnected(3000)){
      ui->textDisplay->append("Connected");
    }
    else{
      ui->textDisplay->append("Disconnected");
    }
}

void MainWindow::startAction()
{
    int timing = ui->timingInput->value();
    if(socket->state()== QAbstractSocket::ConnectedState){
        if(timing>0) timer->start(timing*1000);
    }
}

int MainWindow::generateRandom()
{
    int min, max;
    min = ui->minInput->value();
    max = ui->maxInput->value();
    return min + (rand() % static_cast<int>(max - min + 1));
}

void MainWindow::printDisplay(QString str)
{
    ui->textDisplay->append(str);
}

void MainWindow::stopAction()
{
    timer->stop();
}

MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
