#include <iostream>
using namespace std;
void moveZeroes(int arr[],int n){
    int zcnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zcnt++;
        }
        else{
            arr[i-zcnt]=arr[i];
        }
    }
    for(int i=n-zcnt;i<n;i++){
        arr[i]=0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroes(arr,n);
    return 0;
}