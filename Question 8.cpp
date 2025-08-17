#include <iostream>
using namespace std;
int cdis(int arr[], int n){
	int distinctcount=0;
	
	for(int i=0; i<n; i++){
		int flag=1;
		
		for(int j=0; j<i ; j++){
			if(arr[i]==arr[j]){
				flag=0;
				break;
			}
		}
		
		if (flag == 1){
			distinctcount++;
		}
	}
	return distinctcount;
}
int main(){
	
	int A[]={1,1,2,3,4,4,5,5,6,6,7,8};
	int n= sizeof(A)/sizeof(A[0]);
	
	cout<<"Distinct elements : "cdis(A,n);
	return 0;
}
