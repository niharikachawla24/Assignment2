#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string s1= "Hello";
	string s2= "World";
	
	string s3= s1+s2;
	cout<<"Concatenated string :"<<s3<<endl;	 //Question 4 (a)
	
	int n= s1.length();
	for(int i=0; i<n/2; i++){
		char temp= s1[i];
		s1[i]= s1[n-i-1];
		s1[n-i-1]= temp;
	}
	
	cout<<"Reversed string :"<<s1<<endl; //Question 4 (b)
	
	string result="";	
	for(int i=0; i<n; i++){
		char c= s1[i];
		if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'){
            	result += c;
			}
	}
	cout<<"String without vowels : "<<result<<endl; //Question 4 (c)
	
	string A[]= {"this", "is", "question", "four", "d"};
	int n2= sizeof(A)/sizeof(A[0]);
	
	for(int i=0; i<n2; i++){
		for(int j=i+1; j<n2; j++){
			if(A[j]<A[i]){
				string temp= A[i];
				A[i]= A[j];
				A[j]= temp;
			}
		}
	}
	
	cout<<"After sorting in Alphabetical order : "; //Question 4 (d)
	for(int i=0; i<n2; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
	
	int n3= s2.length();
	string res=" ";
	for(int i=0; i<n3; i++){
		char c= s2[i];
		if(c>='A' && c<='Z'){
			c += 32;
		}
		res+=c;
	}
	cout<<"Uppercase to Lowercase : "<<res; //Question 4 (e)
	return 0;
}
