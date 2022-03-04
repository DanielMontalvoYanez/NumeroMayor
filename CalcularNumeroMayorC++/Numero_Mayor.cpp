#include <iostream>


using namespace std;

	int Num_mayor();
int main(){
	Num_mayor();
	system("pause");
	
	return 0;
	
}

int Num_mayor(){

int mayor= -1;
int n;
string respuesta = "s";
cout<<"                             Ingrese 0 para salir de la aplicacion \n";
cout<<"\n";
cout<<"\n";
cout<<"Ingrese un  elemento de tipo numerico \n";
cin>>n;

while(n!=0){
	if(n>mayor)
	mayor=n;
	cout<<"Ingrese un  elemento de tipo numerico \n";
	cin>>n;
};
cout<<"El numero mayor es: "<<mayor<<"\n";	
};   

