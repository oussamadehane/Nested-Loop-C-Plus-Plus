#include<iostream>


using namespace std;
void PrintNumberPattern(int Rows) {
    for (int i = 1; i <= Rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
	int N = 0;
	cout << " enter N :" << endl;
	cin >> N;
    PrintNumberPattern(N);
    return 0;
}
