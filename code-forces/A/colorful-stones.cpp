#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string stones, instructions;
    int j = 0;
 
    cin >> stones >> instructions;
 
    for (int i=0; i<instructions.length(); i++) {
        if (instructions[i] == stones[j]) {
            j++;
        }
    }
 
    cout << ++j << endl;
    
    return 0;
}
 
/*
start: 21:56
read: 22:00
think: 22:02
code: 22:10
debug: --
 
read the stones input into a string and the instructions into another string, compare both and when it's the same make the movemnt. the position will be the movement+1
 
*/
