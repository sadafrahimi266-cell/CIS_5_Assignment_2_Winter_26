#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string getBMICategory(double bmi) {
  if (bmi < 18.5) return "underweight";
   else if (bmi < 25) return "normal weight";
   else if (bmi < 30) return "overweight";
   else return "obese";
 }

char getLetterGrade(int score) {
   if (score >= 90) return 'A';
  else if ( score >= 80) return 'B';
  else if (score >= 70) return 'C';
  else if (score >= 60) return 'D';
  else return 'F';
}

int main() {
  string name; 
  int age;
  double height , weight;
  int testScore;

  cout << "Enter your name: ";
  getline(cin, name);

  cout << "Enter your age: ";
  cin >> age;

  cout << "Enter your height in cm: ";
  cin >> height;

  cout << "Enter your weight in kg: ";
  cin >> weight;

  cout << "Enter your test score: ";
  cin >> testScore;

  double bmi = weight / (height * height);
  string bmiCategory = getBMICategory(bmi);
  char grade = getLetterGrade(testScore);

  cout << fixed << setprecision(2);
  cout << "\nHey " << name << ", you're " << age
       << " years old with a BMI of " << bmi
       << " (" << bmiCategory << ") and you got a grade "
       << grade << "! Keep it up!" << endl;


  return 0;
}
