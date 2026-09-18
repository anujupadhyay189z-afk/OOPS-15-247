#include <iostream>
using namespace std;

// Function Declaration
void inputData(int &, string &, float &, float &, float &, float &, float &);
void calculate(float, float, float, float, float, float &, float &);
void display(int, string, float, float);

int main()
{
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    inputData(rollNo, name, m1, m2, m3, m4, m5);
    calculate(m1, m2, m3, m4, m5, total, percentage);
    display(rollNo, name, total, percentage);

    return 0;
}

// Function to input data
void inputData(int &rollNo, string &name, float &m1, float &m2, float &m3, float &m4, float &m5)
{
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cin.ignore();          // Important
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Marks of 5 Subjects: "<<endl;
    cout << "Subject 1 :";
    cin >> m1;

    cout << "Subject 2 :";
    cin >> m2;

    cout << "Subject 3 :";
    cin >> m3;

    cout << "Subject 4 :";
    cin >> m4;
    
    cout << "Subject 5 :";
    cin >> m5;
}

// Function to calculate total and percentage
void calculate(float m1, float m2, float m3, float m4, float m5, float &total, float &percentage)
{
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
}

// Function to display result
void display(int rollNo, string name, float total, float percentage)
{
    cout << "\n----- Student Details -----" << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
}