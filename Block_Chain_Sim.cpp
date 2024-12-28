#include <iostream>
#include <string>
using namespace std;

void encryptString(string &str, int key) {
    for (char &c : str) {
        c += key;
    }
}

void decryptString(string &str, int key) {
    for (char &c : str) {
        c -= key;
    }
}

/*
Welcome to my little encryption program. This program will encrypt and decrypt a string using a simple Caesar cipher.

The Caesar cipher is a type of substitution cipher in which each letter in the plaintext is 
'shifted' a certain number of places down the alphabet. For example, with a shift of 1,
A would be replaced by B, B would become C, and so on.

The key for the Caesar cipher will be 3. This means that each letter in the plaintext will be shifted 3 places down the alphabet.

elements used in this program:
- References
- Loops
- Functions
- Switch statements
- String manipulation
- User input
- Error handling
- Constants
- Basic encryption and decryption
- Simple blockchain simulation
*/

int main() {
    int x;
    string str;
    char choice;
    const int key = 3;

    do {
        if (!str.empty()) {
            cout << "Current Blockchain: " << str << endl;
        }
        cout << "\nPlease choose following options:\n";
        cout << "1 = Encrypt a string.\n";
        cout << "2 = Decrypt current string.\n";
        cout << "3 = Store a string in the blockchain.\n";
        cin >> x;

        switch (x) {
            case 1:
                cout << "Please enter a string:\t";
                cin.ignore();
                getline(cin, str);
                encryptString(str, key);
                cout << "\nEncrypted string: " << str << endl;
                break;

            case 2:
                cout << "Please enter a string:\t";
                cin.ignore();
                getline(cin, str);
                decryptString(str, key);
                cout << "\nDecrypted string: " << str << endl;
                break;
            case 3:
                cout << "please enter a string:\t";
                cin.ignore();
                getline(cin, str);

            default:
                cout << "\nInvalid Input !!!\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}