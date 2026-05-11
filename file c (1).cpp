#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    float grades[3];
};

void inputStudent(Student &s) {
    cout << "Enter student name: ";
    cin >> s.name;

    cout << "Enter student age: ";
    cin >> s.age;

    cout << "Enter 3 grades:" << endl;

    for(int i = 0; i < 3; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> s.grades[i];
    }
}

float calculateAverage(Student s) {
    float sum = 0;

    for(int i = 0; i < 3; i++) {
        sum += s.grades[i];
    }

    return sum / 3;
}

void displayInfo(Student s) {
    cout << "\n--- Student Report ---" << endl;

    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;

    cout << "Grades: ";
    for(int i = 0; i < 3; i++) {
        cout << s.grades[i] << " ";
    }

    cout << endl;
    cout << "Average: " << calculateAverage(s) << endl;
}

int main() {
    Student s;

    inputStudent(s);
    displayInfo(s);

    return 0;
}