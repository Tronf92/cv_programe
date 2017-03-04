#include <iostream>
using namespace std;

int main()
{
	int vector[100], dimensiune, contor;
	vector[0]=0;
	vector[1]=1;
	cout <<"Introduceti un numar!"<< endl;
	cin >> dimensiune;

	for(contor=2;contor<dimensiune;contor++){
		vector[contor]=vector[contor-1]+vector[contor-2];
	}

	for(contor = 0;contor<dimensiune;contor++){
		cout << vector[contor] << endl;
	}

	system("pause");
	return 0;

}
