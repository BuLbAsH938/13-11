#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(nullptr));
	/*Задача 1
	int g = 1;
	const int n = 10;
	int A[n];
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 21;
		g *= A[i];
		cout << A[i] << endl;
	}
	cout << g;
	Задача 2
	int g = 0;
	const int n = 8;
	int A[n];
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 21 - 10;
		if (A[i] > 0) {
			g += A[i];
		}
	}
	cout << g;
	Задача 3
	int g = 0;
	const int n = 16;
	int A[n];
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 21;
		
		if (A[i] % 3 == 0 && A[i] % 5 == 0) {
			g++;
		}
	}
	cout << g; 
	Задача 4*/
	int g = 0;
	const int n = 9;
	int A[n];
	for (int i = 0; i < n; i++) {	
		A[i] = rand() % 21 - 10;
		if (A[i] % 2 == 0) {
			g += A[i];
		}
	}
	cout << g;
}