#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int numQuestions, input, sure=0, solutions=0;
 
    cin >> numQuestions;
 
    for (int x=0; x<numQuestions; x++) {
        for (int i=0; i<3; i++) {
            cin >> input;
            if (input == 1) {
                sure++;
            }
        }
        if (sure>1) {
            solutions++;
        }
        sure = 0;
    }
 
    cout << solutions << endl;
 
    return 0;
}
