#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H


class SortAlgorithm
{
public:
    SortAlgorithm();
    friend class MainWindow;
    friend void Sort(int a[], int n);
private:
    int n;
    int a[100];
};


#endif // SORTALGORITHM_H
