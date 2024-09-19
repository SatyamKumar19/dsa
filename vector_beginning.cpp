#include<iostream>
#include<vector>
using namespace std;
 void explainprint(){
    //vector push and emplace
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(3);
    vector<pair<int,int>>vec;
    vec.push_back({3,4});
    vec.emplace_back(9,3);
    for(int i = 0; i < vec.size(); i++){
        cout <<vec[i].first <<","<<vec[i].second<<",";
        // cout << "(" << vec[i].first << ", " << vec[i].second << ") "
    
 }}
int main(){
    explainprint();
}