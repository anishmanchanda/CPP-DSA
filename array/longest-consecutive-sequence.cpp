#include <iostream>
#include <unordered_set>
using namespace std;
//return the length of longest sequence present in array 
int main(){
    unordered_set<int> st;
    int n=9;
    int arr[]={102,4,100,1,101,3,2,1,1};
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int longest=1,cnt=1;
    
    for(auto num:st){
        cnt=1;
        if(st.find(num-1)!=st.end()){
            continue;
        }
        else{
            if(num==1){
                cout<<"WOWOOW"<<endl;
            }
            int t=num+1;
            while(st.find(t)!=st.end()){
                cnt++;
                t++;
            }
            longest=max(longest,cnt);
        }
    }
    cout<<longest<< endl;
    return 0;
}