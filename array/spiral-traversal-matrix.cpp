#include <iostream>
using namespace std;
int main(){
    //FOR SPIRAL 
    // right->bottom->left->top
    int top=0,bottom=5,left=0,right=5;
    int mat[6][6]={{1,2,3,4,5,6},{20,21,22,23,24,7},{19,32,33,34,25,8},{18,31,36,35,26,9},{17,30,29,28,27,10},{16,15,14,13,12,11}};
    cout<<endl<<endl;
    while(left<=right  && top<=bottom ){
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<mat[i][left]<<" ";
            }
            left++;
        }

    }
    cout<<endl;

 
    return 0;
}