#include <iostream> 
#include <ctime> 
#include <iomanip>
using namespace std;
void main1();
void main2();
void main() {
    setlocale(0, "");
    int* A, size, k;
    srand(time(0));
    cout << "Введите 1 для запуска 1ого задания, 2 для 2ого задания" << endl;
    for (int i = 0; i < 2; i++) {
        cin >> k;
        switch (k) {
        case 1: {
            main1(); break;
        }
        case 2: {
            main2();
        }
        default:
           break;
        }
    }
}

void main1()
{
    setlocale(0, "");
    int n, m, j = 0, count = 0;
    cout << "Введите n: ";
    cin >> n;
    cout << "Введите m: ";
    cin >> m;
    int** A = new int* [n];
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
        for (int k = 0; k < m; k++) {
            A[i][k] = rand() % 100 - 50;
            cout << setw(4) << A[i][k] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        int min = INT_MAX;
        int minInd = -1;
        for (int k = 0; k < m; k++) {
            if (A[i][k] < min) {
                min = A[i][k];
                minInd = k;
            }
        }
        A[i][minInd] = A[i][i];
        A[i][i] = min;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(4) << A[i][j] << ' ';
        cout << endl;
    }
}

void main2()
{
    setlocale(0, "");
    srand((unsigned)time(0));
    int n = 4, m = 4;
    int** mas = new int* [n];
    for (int i = 0; i < n; i++)
        mas[i] = new int[m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            mas[i][j] = rand() % 10 - 1;
    cout << "Массив" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << setw(4) << mas[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    bool equal = false;
    for (int i = 0; i < n; ++i) {
        equal = true;
        for (int j = 0; j < n; ++j) {
            if (mas[i][j] != mas[j][i]) {
                equal = false;
                break;
            }
        }
        if (equal)
            cout << "k = " << i << endl;
    }
    if (!equal)
        cout << "Равных столбца и строки нет" << endl;
}