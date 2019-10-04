#include <iostream>
using namespace std;
int funcA (int n){
	int a;
	a = n - 1;
	return a;
}
int funcS (int n){
	int s;
	s = n + 1;
	return s;
}
int main()
{	int A, S, N;
	cin >> N;
	A = funcA(N);
	S = funcS(N);
	cout << A << " " << N << " " << S;
	
	return 0;
}
