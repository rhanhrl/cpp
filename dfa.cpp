#include <iostream>
#include <string>
using namespace std;

bool isAcceptedDFA(string input) {
    int currentState = 0;
    
    for (char c : input) {
        switch (currentState) {
            case 0:
                if (c == 'T') {
                    currentState = 1;
                } else {
                    return false;
                }
                break;
            case 1:
                if (c == 'E') {
                    currentState = 2;
                } else {
                    return false;
                }
                break;
            case 2:
                if (c == 'O') {
                    currentState = 3;
                } else {
                    return false;
                }
                break;
            case 3:
                if (c == 'R') {
                    currentState = 4;
                } else {
                    return false;
                }
                break;
            case 4:
                if (c == 'I') {
                    currentState = 5;
                } else {
                    return false;
                }
                break;
            case 5:
                if (c == ' ') {
                    currentState = 6;
                } else {
                    return false;
                }
                break;
            case 6:
                if (c == 'B') {
                    currentState = 7;
                } else {
                    return false;
                }
                break;
            case 7:
                if (c == 'A') {
                    currentState = 8;
                } else {
                    return false;
                }
                break;
            case 8:
                if (c == 'H') {
                    currentState = 9;
                } else {
                    return false;
                }
                break;
            case 9:
                if (c == 'A') {
                    currentState = 10;
                } else {
                    return false;
                }
                break;
            case 10:
                if (c == 'S') {
                    currentState = 11;
                } else {
                    return false;
                }
                break;
            case 11:
                if (c == 'A') {
                    currentState = 12;
                } else {
                    return false;
                }
                break;
            case 12:
                if (c == ' ') {
                    currentState = 13;
                } else {
                    return false;
                }
                break;
            case 13:
                if (c == 'O') {
                    currentState = 14;
                } else {
                    return false;
                }
                break;
            case 14:
                if (c == 'T') {
                    currentState = 15;
                } else {
                    return false;
                }
                break;
            case 15:
                if (c == 'O') {
                    currentState = 16;
                } else {
                    return false;
                }
                break;
            case 16:
                if (c == 'M') {
                    currentState = 17;
                } else {
                    return false;
                }
                break;
            case 17:
                if (c == 'A') {
                    currentState = 18;
                } else {
                    return false;
                }
                break;
            case 18:
                if (c == 'T') {
                    currentState = 19;
                } else {
                    return false;
                }
                break;
            case 19:
                if (c == 'A') {
                    currentState = 20;
                } else {
                    return false;
                }
                break;
            default:
                return false;
        }
    }
    return currentState == 20;
}

int main() {
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    if (isAcceptedDFA(input)) {
        cout << "Diterima oleh DFA!" << endl;
    } else {
        cout << "Ditolak oleh DFA!" << endl;
    }
    return 0;
}