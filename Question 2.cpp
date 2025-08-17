#include <iostream>
using namespace std;

int main(){
	
	int A[]={64,34,25,12,22,11,90};
	int n= sizeof(A)/sizeof(A[0]);
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n ;j++){
			if(A[j]<A[i]){
				int temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
	}
	
	cout<<"Array after sorting through bubble sort "<<endl;
	for(int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
