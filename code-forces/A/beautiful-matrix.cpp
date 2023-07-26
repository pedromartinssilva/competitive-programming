#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int input, row, col, answer;
 
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> input;
            if (input == 1) {
                row = i+1;
                col = j+1;
            }
        }
    }
 
    answer = abs(row-3)+abs(col-3);
 
    cout << answer << endl;
 
    return 0;
}
 
/*
start: 21:22
read 25
think 28
code 36
 
Read the input into a multidimensional array and then iterate trhought it to find the indexes of the num 1
 
the answer will be the difference between each position (i,j) and the center (3,3)
 
*/
