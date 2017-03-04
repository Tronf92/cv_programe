#include <iostream>
using namespace std;

void EndProgram(){
	system("pause");
	exit(0);
}

int main()
{
	int vector[99], contor, dimensiune, mijloc,dreapta,stanga;
	cout <<"Introduceti dimensiunea vectorului!(vectorul trebuie sa aiba nr impar" << endl;
	cout << "de elemente)" << endl;
	cin >>dimensiune;
	stanga=0;
	dreapta=dimensiune;
	mijloc=dimensiune/2;
	for(contor=0;contor<dimensiune;contor++){
		stanga++;
		dreapta--;
		if(stanga==dreapta){
			cout << "Vectorul are numar par de elemente"<<endl;
			EndProgram();
			break;
		}
	}
	for(contor = 0; contor<dimensiune;contor++){
		cout << "vector[" << contor << "]= ";
		cin >> vector[contor];
	}

	for(contor = 0; contor< dimensiune; contor++){
		cout << vector[contor] << endl;
	}

	system("pause");
	return 0;
}


	
	


		

	