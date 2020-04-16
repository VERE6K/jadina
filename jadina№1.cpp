#include <iostream>
#include<vector>

using namespace std;

int main() {
	int x, result= 0;
	vector <int> chifr = { 500,200,100,50,20,10 };
	cin >> x;
	if (x % 10 != 0) {
		cout << -1;
		return 0;
	}
	for (int i = 0; i < chifr.size(); ++i) {
		while (x >= chifr[i]) {
			result++;
			x -= chifr[i];
		}
	}
	cout << result;
}
