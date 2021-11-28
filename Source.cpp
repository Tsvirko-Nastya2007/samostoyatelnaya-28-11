#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int main() {
const int n = 6;//str
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
}