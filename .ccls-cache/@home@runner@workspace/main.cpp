#include <iostream>
#include <iomanip>
#include <string>

std::string getBMICategory(double bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi < 25.0) {
        return "Normal weight";
    } else if (bmi < 30.0) {
        return "Overweight";
    } else {
        return "Obese";
    }
}

char getLetterGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    std::string name;
    int age;
    double height, weight;
    int testScore;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height (meters): ";
    std::cin >> height;

    std::cout << "Enter your weight (kg): ";
    std::cin >> weight;

    std::cout << "Enter your test score (0-100): ";
    std::cin >> testScore;

    double bmi = weight / (height * height);
    std::string bmiCategory = getBMICategory(bmi);
    char grade = getLetterGrade(testScore);

    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Hey " << name << ", you're " << age << " years old with a BMI of "
              << bmi << " (" << bmiCategory << ") and you got a grade " << grade
              << "! Keep it up!" << std::endl;

    return 0;
}
