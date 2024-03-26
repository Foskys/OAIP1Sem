#include <iostream> 
using namespace std;
void main1();
int main2();
void main() {
    setlocale(0, "");
    int* A, size, k;
    srand(time(0));
    cout << "1 - задание 1" << endl;
    cout << "2 - задание 2" << endl;
    for (int i = 0; i < 2; i++) {
        cin >> k;
        switch (k) {
        case 1: {
            main1(); break;
        }
        case 2: {
            main2(); break;
        }
        default:
            break;
        }
    }
}
void main1()
{
    setlocale(0, "");
    const int maxSize = 60;
    int n, i, kmin = 0, k = 0;
    float* a = new float[maxSize];
    cout << "Введите размер массива n<=60" << endl;
    cin >> n;
    if (n > 60)
    {
        return;
    }
    srand((unsigned)time(NULL));
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 60 - 30;
        cout << a[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i += 2)
        if (a[i] < 0) k++;
    cout << "колличество отрицательных элементов, которые стоят на четных позициях = " << k << "\n";
    delete[] a;
}
const int M = 3;
const int N = 3;
void input(double** a)
{
    cout << "Введите элементы массива : \n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> a[i][j];
    }
    cout << "\n";
}
void output(double** a)
{
    cout << "Массив: \n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << "\t";
        cout << "\n";
    }
}
void del(double** a)
{
    for (int i = 0; i < M; i++)
    {
        delete[]a[i];
    }
    delete[]a;
}
int findRow(double** a)
{
    int numbRow;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] < 0) {
                numbRow = i;
                return numbRow;
            }
        }
    }
    return -1;
}
void change(double** a, int* numbRow)
{
    for (int j = 0; j < N; j++)
    {
        if (j == *numbRow) {
            for (int i = 0; i < M; i++)
            {
                a[i][j] = a[i][j] / 2;
            }
            return;
        }
    }
}
int main2()
{
    setlocale(0, "");
    double** a = new double* [M];
    for (int i = 0; i < M; i++)
    {
        a[i] = new double[N];
    }
    input(a);
    output(a);
    int numbRow = findRow(a);
    cout << "Столбец < 0: " << numbRow << "\n";
    change(a, &numbRow);
    cout << "\nИзмененный массив \n";
    output(a);
    return 0;
}