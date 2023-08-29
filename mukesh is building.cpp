#include <iostream>
using namespace std;

void checkNumber(void*data) {
    int *n = static_cast<int*>(data);
    
    if (*n > 0) {
        cout << "The number is positive." << endl;
    } else if (*n < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}

void checkCharacter(void *data) {
    char *c = static_cast<char*>(data);

    if (isalpha(*c)) {
        cout << "The character is an alphabet." << endl;
    } else if (isdigit(*c)) {
        cout << "The character is a number." << endl;
    } else {
        cout << "The character is not a number or an alphabet." << endl;
    }
}

int main() {
    int n;
    char c;

    cin >> n >> c;

    checkNumber(&n);
    checkCharacter(&c);

    return 0;
}

