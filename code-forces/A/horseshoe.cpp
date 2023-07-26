#include<iostream>
#include<string>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int shoeColors[4];
    int shoeRep[4] = {0, 0, 0, 0};
    int c, shoesNeeded=0;
 
    for (int i=0; i<4; i++) {
        cin >> shoeColors[i];
    }
 
    for (int i=0; i<4; i++) {
        if (count(begin(shoeRep), end(shoeRep), shoeColors[i])==0) {
            c = count(begin(shoeColors), end(shoeColors), shoeColors[i]);
            if (c>1) {
                shoesNeeded += c-1;
                shoeRep[i] = shoeColors[i];
            }
        }
    }
 
    cout << shoesNeeded << endl;
 
    return 0;
}
