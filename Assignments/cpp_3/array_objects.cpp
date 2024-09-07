#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Member function to set student details
    void setStudentDetails(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Member function to display student details
    void displayStudentDetails() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    int numStudents;

    // Asking the user for the number of students
    cout << "Enter number of students: ";
    cin >> numStudents;

    // Creating an array of Student objects
    Student students[numStudents];

    // Taking input for each student
    for (int i = 0; i < numStudents; i++) {
        int rollNo;
        string name;

        cout << "Enter details for student " << i + 1 << endl;
        cout << "Roll No: ";
        cin >> rollNo;
        cin.ignore(); // To clear the input buffer
        cout << "Name: ";
        getline(cin, name);

        students[i].setStudentDetails(rollNo, name);
    }

    // Displaying details of all students
    cout << "\nStudent Details:" << endl;
    for (int i = 0; i < numStudents; i++) {
        students[i].displayStudentDetails();
    }

    return 0;
}

