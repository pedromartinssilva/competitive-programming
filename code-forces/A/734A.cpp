#include <iostream>
#include <stdio.h>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, a=0, d=0;
    string res;
 
    cin >> n >> res;
 
    a = count(res.begin(), res.end(), 'A');
    d = count(res.begin(), res.end(), 'D');
 
    if (a==d) {
        cout << "Friendship" << endl;
    } else if (a>d) {
        cout << "Anton" << endl;
    } else {
        cout << "Danik" << endl;
    }
 
    return 0;
}
