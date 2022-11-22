#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include "time.h"

using namespace std;

int main()
{
	const int r = 4;
	const int st = 4;

	int b[r][st] = { {-2,3,4,5},{2,5,6,7},{-3,-4,-5,-6},{2,4,5,6} };

	for (int i = 0; i < st; i++)
	{
		cout << setw(5) << b[i][i] << endl;
	}

	int min = b[0][0];
	for (int i = 0; i < st; i++)
		for (int i = 0; i < r; i++)
			if (b[i][i] < min) min = b[i][i];

	cout << min;


}