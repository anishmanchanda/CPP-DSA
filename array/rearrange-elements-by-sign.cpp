#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr[6]={1,2,3,-4,-5,-6};
    int ans[n];
    int posidx=0,negidx=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[negidx]=arr[i];
            negidx+=2;
        }
        else{
            ans[posidx]=arr[i];
            posidx+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}