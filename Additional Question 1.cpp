#include <iostream>
#include <cmath>
using namespace std;

int cpairs(int arr[], int n, int diff){
	int paircount=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(abs(arr[i]-arr[j])==diff){
				paircount++;
			}
		}
	}
	
	return paircount;
}

int main(){
	int A[]= {1,2,4,5,6,3,9};
	int n = sizeof(A)/sizeof(A[0]);
	int diff=3;
	
	cout<<cpairs(A,n,diff);
	return 0;
}
