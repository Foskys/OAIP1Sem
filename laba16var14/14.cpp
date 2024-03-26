#include <iostream> 
#include <windows.h>
using namespace std;
void main1()
{
    float a[50];
    int nmin = 0, n;
    float s = 0, min;
    cout << "n="; cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << "a[" << i << "]="; cin >> a[i];
    }
    min = a[0];
    for (int i = 0; i <= n; i++)
        if (fabs(a[i]) < min)
        {
            min = a[i];
            nmin = i;
        }
    cout << "nmin=" << nmin << "\t" << "min= " << min << endl;
    for (int i = 0; i <= n; i++)
        if (a[i] < 0)
        {
            min = a[i];
            nmin = i;
        }
    for (int i = nmin; i <= n; i++)
        s += abs(a[i]);
    cout << "s=" << s << endl;
}
int& fun(char tmp[], const int MaxSize)
{
    int flag;
    for (int i = 0; i < MaxSize; i++)
    {
        if (tmp[i] == 'Б')
        {
            if (tmp[i + 1] == 'Г')
                if (tmp[i + 2] == 'Т')
                    if (tmp[i + 3] == 'У')
                    {
                        flag = 1;
                        break;
                    }
        }
        else
            flag = 0;
    }
    return flag;
}

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int MaxSize = 256;
    char tmp[MaxSize];
    cout << "Введите текст " << endl;
    cin.getline(tmp, MaxSize);
    int k, c = 1;
    while (c != 0)
    {
        cout << "Что желаете сделать?" << endl
            << "1-Задание 1" << endl
            << "2-Проверить,есть ли в ведённом тексте слово 'БГТУ'" << endl
            << "3 - выход" << endl;
        cin >> k;
        switch (k) {
        case 1:main1(); break;
        case 2:if (fun(tmp, MaxSize) == 1)
            cout << "В тескте есть слово 'БГТУ' " << endl;
              else
            cout << " В тескте нет слова 'БГТУ' " << endl;
        case 3:   c = 0;
            break;
        default:
            cout << " Нет такой опции, выберите снова" << endl;
            cout << endl;
            break;
        }
    }
}