#include <iostream>
using namespace std;

int invc(int arr[], int n){
	int invcount=0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n-1; j++){
			if(i<j && arr[i]>arr[j]){
				invcount++;
			}
		}
	}
	
	return invcount;
}

int main(){
	
	int A[]= {1,2,4,3,5,6,8,7,9};
	int n= (sizeof(A)/sizeof(A[0]));
	
	cout<<invc(A,n);
	return 0;
}
