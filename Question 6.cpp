//Question 6 (a)
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
        cout<<"Enter column number : ";
        cin>>mat[i][1];
        cout<<"Enter value : ";
        cin>>mat[i][2];
    }

    cout<<"\nSparse Matrix (row, col, value):\n";
    for(int i=0; i<=nonzero; i++){
        cout<<mat[i][0]<<" "<<mat[i][1]<<" "<<mat[i][2]<<endl;
    }
    
    return 0;
}
