#include <iostream>
using namespace std;
/*void swap(int *a,int *b){
    int temp=a;
    a=b;
    b=temp;
}*/
int main(){
    int arr[]={0,1,1,0,1,2,1,2,0,0,0};
    int high=10,low=0,mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
