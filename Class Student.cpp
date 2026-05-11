#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int rollNo;
    char name[50];
    char studentClass[20];
    int year;
    float totalMarks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Class: ";
        cin >> studentClass;

        cout << "Enter Year: ";
        cin >> year;

        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    void display() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nClass: " << studentClass;
        cout << "\nYear: " << year;
        cout << "\nTotal Marks: " << totalMarks << endl;
    }
};

int main() {
    Student s[5];

    // Writing objects to file
    ofstream fout("student.dat", ios::binary);

    cout << "Enter details of 5 students:\n";

    for(int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].input();

        fout.write((char*)&s[i], sizeof(s[i]));
    }

    fout.close();

    // Reading objects from file
    ifstream fin("student.dat", ios::binary);

    cout << "\n\nStudent Records from File:\n";

    for(int i = 0; i < 5; i++) {
        fin.read((char*)&s[i], sizeof(s[i]));
        s[i].display();
    }

    fin.close();

    return 0;
}
