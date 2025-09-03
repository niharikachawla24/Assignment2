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
#include <iostream>
using namespace std;

int main() {
    int rows, cols, nonZero1, nonZero2;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "\nEnter number of non-zero elements in first matrix: ";
    cin >> nonZero1;

    int mat1[50][3];
    mat1[0][0] = rows;
    mat1[0][1] = cols;
    mat1[0][2] = nonZero1;

    cout << "\nEnter elements of first matrix (row col value):\n";
    for (int i = 1; i <= nonZero1; i++) {
        cin >> mat1[i][0] >> mat1[i][1] >> mat1[i][2];
        if (mat1[i][0] < 0 || mat1[i][0] >= rows || 
            mat1[i][1] < 0 || mat1[i][1] >= cols) {
            cout << "Error! Invalid row/column index.\n";
            return 0;
        }
    }

    cout << "\nEnter number of non-zero elements in second matrix: ";
    cin >> nonZero2;

    int mat2[50][3];
    mat2[0][0] = rows;
    mat2[0][1] = cols;
    mat2[0][2] = nonZero2;

    cout << "\nEnter elements of second matrix (row col value):\n";
    for (int i = 1; i <= nonZero2; i++) {
        cin >> mat2[i][0] >> mat2[i][1] >> mat2[i][2];
        if (mat2[i][0] < 0 || mat2[i][0] >= rows || 
            mat2[i][1] < 0 || mat2[i][1] >= cols) {
            cout << "Error! Invalid row/column index.\n";
            return 0;
        }
    }

    int result[50][3];
    result[0][0] = rows;
    result[0][1] = cols;

    int i = 1, j = 1, k = 1;
    while (i <= nonZero1 || j <= nonZero2) {
        if (j > nonZero2 || (i <= nonZero1 && 
            (mat1[i][0] < mat2[j][0] || 
            (mat1[i][0] == mat2[j][0] && mat1[i][1] < mat2[j][1])))) 
        {
            result[k][0] = mat1[i][0];
            result[k][1] = mat1[i][1];
            result[k][2] = mat1[i][2];
            i++;
        }
        else if (i > nonZero1 || (mat2[j][0] < mat1[i][0] || 
                (mat2[j][0] == mat1[i][0] && mat2[j][1] < mat1[i][1]))) 
        {
            result[k][0] = mat2[j][0];
            result[k][1] = mat2[j][1];
            result[k][2] = mat2[j][2];
            j++;
        }
        else {
            result[k][0] = mat1[i][0];
            result[k][1] = mat1[i][1];
            result[k][2] = mat1[i][2] + mat2[j][2];
            i++;
            j++;
        }
        k++;
    }
    result[0][2] = k - 1;

    cout << "\nResultant Sparse Matrix (row col value):\n";
    for (int x = 0; x <= result[0][2]; x++) {
        cout << result[x][0] << " " << result[x][1] << " " << result[x][2] << endl;
    }

    return 0;
}

//Question 6 (c)
#include <iostream>
using namespace std;

int main() {
    int r1, c1, nz1, r2, c2, nz2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter number of non-zero elements in first matrix: ";
    cin >> nz1;

    int mat1[50][3];
    mat1[0][0] = r1;
    mat1[0][1] = c1;
    mat1[0][2] = nz1;

    cout << "\nEnter elements of first matrix (row col value):\n";
    for (int i = 1; i <= nz1; i++) {
        cin >> mat1[i][0] >> mat1[i][1] >> mat1[i][2];
        if (mat1[i][0] < 0 || mat1[i][0] >= r1 || 
            mat1[i][1] < 0 || mat1[i][1] >= c1) {
            cout << "Error! Invalid row/column index.\n";
            return 0;
        }
    }

    cout << "\nEnter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Error! Multiplication not possible.\n";
        return 0;
    }
    cout << "Enter number of non-zero elements in second matrix: ";
    cin >> nz2;

    int mat2[50][3];
    mat2[0][0] = r2;
    mat2[0][1] = c2;
    mat2[0][2] = nz2;

    cout << "\nEnter elements of second matrix (row col value):\n";
    for (int i = 1; i <= nz2; i++) {
        cin >> mat2[i][0] >> mat2[i][1] >> mat2[i][2];
        if (mat2[i][0] < 0 || mat2[i][0] >= r2 || 
            mat2[i][1] < 0 || mat2[i][1] >= c2) {
            cout << "Error! Invalid row/column index.\n";
            return 0;
        }
    }

    int trans2[50][3];
    trans2[0][0] = c2;
    trans2[0][1] = r2;
    trans2[0][2] = nz2;
    int k = 1;
    for (int i = 0; i < c2; i++) {
        for (int j = 1; j <= nz2; j++) {
            if (mat2[j][1] == i) {
                trans2[k][0] = mat2[j][1];
                trans2[k][1] = mat2[j][0];
                trans2[k][2] = mat2[j][2];
                k++;
            }
        }
    }

    int result[100][3];
    result[0][0] = r1;
    result[0][1] = c2;
    int r = 1;
    for (int i = 1; i <= nz1; i++) {
        int row = mat1[i][0];
        for (int j = 1; j <= nz2; j++) {
            int col = trans2[j][0];
            int sum = 0;
            for (int x = 1; x <= nz1; x++) {
                if (mat1[x][0] == row) {
                    for (int y = 1; y <= nz2; y++) {
                        if (trans2[y][0] == col && trans2[y][1] == mat1[x][1]) {
                            sum += mat1[x][2] * trans2[y][2];
                        }
                    }
                }
            }
            if (sum != 0) {
                result[r][0] = row;
                result[r][1] = col;
                result[r][2] = sum;
                r++;
            }
        }
    }
    result[0][2] = r - 1;

    cout << "\nResultant Sparse Matrix (row col value):\n";
    for (int i = 0; i <= result[0][2]; i++) {
        cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
    }

    return 0;
}
