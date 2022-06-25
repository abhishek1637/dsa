#include <iostream>
using namespace std;

void replacePI(char input[]) {
    if (input[1] == '\0')
        return;
    
    replacePI(input+1);

    if (input[0] == 'P' && input[1]=='I') {
        for (int i=strlen(input);i>1;i--) {
            input[i+2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    } else {
        return;
    }
}

int main() {
    char input[100];

    cout << "Enter the input string : " ;
    cin >> input;

    replacePI(input);
    cout << "After replacing, input is : " << input << endl;
}