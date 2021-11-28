#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int main() {
	//1
	/*const int n = 6;//str
	const int m = 8;//kol
	int k;
	int l=0;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {//str
		for (int j = 0; j < m; j++) {//kol
			mas[i][j] = rand() % 41 - 20;
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	cout << "Enter: ";
	cin >> k;
	for (int i = 0; i < n; i += 1) {
		l += mas[i][k];
	}
	cout << l;
	}*/

	//2
	/*const int n = 3;
	const int m = 5;
	int l=1;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 9 + 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	int k;
	cout << "enter row number\n";
	cin >> k;
	for (int p = 0; p < m; p++) {
		l *= mas[k][p];
	}
	cout << l;
}*/
//3
	/*const int n = 3;
	int l = 0;
	int mas[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mas[i][j] = rand() % 61 - 30;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		if (mas[i][i] > 0) {
			l += 1;
		}
	}
	cout << l;
}*/
//4
	/*const int n = 3;
	int l = 0;
	int mas[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mas[i][j] = rand() % 81 - 40;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		if (mas[i][n-1-i] % 2!=0) {
			l += 1;
		}
	}
	cout << l;
}*/