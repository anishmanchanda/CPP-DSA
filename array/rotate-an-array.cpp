#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,3,3,3,3};
    int k;
    cin>>k;
    k=k%arr.size();
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
