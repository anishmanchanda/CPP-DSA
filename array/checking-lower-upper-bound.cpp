#include <iostream>
#include <vector>
#include <algorithm>  // for lower_bound
using namespace std;

int main(){ 
    vector<int> v = {10, 20, 30, 40, 50};
    auto it = lower_bound(v.begin(), v.end(), 14);
    cout << "Lower bound at position: " << (it - v.begin()) << endl;
    cout << "Value at position: " << *it << endl;

    return 0;
}