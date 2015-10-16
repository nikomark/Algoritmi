#include <iostream>
#include <cstdlib>

using namespace std;

/*
<<<<<<< HEAD
________________________________________________________________________________
Counting Sort: Si conoscie a priori il range dei valori da ordinare (1..k). L'algoritmo
scandiscie il vettore A e registra in um vettore B il numero di occorrenze per A[j].
La procedura scandiscie il vettore B e scrive il valore i nel vettore A per B[i] volte.
O(n+k), se k è O(n).(limite inferiore nlogn)
________________________________________________________________________________
=======
_________________________________________________________________________________________
Counting Sort: Si conosce a priori il range dei valori da ordinare (1..k). L'algoritmo
scandiscie il vettore A e registra in un vettore B il numero di occorrenze per A[j].
La procedura scandiscie il vettore B e scrive il valore i nel vettore A per B[i] volte.
O(n+k), se k è O(n).(limite inferiore nlogn)
_________________________________________________________________________________________
>>>>>>> 6ab45df63b166d908e797030c6ebd4f236e06795
*/
void countingSort(int [],int , int);

int main(){

	int n=8;
	int k=20;

	int A[n]={7,2,4,12,1,8,3,11};	

	countingSort(A,n,k);

	for(int i=0; i<n; i++){
		cout <<A[i]<<endl;
	}

}

void countingSort(int A[],int n, int k){
	
	int i,j;
	int B[k];
	
<<<<<<< HEAD
	for(i=0;i<k;i++)
	{
=======
	for(i=0;i<k;i++){
>>>>>>> 6ab45df63b166d908e797030c6ebd4f236e06795
		B[i]=0;
	}
	for(j=0;j<n;j++){
		B[A[j]]=B[A[j]]+1;
<<<<<<< HEAD

=======
>>>>>>> 6ab45df63b166d908e797030c6ebd4f236e06795
	}
	j=0;

	for(i=0; i<k;i++){
<<<<<<< HEAD
		
=======
>>>>>>> 6ab45df63b166d908e797030c6ebd4f236e06795
		while(B[i]>0){
			A[j]=i;
			j++;
			B[i]=B[i]-1;
		}
	}
<<<<<<< HEAD
}
=======
}
>>>>>>> 6ab45df63b166d908e797030c6ebd4f236e06795
