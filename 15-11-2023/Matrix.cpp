#include<iostream>
using namespace std;

class Matrix{
	int rows,cols;
	int mat[100][100];
public:
	Matrix(int r,int c,int m[100][100]){
		rows = r;
		cols = c;
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				mat[i][j] = m[i][j];
			}
		}
	}	

	Matrix operator+(Matrix x){
		int ans[100][100];
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				ans[i][j] = mat[i][j] + x.mat[i][j];
			}
		}
		return Matrix(rows,cols,ans);
	}

	void display(){
		cout << "Matrix: " << endl;
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main(){
	int rows1,cols1,rows2,cols2;
	cin >> rows1 >> cols1;
	int a[100][100];
	for(int i=0;i<rows1;i++){
		for(int j=0;j<cols1;j++){
			cin >> a[i][j];
		}
	}
	Matrix m1(rows1,cols1,a);


	cin >> rows2 >> cols2;
	int b[100][100];
	for(int i=0;i<rows2;i++){
		for(int j=0;j<cols2;j++){
			cin >> b[i][j];
		}
	}
	Matrix m2(rows2,cols2,b);

	Matrix m3 = m1.operator+(m2);
	m3.display();
}
