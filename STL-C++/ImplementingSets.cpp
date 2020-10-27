#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;
int main(){

set<int>s;

int no_of_queries,i;

cin >> no_of_queries;

int option;
int x;

while(i < no_of_queries){
    cin >> option >> x;
    if(option == 1){
        s.insert(x);
    }
    else if(option == 2){
        s.erase(x);
    }
    else if(option == 3){
        set<int>::iterator itr=s.find(x);
        if(itr == s.end()){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    i++;
}
}
