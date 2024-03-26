#include <iostream>;
using namespace std;
int m, n, strind, ** matrix, zcount = 0, dublic = 0, xbad, xmax, xmaxbuff;
int main()
{
	setlocale(LC_ALL, "rus");
	cout << " n = ";
	cin >> n;
	cout << " m = ";
	cin >> m;
	cout << endl;
	matrix = new int* [n];
	strind = n;

	for (int istr = 0; istr < n; istr++)
	{
		matrix[istr] = new int[m];

		for (int icol = 0; icol < m; icol++)
		{

			cin >> matrix[istr][icol];

		}
		cout << endl;
	}
	cout << endl;
	for (int istr = 0; istr < n; istr++) {
		for (int icol = 0; icol < m; icol++)
		{

			cout << matrix[istr][icol] << endl;

		}
		cout << endl;
	}
	xmax = INT_MIN;
	for (int icol = 0; icol < m; icol++)
	{
		for (int istr = 0; istr < n; istr++)
		{
			if (matrix[icol][istr] == 0) { strind--; break; }
		}
	}
	for (int icol = 0; icol < m; icol++)
	{
		for (int istr = 0; istr < n; istr++)
		{
			if (matrix[icol][istr] > xmax) { xmax = matrix[icol][istr]; dublic = 0; }
			if (matrix[icol][istr] == xmax) { dublic++; }
		}
	}
	while (dublic < 2)
	{
		xbad = xmax;
		xmax = INT_MIN;
		for (int icol = 0; icol < m; icol++)
		{
			for (int istr = 0; istr < n; istr++)
			{
				if ((matrix[icol][istr] > xmax) && (matrix[icol][istr]) < xbad) { xmax = matrix[icol][istr]; dublic = 0; }
				if (matrix[icol][istr] == xmax) { dublic++; }
			}
		}
		if (xmax == INT_MIN) { dublic = 3; }
	}
	cout << "non null " << strind << endl;
	if (xmax == INT_MIN)
	{
		cout << "Отсутствуют повторы чисел" << endl;
	}
	else
	{
		cout << "xmax " << xmax << endl;
	}
	delete[] matrix;
	system("pause");
	return 0;
}
