//Question 5 (d)
#include <iostream>
using namespace std;


int main(){
	int n;
	cout<<"Define order for square matrix : ";
	cin>>n;
	int size= (n*(n+1))/2;;
	int A[size];
	
	cout<<"Enter elements of the matrix : "<<endl;
	for(int i=0; i<size; i++){
		cin>>A[i];
	}
	
	int k=0;
	cout<<"The upper triangular matrix is : "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n;j++){
			if(i <= j){
				cout<<A[k]<<" ";
				k++;
			}
			else{
				cout<<"0"<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
