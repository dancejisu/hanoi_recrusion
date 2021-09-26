#include <iostream>
using namespace std;

//int hanoi(int a, int n);

int hanoi(int a, int n)
{
	int r = 1;
	for (int i = 0; i < n; i++)
		r = r * a;
	int result;
	result = r - 1;
	return(result);
}
int main() {
	int n;
	//int T(n);
	//T(n) = 2 * T(n - 1) + 1;
	cout << "nÀÇ °ª: ";
	cin >> n;

	cout << hanoi(2, n) << endl;



}
