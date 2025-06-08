#include <iostream>
#include <vector>
#include <algorithm>  // for lower_bound
using namespace std;

int main(){ 
    vector<int> v = {10, 20, 30, 40, 50};
    auto LB = lower_bound(v.begin(), v.end(), 20);
    auto UB=upper_bound(v.begin(),v.end(),20);
    cout << "Lower bound at position: " << (LB - v.begin()) << endl;
    cout << "Value at position: " << *LB << endl<<endl;
    cout << "Upper bound at position: " << (UB - v.begin()) << endl;
    cout << "Value at position: " << *UB << endl<<endl;

    return 0;
}