#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int size,i,x;
    cin >> size;
    for(i = 0;i < size;i++){
        cin >> x;
        v.push_back(x);
    }
    int no_of_queries,result;
    cin >> no_of_queries;
    for(i = 0;i < no_of_queries;i++){
        cin >> x;
        vector<int>::iterator low = lower_bound(v.begin(),v.end(),x);
        if(v[low - v.begin()] == x){
            cout << "Yes" << " " << low - v.begin() + 1  << endl;
        }
        else{
            cout << "No" << " " << low - v.begin() + 1  << endl;
        }
   }
    return 0;
}
