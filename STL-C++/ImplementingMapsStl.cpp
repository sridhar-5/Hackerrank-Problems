#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>m;
    int no_of_iterations;
    cin >> no_of_iterations;
    int i,option;
    string studentname;
    int marks;
    for(i = 0;i < no_of_iterations;i++){
        cin >> option;
        if(option == 1){
            cin >> studentname >> marks;
            m[studentname] += marks;
        }
        else if(option == 2){
            cin >> studentname;
            m.erase(studentname);
        }
        else if(option == 3){
            cin >> studentname;
            map<string,int>::iterator k = m.find(studentname);
            if(k != m.end()){
                cout << m[studentname] << endl;
            }
            else {
                m[studentname] = 0;
                cout << m[studentname] << endl;
            }
        }
    }
    return 0;
}
