#include <iostream>
#include <climits>

using namespace std;

const int MAX_SCORES = 10;

class Student {
private:
int scores[MAX_SCORES];
int numScores;

public:

Student() : numScores(0) {}

void addScore(int score) {
if (numScores < MAX_SCORES) {
scores[numScores++] = score;
} else {
cout << "Cannot add more scores. Array is full." << endl;
}
}

int findHighest() const {
if (numScores == 0) {
cout << "No scores available to find the highest score." << endl;
return INT_MIN;
}
int highest = scores[0];
for (int i = 1; i < numScores; ++i) {
if (scores[i] > highest) {
highest = scores[i];
}
}
return highest;
}

int findLowest() const {
if (numScores == 0) {
cout << "No scores available to find the lowest score." << endl;
return INT_MAX;
}
int lowest = scores[0];
for (int i = 1; i < numScores; ++i) {
if (scores[i] < lowest) {
lowest = scores[i];
}
}
return lowest;
}

int getTotalScores() const {
return numScores;
}

void printScores() const {
if (numScores == 0) {
cout << "No scores to display." << endl;
return;
}
cout << "Scores: ";
for (int i = 0; i < numScores; ++i) {
cout << scores[i] << " ";
}
cout << endl;
}
};

int main() {
Student student;
student.addScore(85);
student.addScore(92);
student.addScore(78);
student.addScore(88);

student.printScores();

int highest = student.findHighest();
if (highest != INT_MIN) {
cout << "Highest score: " << highest << endl;
}

int lowest = student.findLowest();
if (lowest != INT_MAX) {
cout << "Lowest score: " << lowest << endl;
}

cout << "Total number of scores: " << student.getTotalScores() << endl;

return 0;
}