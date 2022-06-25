#include <iostream>
#include <cstring>
using namespace std;

void removeX(char input[]) {
    if (input[0] == '\0') {
        return;
    }

    removeX(input+1);

    if (input[0] == 'x') {
        for(int i=0; i<strlen(input); i++) {
            input[i] = input[i+1];
        }
    }
    else {
        return;
    }

}

int main() {
    char input[100];

    cout << "Enter the string : ";
    cin >> input;

    removeX(input);
    cout << "After removal of X from the string = " << input << endl;
}