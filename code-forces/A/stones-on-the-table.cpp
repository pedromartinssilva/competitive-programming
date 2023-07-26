#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string stones;
    int n, counter=0;
 
    cin >> n >> stones;
    
    for (int i=0; i<n; i++) {
        if (stones[i] == stones [i+1]) {
            counter++;
        }
    }
 
    cout << counter;
 
    return 0;
}
 
/*
start - 22:22
read  - 22:23
think - 22:26
code  - 22:28
debug - 22:29
 
read the number of snotnes n and then the colors;
 
the min answer is 0 and the max is n-1;
 
iterate thru the string and see if the next stone is the same color, if it is, ans++, then the next...
 
*/
