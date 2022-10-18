/*SUM [4*4]+[4*4] MATRIX*/

#include<iostream>
using namespace std;
int main(){
    int sum[4][4];
    int arr1[4][4]={1,6,7,2,4,8,3,1,9,2,2,2,3,3,3,3};
    int arr2[4][4]={1,6,7,2,4,8,3,1,9,2,2,2,3,3,3,3};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum[i][j]=(arr1[i][0]+arr2[0][j])+(arr1[i][1]+arr2[1][j])+(arr1[i][2]+arr2[2][j])+(arr1[i][3]+arr2[3][j]);
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

}
