#include <iostream>
#include "temp.h"
using namespace std;

int main(){
    char choice;

    cout << "Welcome to The Library Management" << endl;
    cout << "How may i assist you today ?" << endl;
    cout << "1. Show all books" << endl;
    cout << "2. Extract book" << endl;
    cout << "3. Add books(ADMIN)" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose number only : ";

    cin >> choice;

    switch(choice){
        case '1':
            cin.ignore();
            obj.ShowBooks();
        break;
        case '2':
            cin.ignore();
            obj.ExtractBooks();
        break;
        case '3':
            cin.ignore();
            obj.AddBooks();
        break;
        case '4':
            return 0;
        break;
        default:
            cout << "Invalid input...";
    }
}