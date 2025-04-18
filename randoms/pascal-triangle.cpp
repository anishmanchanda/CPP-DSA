#include <iostream>
using namespace std;
vector <int> generaterow(int rowNum){
    long long   ans=1;
    vector<int>ansRow;
    ansRow.push_back(ans);
    for(int col=1;col<rowNum;col++){
        ans=ans*(rowNum-col)/col;
        ansRow.push_back(ans);
    }
    return ansRow;

}
vector <vector<int>> PascalTriangle(int N){
    vector <vector<int>> triangle;
    for(int row=1;row<=N;row++){
        triangle.push_back(generaterow(row));
    }
    return triangle;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v=PascalTriangle(n);
    for(int i=0;i<n;i++){
        vector<int>Vsub=v[i];
        int len=Vsub.size();
        for(int i=0;i<len;i++){
            cout<<Vsub[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}