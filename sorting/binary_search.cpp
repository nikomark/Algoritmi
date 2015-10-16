#include <iostream>
#include <cstdlib>

using namespace std;

int binarySearch(int [], int, int, int);

int main(){

	int A[8]={1, 3, 4, 6, 8, 9, 11};
	int key;
	cout <<"key? ";
	cin>>key;
	cout <<binarySearch(A, key,0,sizeof(A)/sizeof(int))<<endl;

}

int binarySearch(int A[] , int key, int imin, int imax){
	
	if(imin>imax)
		return 0;
	else 
	{
		int m= (imin+imax)/2;
		if(A[m]==key)
			return m;
		else if(A[m]<key)
			return binarySearch(A,key,m+1, imax);//vado a destra
		else
			return binarySearch(A,key, imin, m-1);//vado a sinistra
	}
}
/*____________________________________________________________________________________________________________________
Dimostrare che binary search è coretta:
La correttezza si dimostra per induzione sulla dimensione n del vettore di input:
-Passo base: Se n=0, ovvero se i>j,il valore cercato non è presente e correttamente l' algoritmo ritorna 0
-Ipotesi induttiva: vogliamo dimostrare che l'algoritmo è corretto per la dimensione n, e supponiamo di aver 
dimostrato che l'algoritmo è corretto per tutte le dimensioni n'<n
-Passo Induttivo: Sia m l'elemento mediano; se S[m]=v, l'elemento è stato trovato e correttamente 
l'algoritmo ritorna l'indice m. Se invece S[m]!=v, il valore deve necessariamente trovarsi negli elementi
S[i..m-1](se minore) o S[m+1..j] (se maggiore). Tali sottovettori hanno dimensione minore di n, e quindi la 
ricerca dell'elemento in essi dà origine ad un risultato corretto. 
______________________________________________________________________________________________________________________*/
