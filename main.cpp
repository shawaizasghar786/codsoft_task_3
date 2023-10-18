#include <iostream>
#include <vector>
using namespace std;
struct Studentdata {

    string name ;
    int grade;
};

int main() {
    vector<Studentdata> students;


    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;


    for (int i = 0; i < numStudents; i++) {
        string name;
        int grade;
        cout << "Enter student " << i + 1 << "'s name: ";
        cin >> name;
        cout << "Enter student " << i + 1 << "'s grade: ";
        cin >> grade;

        students.push_back({name, grade});
    }


    double averageGrade = 0;
    for (Studentdata student : students) {
        averageGrade += student.grade;
    }
    averageGrade /= students.size();


    int highestGrade = 0;
    int lowestGrade = 100;
    for (Studentdata student : students) {
        if (student.grade > highestGrade) {
            highestGrade = student.grade;
        }
        if (student.grade < lowestGrade) {
            lowestGrade = student.grade;
        }
    }


    cout << "Grade Report" << endl;
    cout << "Average grade: " << averageGrade << endl;
    cout << "Highest grade: " << highestGrade << endl;
    cout << "Lowest grade: " << lowestGrade << endl;

    return 0;
}