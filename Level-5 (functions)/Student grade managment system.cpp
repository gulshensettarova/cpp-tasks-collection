#include <iostream>
#include <string>
using namespace std;

const int MAX = 100; // maximum number of students

// Function to add a student
void addStudent(string names[], int scores[], int &n, string name, int score) {
    if(n < MAX) {
        names[n] = name;
        scores[n] = score;
        n++;
    } else {
        cout << "Student list is full!" << endl;
    }
}

// Function to calculate average
double calculateAverage(int scores[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += scores[i];
    return (double)sum / n;
}

// Function to find the top student
string topStudent(string names[], int scores[], int n) {
    int maxScore = scores[0];
    int index = 0;
    for(int i=1; i<n; i++) {
        if(scores[i] > maxScore) {
            maxScore = scores[i];
            index = i;
        }
    }
    return names[index];
}

// Function to check pass/fail
void checkPassFail(int score) {
    if(score >= 50)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;
}

// Function to display all students
void displayAll(string names[], int scores[], int n) {
    cout << "\nAll Students:\n";
    for(int i=0; i<n; i++)
        cout << names[i] << " - " << scores[i] << endl;
}

int main() {
    string names[MAX];
    int scores[MAX];
    int n = 0; // current number of students

    // Example usage
    addStudent(names, scores, n, "Sabina", 80);
    addStudent(names, scores, n, "Kanan", 45);
    addStudent(names, scores, n, "Nazakat", 70);

    displayAll(names, scores, n);

    cout << "\nAverage score: " << calculateAverage(scores, n) << endl;
    cout << "Top student: " << topStudent(names, scores, n) << endl;

    cout << "\nPass/Fail check for Kanan: ";
    checkPassFail(scores[1]);

    return 0;
}
