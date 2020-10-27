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
    for(i = 0;i<size;i++){
        cin >> x;
        v.push_back(x);
    }
    int erase_position;
    cin >> erase_position;

    v.erase(v.begin() + (erase_position-1));

    int erase_start,erase_end;
    cin >> erase_start;
    cin >> erase_end;
    v.erase(v.begin() + (erase_start-1),v.begin()+(erase_end-1));

    cout << v.size() << endl;
    for( i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
