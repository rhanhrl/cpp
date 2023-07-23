// ndfa atau Nondeterministic Finite Automaton
/*NDFA adalah model komputasional yang digunakan dalam teori bahasa formal dan otomata. Ini adalah mesin keadaan terbatas yang memungkinkan 
transisi antara keadaan-keadaan berdasarkan simbol input yang diberikan.*/

#include <iostream>
#include <string>
using namespace std;

bool isAcceptedNFA(string input) {
    int currentState = 0;
    int nextState = 0;
    
    for (char c : input) {
        switch (currentState) {
            case 0:
                if (c == 'T') {
                    nextState = 1;
                }
                break;
            case 1:
                if (c == 'E') {
                    nextState = 2;
                }
                break;
            case 2:
                if (c == 'O') {
                    nextState = 3;
                }
                break;
            case 3:
                if (c == 'R') {
                    nextState = 4;
                }
                break;
            case 4:
                if (c == 'I') {
                    nextState = 5;
                }
                break;
            case 5:
                if (c == ' ') {
                    nextState = 6;
                }
                break;
            case 6:
                if (c == 'B') {
                    nextState = 7;
                }
                break;
            case 7:
                if (c == 'A') {
                    nextState = 8;
                }
                break;
            case 8:
                if (c == 'H') {
                    nextState = 9;
                }
                break;
            case 9:
                if (c == 'A') {
                    nextState = 10;
                }
                break;
            case 10:
                if (c == 'S') {
                    nextState = 11;
                }
                break;
            case 11:
                if (c == 'A') {
                    nextState = 12;
                }
                break;
            case 12:
                if (c == ' ') {
                    nextState = 13;
                }
                break;
            case 13:
                if (c == 'O') {
                    nextState = 14;
                }
                break;
            case 14:
                if (c == 'T') {
                    nextState = 15;
                }
                break;
            case 15:
                if (c == 'O') {
                    nextState = 16;
                }
                break;
            case 16:
                if (c == 'M') {
                    nextState = 17;
                }
                break;
            case 17:
                if (c == 'A') {
                    nextState = 18;
                }
                break;
            case 18:
                if (c == 'T') {
                    nextState = 19;
                }
                break;
            case 19:
                if (c == 'A') {
                    nextState = 20;
                }
                break;
        }
        
        if (nextState != 0) {
            currentState = nextState;
            nextState = 0;
        } else {
            return false;
        }
    }
    
    return currentState == 20;
}

int main() {
    string input;
    char input2;

    cout << "Masukkan kalimat: ";
    getline(cin, input);
    
    if (isAcceptedNFA(input)) {
        cout << "Diterima oleh NFA!" << endl;
    } else {
        cout << "Ditolak oleh NFA!" << endl;
    }
}