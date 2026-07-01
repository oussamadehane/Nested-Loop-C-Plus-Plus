#include<iostream>


using namespace std;
void PrintHollowSquare(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
	int N = 0;
	cout << " enter N :" << endl;
	cin >> N;
    PrintHollowSquare(N);
    return 0;
}
