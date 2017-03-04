#include <iostream>
using namespace std;

int main()
{
	int vector_int[100],contor,dimensiune;
	float vector_real[100];

	cout << "Introduceti dimensiune vectorului cu valori intregi(vectorul cu valori reale va fi de aceeasi dimensiune cu cel cu valori inregi)" << endl;
	cin >> dimensiune;
	for(contor=0;contor<dimensiune;contor++){
		cout <<"vector_int[" << contor <<"] = ";
		cin >> vector_int[contor];
	}
	vector_real[0]=vector_int[0];
	vector_real[1]=(vector_int[0]+vector_int[1])/2;
	for(contor=2;contor<dimensiune;contor++){
		vector_real[contor]=(vector_real[contor]+vector_int[contor-1])/2;
	}

	for(contor=0;contor<dimensiune;contor++){
		cout << vector_real[contor] << endl;
	}

	system("pause");
	return 0;
}