#include <iostream>
using namespace std;

int inversare_numere(int a,int b){
	a+=b;

}

int main()
{
	int a,b;
	cin >> a;
	cout << "bla" << endl;
	cin >> b;
	cout << "primul numar:" << a <<endl << "al doilea numar" << b;
	inversare_numere(a,b);
	cout << "primul numar" << a <<endl << "al doilea numar"  << b;

	system("pause");
	return 0;
}