#include <iostream>
#include <string>

using namespace std;

class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Constructor to initialize lecture details
    Lecture(string lecName = "", string subName = "", string courseName = "", int numLectures = 0) {
        this->lecturerName = lecName;
        this->subjectName = subName;
        this->courseName = courseName;
        this->numberOfLectures = numLectures;
    }

    // Function to assign initial values
    void setInitialValues(string lecName, string subName, string courseName, int numLectures) {
        this->lecturerName = lecName;
        this->subjectName = subName;
        this->courseName = courseName;
        this->numberOfLectures = numLectures;
    }

    // Function to add lecture details
    void addLectureDetails() {
        cout << "Enter Lecturer Name: ";
        getline(cin, lecturerName);
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        cout << "Enter Number of Lectures: ";
        cin >> numberOfLectures;
        cin.ignore(); // To ignore the newline character left by cin
    }

    // Function to display lecture details
    void displayLectureDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numberOfLectures << endl;
    }
};

int main() {
    const int numLecturers = 5;
    Lecture lecturers[numLecturers];
    char choice;
    

    // Assign initial values (optional, can be skipped if not required)
    for (int i = 0; i < numLecturers; ++i) {
        string lecName = "Lecturer" + (i + 1);
        string subName = "Subject" + (i + 1);
        string courseName = "Course" + (i + 1);
        int numLectures = i + 1;
        lecturers[i].setInitialValues(lecName, subName, courseName, numLectures);
    }

    do {
        cout << "\nLecture Management System\n";
        cout << "1. Add Lecture Details\n";
        cout << "2. Display Lecture Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left by cin

        switch (choice) {
            case '1':
                for (int i = 0; i < numLecturers; ++i) {
                    cout << "\nAdding details for Lecturer " << i + 1 << ":\n";
                    lecturers[i].addLectureDetails();
                }
                break;
            case '2':
                for (int i = 0; i < numLecturers; ++i) {
                    cout << "\nDetails of Lecturer " << i + 1 << ":\n";
                    lecturers[i].displayLectureDetails();
                }
                break;
            case '3':
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    } while (choice != '3');

    return 0;
}

