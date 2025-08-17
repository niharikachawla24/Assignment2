//Question 3 (a)
#include <iostream>
using namespace std;

int missing(int arr[], int n){
	for(int i=0; i<n-1; i++){
		if(arr[i]!=i+1){
			cout<<"Missing integer is "<<i+1<<" at index "<<i;
			return i+1;
		}
	}
	
	cout<<"Missing integer is :"<<n<<endl;
	return n;
} 

int main(){
	int A[]={1,2,3,4,5,6,7};
	int n= (sizeof(A)/sizeof(A[0])) + 1;
	
	missing(A,n);	
  return 0;
}

//Question 3 (b)
#include <iostream>
using namespace std;

int missing(int arr[], int n){
	int first=0;
	int last= n-2;
	
	while(first <= last){
		int mid=  (first + last)/2;
		
		if(arr[mid] == mid+1){
			first = mid+1;
		}
		
		else{
			last= mid-1;
		}
	}
	
	return first + 1;
}

int main(){
	int A[]={1,2,3,5,6,7,8};
	int n = (sizeof(A)/sizeof(A[0])) + 1;
	cout<<"Missing integer is "<<missing(A,n);
	
	return 0;
}
