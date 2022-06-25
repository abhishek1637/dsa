#include <iostream>
#include <cstring>
using namespace std;

void printStar(char input[]) {
    if (input[0]=='\0'){
        return;
    }

    printStar(input+1);

    if (input[0]!=input[1]) {
        return;
    }
    else {
        for (int i=strlen(input)-1; i > 0;i--) {
            input[i+1] = input[i];
        }
        input[1] = '*';
    }
}

int main() {
    char input[100];

    cout << "Enter the input string : " ;
    cin >> input;

    printStar(input);
    cout << "After analysing string, the output is : " << input << endl;
}