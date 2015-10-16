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
