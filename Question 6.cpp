//Question 6(a)
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Define order of matrix  : ";
    cin>>n;
    
    int nonzero;
    cout<<"\nDefine number of non zero elements : ";
    cin>>nonzero;
    
    int mat[nonzero+1][3]; 

    mat[0][0] = n;
    mat[0][1] = n;
    mat[0][2] = nonzero;
    
    for(int i=1; i<=nonzero; i++){
        cout<<"Enter row number : ";
        cin>>mat[i][0];
        if(mat[i][0]>=n || mat[i][0]<0){
        	cout<<"Error!"<<endl;
        	break;
		}
        cout<<"Enter column number : ";
        cin>>mat[i][1];
        if(mat[i][1]>=n || mat[i][1]<0){
        	cout<<"Error!"<<endl;
        	break;
		}
        cout<<"Enter value : ";
        cin>>mat[i][2];
    }

    cout<<"\nSparse Matrix (row, col, value):\n";
    for(int i=0; i<=nonzero; i++){
        cout<<mat[i][0]<<" "<<mat[i][1]<<" "<<mat[i][2]<<endl;
    }
    
    int tmat[nonzero+1][3];
    int k=1;
    cout<<"Transpose of a Matrix"<<endl;
    for(int i=0; i<n; i++){
    	for(int j=1; j<=nonzero; j++){
    		if(mat[j][1]==i){
    			tmat[k][0]= mat[j][1];
    			tmat[k][1]= mat[j][0];
    			tmat[k][2]= mat[j][2];
    			k++;
			}
		}
	}
    
    cout<<"\nTranspose of Sparse Matrix (row, col, value):\n";
    for(int i=0; i<=nonzero; i++){
        cout<<tmat[i][0]<<" "<<tmat[i][1]<<" "<<tmat[i][2]<<endl;
    }
    return 0;
}

//Question 6 (b)
