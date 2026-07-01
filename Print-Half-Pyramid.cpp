#include<iostream>


using namespace std;
void PrintHalfPyramid(int Rows) {
	for (int i = 1; i <= Rows; i++) {       // الحلقة الخارجية: للتحكم في عدد الصفوف
		for (int j = 1; j <= i; j++) {     // الحلقة الداخلية: للتحكم في عدد النجوم في كل صف
			cout << "*";
		}
		cout << endl; // الانتقال لسطر جديد بعد كل صف
	}
}

int main()
{
	int Rows = 0;
	cout << " enter rows :" << endl;
	cin >> Rows;
	PrintHalfPyramid(Rows);
}
