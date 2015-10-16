#include <iostream>
#include <cstdlib>

using namespace std;

/*
___________________________________________________________________________________________

Insertion Sort: Ogni iterazione considera elemento key=A[i] da inserire {i=0,1,2,..,N}
Laporzione da A[i] a A[i-1] è già ordinata e scandita all'indietro con indice j, traslando 
di una posizione a destra ogni elemento maggiore di key, creando "uno spazio" per esso.
Complessità: O(n^2) caso pessimo, O(n) su sequenze già ordinate..
___________________________________________________________________________________________
*/
const int N=8;

int main(){

	int A[N]={5,2,4,6,1,3,0,11};

	for(int i=1; i<sizeof(A)/sizeof(int); i++){
		int key=A[i];
		//insert a[i] into the sequence a[1...i-1]
		int j = i-1;
		while(j>=0 && A[j]>key){
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1] = key;
	}
	for(int i=0; i<sizeof(A)/sizeof(int); i++)
		cout <<"\n "<<A[i]<<" "<<"\n";
}
