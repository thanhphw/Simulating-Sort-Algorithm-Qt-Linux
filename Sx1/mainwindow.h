#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked(bool checked);
    void setLineEdit(int stt, int num);
    void setLineEditNULL(int stt);
    int getLineEdit(int stt);
    void counterUpms();
    void delay_ms(unsigned int ms);
    //void on_pushButton_2_clicked(bool checked);
    /*
     * Some Function test for debug Algorithm
     */
    void TestHello();
    void delay_msr(unsigned int t);
    void setLineEditBackgroundColor(int stt, QString bk);
    void fastTestFinal(int n);
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_pushButton_2_clicked(bool checked);
    void SaveLog();//write log into a text
private:
    Ui::MainWindow *ui;
    QTimer * tmr;
    unsigned int cnt;
    unsigned int timeToDeLay;
    int n;
    int a[100];
    bool checked1 = true;
protected:
    void Sort(short select_sort, int a[], int n);
    void SelectionSort(int a[], int n);
    void InterchangeSort(int a[], int n);
    void BubbleSort(int a[], int n);
};


class SortAlgorithm : public MainWindow
{

};

#endif // MAINWINDOW_H
