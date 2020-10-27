#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    vector<int>v;
    int n,size,i,x;
    cin >> size;
    for(i = 0;i < size;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
