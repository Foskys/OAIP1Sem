#include<iostream> 
using namespace std;
int main2(int* arr)
{
    int s = 0;
    for (int i = 0; i < 15; i++)
        if (arr[i] % 2 == 0)
            s += arr[i];
    for (int i = 0; i < 15; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return s;
}
void main1(int n, int m, int** arr1, int** arr2)
{
    int** arr3 = new int* [n];
    for (int i = 0; i < n; i++)
        arr3[i] = new int[n] {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}
void main()
{
    setlocale(0, "");
    int* arr = new int[15];
    for (int i = 0; i < 15; i++)
        arr[i] = rand() % 200;
    cout << "сумма четных элементов = " << main2(arr) << endl;
    delete arr;
    arr = nullptr;
    int m, n;
    cout << "введите n ";
    cin >> n;
    cout << "введите m ";
    cin >> m;
    int** arr1 = new int* [n];
    for (int i = 0; i < n; i++)
        arr1[i] = new int[m];
    int** arr2 = new int* [m];
    for (int i = 0; i < m; i++)
        arr2[i] = new int[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr1[i][j] = rand() % 10;
        }
    }
    srand(5);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr2[i][j] = rand() % 10;
        }
    }
    main1(n, m, arr1, arr2);
}