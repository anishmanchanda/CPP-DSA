#include <iostream>
using namespace std;
int searchRotated(int n,int arr[],int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)return mid;
        
        if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target>=arr[mid] && target<arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
    
}
int main(){
    int arr[8]= {7,8,1,2,3,4,5,6};
    int target=4;
    cout<<"The index of target is: "<<searchRotated(8,arr,target)<<endl;
    return 0;
}