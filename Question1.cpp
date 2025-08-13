//Binary Search : Time Complexity of O(log n)
#include <iostream>
using namespace std;

int binsearch(int arr[], int n, int key){
	int first=0;
	int last= n-1;
	
	while(first != last){
		int mid= (first + last)/2;
		
		if(arr[mid] == key){
			cout<<"Element found at index "<<mid<<endl;
			return 0;
		}
		
		else if(arr[mid] < key){
			first= mid+1;
		}
		
		else if(arr[mid] > key){
			last = mid-1;
		}
	}
	
	cout<<"Elment not found"<<"\n";
	return -1;
}

int main(){
	
	int A[]={1,2,3,4,5,6,7,8};
	cout<<"Which element do you want to search for? "<<endl;
	int key;
	cin>>key;
	int n= sizeof(A)/sizeof(A[0]);
	
	binsearch(A,n,key);
	return 0;
}

//Linear Search :Time Complexity of O(n)
#include <iostream>
using namespace std;

int linsearch(int arr[], int n, int key){
	
	for(int i=0; i<n ; i++){
		if (arr[i]== key){
			cout<<"Element found at index "<<i<<endl;
			return 0;
		}
	}
	
	cout<<"Element not found"<<endl;
	return -1;
}

int main(){
	int A[]={1,2,3,4,5,6,7,8};
	int n= sizeof(A)/sizeof(A[0]);
	cout<<"Which element do you want to find?"<<endl;
	int key;
	cin>>key;
	
	linsearch(A,n,key);
	return 0;
}
