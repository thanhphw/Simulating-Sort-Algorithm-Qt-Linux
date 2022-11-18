#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTime>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Sort Algorithm By Phw");
}

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

void MainWindow::counterUpms(){
    timeToDeLay += 1000;
    qDebug() <<"delays";
    if (timeToDeLay == 1000) timeToDeLay = 0;

}

void MainWindow::delay_ms(unsigned int ms){
    timeToDeLay = 0;
    this->tmr = new QTimer(this);
    this->tmr->setInterval(ms);
    connect(this->tmr, SIGNAL(timeout()), this, SLOT(counterUpms()));
    this->tmr->start();
}

void MainWindow::delay_msr(unsigned int t){
    QTime tm;
    tm.start();
    while (tm.elapsed() < t){
        QApplication::processEvents();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setLineEdit(int stt, int number1){
    if (stt == 1) ui->lineEdit->setText(QString::number(number1));
    else if (stt == 2) ui->lineEdit_2->setText(QString::number(number1));
    else if (stt == 3) ui->lineEdit_3->setText(QString::number(number1));
    else if (stt == 4) ui->lineEdit_4->setText(QString::number(number1));
    else if (stt == 5) ui->lineEdit_5->setText(QString::number(number1));
    else if (stt == 6) ui->lineEdit_6->setText(QString::number(number1));
    else if (stt == 7) ui->lineEdit_7->setText(QString::number(number1));
    else if (stt == 8) ui->lineEdit_8->setText(QString::number(number1));
    else if (stt == 9) ui->lineEdit_9->setText(QString::number(number1));
    else if (stt == 10) ui->lineEdit_10->setText(QString::number(number1));
}

void MainWindow::setLineEditNULL(int stt){
    if (stt == 1) ui->lineEdit->setText("");
    else if (stt == 2) ui->lineEdit_2->setText("");
    else if (stt == 3) ui->lineEdit_3->setText("");
    else if (stt == 4) ui->lineEdit_4->setText("");
    else if (stt == 5) ui->lineEdit_5->setText("");
    else if (stt == 6) ui->lineEdit_6->setText("");
    else if (stt == 7) ui->lineEdit_7->setText("");
    else if (stt == 8) ui->lineEdit_8->setText("");
    else if (stt == 9) ui->lineEdit_9->setText("");
    else if (stt == 10) ui->lineEdit_10->setText("");
}

int MainWindow::getLineEdit(int stt){
    int value;
    if (stt == 1) value = ui->lineEdit->text().toInt();
    else if (stt == 2) value = ui->lineEdit_2->text().toInt();
    else if (stt == 3) value = ui->lineEdit_3->text().toInt();
    else if (stt == 4) value = ui->lineEdit_4->text().toInt();
    else if (stt == 5) value = ui->lineEdit_5->text().toInt();
    else if (stt == 6) value = ui->lineEdit_6->text().toInt();
    else if (stt == 7) value = ui->lineEdit_7->text().toInt();
    else if (stt == 8) value = ui->lineEdit_8->text().toInt();
    else if (stt == 9) value = ui->lineEdit_9->text().toInt();
    else if (stt == 10) value = ui->lineEdit_10->text().toInt();
    return value;
}

void MainWindow::setLineEditBackgroundColor(int stt, QString bk){
    if (stt == 1) ui->lineEdit->setStyleSheet(bk);
    else if (stt == 2) ui->lineEdit_2->setStyleSheet(bk);
    else if (stt == 3) ui->lineEdit_3->setStyleSheet(bk);
    else if (stt == 4) ui->lineEdit_4->setStyleSheet(bk);
    else if (stt == 5) ui->lineEdit_5->setStyleSheet(bk);
    else if (stt == 6) ui->lineEdit_6->setStyleSheet(bk);
    else if (stt == 7) ui->lineEdit_7->setStyleSheet(bk);
    else if (stt == 8) ui->lineEdit_8->setStyleSheet(bk);
    else if (stt == 9) ui->lineEdit_9->setStyleSheet(bk);
    else if (stt == 10) ui->lineEdit_10->setStyleSheet(bk);

}


void MainWindow::SelectionSort(int a[], int n){
    for (int i = 0; i < n - 1; i++){
        setLineEditBackgroundColor(i+1,"background:#E9A7A7");
        delay_msr(500);
        int min = i;
        for (int j = i + 1; j < n; j++){
            setLineEditBackgroundColor(j+1,"background:#9BCF85");
            if(a[j] < a[min]){
                if (min != i) setLineEditBackgroundColor(min+1,"background:#FFFFFF");
                min = j;
                delay_msr(500);
                setLineEditBackgroundColor(min+1,"background:#CA4949");
            }
            delay_msr(1000);
            if(min+1 != j+1)setLineEditBackgroundColor(j+1,"background:#FFFFFF");
        }
        delay_msr(1500);
        int t_min = min;
        swap(a[min], a[i]);
        setLineEdit(min+1, a[min]);
        setLineEdit(i+1, a[i]);
        delay_msr(2000);
        if (t_min != i) setLineEditBackgroundColor(t_min+1,"background:#FFFFFF");
        delay_msr(1500);
    }
    //setLineEditBackgroundColor(n,"background:#E9A7A7");
    fastTestFinal(n);
}

void MainWindow::InterchangeSort(int a[], int n){
    for (int i = 0; i < n -1; i++){
        setLineEditBackgroundColor(i+1,"background:#E9A7A7");
        delay_msr(500);
        for (int j = i + 1; j < n; j++){
            setLineEditBackgroundColor(j+1,"background:#9BCF85");
            delay_msr(500);
            if (a[j] < a[i]){
                setLineEditBackgroundColor(j+1,"background:#CA4949");
                delay_msr(1000);
                swap(a[i], a[j]);
                setLineEdit(i+1, a[i]);
                setLineEdit(j+1, a[j]);
                delay_msr(1500);
            }
            setLineEditBackgroundColor(j+1,"background:#FFFFFF");
        }
        delay_msr(1000);
    }
    //setLineEditBackgroundColor(n,"background:#E9A7A7");
    fastTestFinal(n);
}

void MainWindow::BubbleSort(int a[], int n){
    int j;
    for (int i = 0; i < n - 1; i++){
        setLineEditBackgroundColor(i+1,"background:#E9A7A7");
        delay_msr(500);
        for (j = n - 1; j > i; j--){
            setLineEditBackgroundColor(j+1,"background:#9BCF85");
            delay_msr(500);
            if (a[j] < a[j-1]){
                setLineEditBackgroundColor(j,"background:#CA4949");
                delay_msr(1000);
                swap(a[j],a[j-1]);
                setLineEdit(j+1, a[j]);
                setLineEdit(j, a[j-1]);
                delay_msr(500);
            }
            setLineEditBackgroundColor(j+1,"background:#FFFFFF");
        }
        delay_msr(500);
        setLineEditBackgroundColor(i+1,"background:#E9A7A7");
        delay_msr(500);
    }
    fastTestFinal(n);
}

void MainWindow::fastTestFinal(int n){
    for (int i = 0; i < n; i++){
        setLineEditBackgroundColor(i+1,"background:#FFFFFF");
        delay_msr(50);

    }
    for (int i = 0; i < n; i++){
        setLineEditBackgroundColor(i+1,"background:#7BC270");
        delay_msr(50);
    }
}

short select_sort = 0;  // to select type of sort algorthm default is selection sort

void MainWindow::Sort(short select_sort, int a[], int n){
    SaveLog();
    if (select_sort == 0) SelectionSort(a, n);
    else if (select_sort == 1) InterchangeSort(a, n);
    else if (select_sort == 2) BubbleSort(a, n);

}

void MainWindow::on_pushButton_clicked(bool checked)
{
    select_sort = ui->comboBox->currentIndex();

    n = getLineEdit(10);
    for (int i = 0; i < n; i++){
        int temp = getLineEdit(i+1);
        a[i] = temp;
    }
    Sort(select_sort, a, n);
}

void MainWindow::TestHello(){
    qDebug() << "Say Hello";
}

void MainWindow::on_pushButton_2_clicked(bool checked)
// Second button to reset: all value and set filled color in label edit to white
{
    for (int i = 0; i < 10; i++){
        a[i] = 0;
    }
    for (int i = 0; i < 10 + 1; i++){
        setLineEditBackgroundColor(i+1,"background:#FFFFFF");
    } // not delay to set all is white in 1 time
    for (int i = 0; i < 10 + 1; i++){
        setLineEditNULL(i);
    }
    n = 0;
    setLineEditNULL(10); // to set size to NULL
}

void MainWindow::SaveLog(){
    //QFile file("/home/Downloads/build-Sx1-Desktop_Qt_5_7_0_GCC_64bit-Debug/log.txt");
    QFile file("log.txt");
    QTextStream textStream(&file);
    if (file.open(QIODevice::WriteOnly)){
        textStream << "N: " << n << "\n";
        textStream << "Type of Sort: " << select_sort << "\n";
        for (int i = 0; i < n; i++){
            textStream << a[i] << " ";
        }
        file.close();
    }
    else
    {
        QMessageBox::critical(this, "Open File Error", "Can't open file, check again");
    }
} // To save a lastest a[], n. So i think it isn't nece.
