#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class temp{
    string id,name,author,search;
    fstream file;
    public :
        void AddBooks();
        void ShowBooks();
        void ExtractBooks();
}obj;

void temp :: AddBooks(){
    cout <<"\nEnter Book ID : ";
    getline(cin,id);
    cout << "Enter Book Name : ";
    getline(cin,name);
    cout << "Enter Author Name : ";
    getline(cin,author);

    file.open("bookdata.txt", ios :: out | ios :: app);
    file << id << "*" << name << "*" << author << endl;
    file.close();
}

void temp :: ShowBooks(){
    file.open("bookdata.txt", ios :: in);
    getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');
    cout << "\n\n";
    cout << "\t\t Book ID \t\t\t Book Name \t\t\t Author's Name" << endl;

    while(!file.eof()){
        cout << "\t\t " << id << " \t\t\t " << name << " \t\t\t " << author << endl;
        getline(file,id,'*');
        getline(file,name,'*');
        getline(file,author,'\n');
    }
    file.close();
}

void temp :: ExtractBooks(){
    cout << "Enter Book ID : ";
    getline(cin,search);

    file.open("bookdata.txt", ios :: in);
    getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');

    cout << "\n\n";
    cout << "\t\t Book ID \t\t\t Book Name \t\t\t Author's Name" << endl;

    while(!file.eof()){
        if(search == id){
            cout << "\t\t " << id << " \t\t\t " << name << " \t\t\t " << author << endl;
            cout << "Book Extracted Successfully...";
        }
        getline(file,id,'*');
        getline(file,name,'*');
        getline(file,author,'\n');
    }
    file.close();
}