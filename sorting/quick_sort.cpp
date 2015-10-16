#include <iostream>
#include <cstdlib>

using namespace std;

/*
The divide-and-conquer strategy is used in quicksort. Below the recursion step is described:
Choose a pivot value. We take the value of the middle element as pivot value, but it can be any value, which is in range of sorted values, even if it doesn't present in the array.
Partition. Rearrange elements in such a way, that all elements which are lesser than the pivot go to the left part of the array and all elements greater than the pivot, go to the right part of the array. Values equal to the pivot can stay in any part of the array. Notice, that array may be divided in non-equal parts.
Sort both parts. Apply quicksort algorithm recursively to the left and the right parts.
*/
const int N=9;
void quick_sort(int[],int,int);

int partition(int[],int,int);

int main(){

	int A[]={1, 12, 5, 26, 7, 14, 3, 7, 2};
	quick_sort(A,0,N);
	
	for(int i=0; i<N; i++){
		cout<<A[i]<<endl;
	}

}

void quick_sort(int A[],int lo,int hi){

	if(lo<hi)
	{
		int index=partition(A,lo,hi);
		if(lo<index-1)
			quick_sort(A,lo,index-1);
		if(index<hi)
			quick_sort(A,index,hi);
	}
}
int partition(int A[],int lo,int hi){
	
	int pivot= A[(lo+hi)/2];
	int tmp;
	int i=lo; int j=hi;
	while(i<=j){
		while(A[i]<pivot){
			i++;
		}
		while(A[j]>pivot){
			j--;
		}
		//swap
		if(i<=j){
			tmp=A[i];
			A[i]=A[j];
			A[j]=tmp;
			i++;
			j--;
		}
	};
	return i;
}