#include<iostream>
#include <utility>
using namespace std;
/*
double areaSwitchCase(int ch, vector<double> a) {
  switch (ch) {
  case 1:
    cout<<3.14*a[0]*a[0];
    return 3.14*a[0]*a[0];
  case 2:
	cout<<a[0]*a[1];
    return a[0]*a[1];
  }

}
*/
int main(){
    cout<<"hello world"<<endl;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    for(int i=0;i<5;i++){
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
      cout<<arr2[i]<<" ";
    }
    cout<<endl<<endl;
    swap(arr1[4],arr2[4]);
    swap(arr1[0],arr2[0]);
    for(int i=0;i<5;i++){
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
      cout<<arr2[i]<<" ";
    }
    return 0;
}