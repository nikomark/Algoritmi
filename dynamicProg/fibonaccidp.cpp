#include <iostream>
#include <cstdlib>
using namespace std;

/*In bottom-up approch we callculate smallest values of fib. first, 
then the larger values are build from them*/

int fibdp(int);

int main(){
	
	int n;
	cout<<"n: ";
	cin>>n;
	cout<<fibdp(n)<<endl;
}

int fibdp(int n){

	if(n==0)
		return 0;
	else
	{
		int prev=0, curr=1;
		for(int i=1;i<n; i++)
		{
			int newFib=prev+curr;
			prev=curr;
			curr=newFib;
		}
		return curr;
	}
}