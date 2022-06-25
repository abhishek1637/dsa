#include <iostream>
using namespace std;

int length(char input[]) {
    if (input[0] == '\0') {
        return 0;
    }

    int len = length(input+1);

    return len+1;
}

int main() {
    char input[100];

    cout << "Enter the string : ";
    cin >> input;

    cout << "Length of this string = " << length(input) << endl;
}