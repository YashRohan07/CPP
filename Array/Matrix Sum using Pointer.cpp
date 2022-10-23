#include<iostream>
using namespace std;

void Sum2DArray(int **matA,int **matB,int **mat3,int row,int col){
int sum=0;
for(int r=0;r<row;r++){
    for (int c=0;c<col;c++){
        mat3[r][c]=matA[r][c]+matB[r][c];
    }
}

}

void init2DArray(int **mat,int row,int col,int v){
for(int r=0;r<row;r++){
    mat[r]=new int[col];
}

for(int r=0;r<row;r++){
    for(int c=0;c<col;c++){
        mat[r][c]=v;
    }
}
}


void print2DArray(int **mat,int row,int col){
for(int r=0;r<row;r++){
    for(int c=0;c<col;c++){
        cout<<mat[r][c]<<'\t';
    }
    cout<<endl;

}
}
void input2DArray(int **mat,int row,int col){
for(int r=0;r<row;r++){
    for(int c=0;c<col;c++){
        cin>>mat[r][c];
    }


}
}



int main(){

int row,col;
row = 4;
col = 4;
int **matA = new int*[row];
int **matB = new int *[row];
int **matC = new int *[row];

init2DArray(matA,row,col,0);
init2DArray(matB,row,col,0);

input2DArray(matA,row,col);
cout<<"MATRIX-A"<<endl;
print2DArray(matA,row,col);

input2DArray(matB,row,col);
cout<<"MATRIX-B"<<endl;
print2DArray(matB,row,col);

cout<<"THE SUM MATRIX-C:"<<endl;
print2DArray(matC,row,col);





}
