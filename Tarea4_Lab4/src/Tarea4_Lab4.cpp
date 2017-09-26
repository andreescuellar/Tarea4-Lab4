//============================================================================
// Name        : Tarea4_Lab4.cpp
// Author      : Andrés Cuéllar
// Version     :
// Copyright   : 
// Description : Tarea 4 in C++, Ansi-style
//============================================================================
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void Tabla();
void Pedirvector();
void MostrarVector();
void SumaVector();
void SumaPar();
void SumaImpar();
void OrdenVector(int*, int);
void MostOrdenado(int*, int);

int numvec,*sum;

int main(){

    Tabla();
    Pedirvector();
    MostrarVector();
    SumaVector();
    SumaPar();
    SumaImpar();
    OrdenVector(sum,numvec);
    MostOrdenado(sum,numvec);

    delete[] sum; //liberar el espacio en bytes utilizado anteriormente

    return 0;
}


void Tabla(){
 int x[11]={0,1,2,3,4,5,6,7,8,9,10};
    int numlt=2,i;

    printf("Tabla de multiplicar\n\n");

    for(i=0;i< 11;i++){

        printf("%d * ",x[i]);

        printf("%d = ",numlt);
        x[i] *= numlt;
        printf("%d\n",x[i]);
    }
}


void Pedirvector (){

   cout << "\nIngrese numero de elementos del vector: " << endl;
   cin >> numvec;

   sum = new int [numvec]; //crear el arreglo

   for (int i=0;i<numvec;i++){
    cout << "Ingrese un numero["<<i<<"]:"<<endl;
    cin >> *(sum+i);
   }

}

void MostrarVector(){
    cout<<"\n\nMonstrar elementos del vector:\n";
    for (int i=0;i<numvec;i++){
        cout<<sum[i]<<endl;

   }
}

void SumaVector(){
	int sumaT=0;
		for (int l=0;l<numvec;l++){
			sumaT += sum[l];
		}
		cout <<"\nLa suma de los elementos del vector es:"<<sumaT<<endl;
		cout<<"\nLongitud del vector: "<<numvec<<endl;
	}


void SumaImpar(){
	int sumaP=0;
	for (int l=0;l<numvec;l+=2){
		sumaP += sum[l];
	}
	cout <<"\nLa suma de las posiciones impar del vector es:"<<sumaP<<endl;
}

void SumaPar(){
	int sumaI=0;
	for (int k=1;k<numvec;k+=2){
		sumaI += sum[k];
	}
	cout <<"\nLa suma de las posiciones pares del vector es:"<<sumaI<<endl;
}

void OrdenVector(int *sum, int numvec){
    int aux;

    //Metodo burbuja para ordenar
    for(int i=0;i<numvec;i++){
        for(int j=0;j<numvec-1;j++){
            if(*(sum+j) > *(sum+j+1)){
                aux = *(sum+j);
                *(sum+j) = *(sum+j+1);
                *(sum+j+1) = aux;
            }
        }
    }

}


void MostOrdenado(int *sum, int numvec){
    cout<<"\nMonstrando Vector Ordenado: \n";
    for(int i=0;i<numvec;i++){
        cout<<*(sum+i)<<"\n";
    }

}
