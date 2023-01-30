#include <iostream>
#include <string>
/* A program that with the data stored in an array for a group of students:
- name - string up to 25 characters;
- ID number - string of 10 characters;
- grades in 10 courses - integers;
- course - integer,
performs the following actions, selected from a menu:
- adds to data set for consecutive student;
- displays all entered data on the screen;*/
using namespace std;

const int MAX_STUDENTS = 100;
const int NUM_COURSES = 10;

struct Student {
  string name;
  string ID;
  int courses[NUM_COURSES];
  int course;
};

Student students[MAX_STUDENTS];
int num_students = 0;

void add_student() {
  if (num_students == MAX_STUDENTS) {
    cout << "Error: Maximum number of students reached." << endl;
    return;
  }

  cout  << "Enter name:" cin >> students[num_students].name;
  cout  << "Enter ID:"  cin >> students[num_students].ID;
  cout << "Enter grades in 10 courses:";
  for (int i = 0; i < NUM_COURSES; i++) {
    cin >> students[num_students].courses[i];
  }
  cout << "Enter course:" cin >> students[num_students].course;

  num_students++;
}

void display_all() {
  cout << "Name\tID\tGrades\tCourse" << endl;
  for (int i = 0; i < num_students; i++) {
    cout << students[i].name << "\t" << students[i].ID << "\t";
    for (int j = 0; j < NUM_COURSES; j++) {
      cout << students[i].courses[j] << " ";
    }
    cout << "\t" << students[i].course << endl;
  }
}

int main() {
  int choice;

  while (true) {
    cout << "1. Add student" << endl;
    cout << "2. Display all students" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice:"cin >> choice;

    if (choice == 1) {
      add_student();
    } else if (choice == 2) {
      display_all();
    } else if (choice == 3) {
      break;
    } else {
      cout << "Invalid choice." << endl;
    }
  }

  return 0;
}