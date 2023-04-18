#include <iostream>
using namespace std;
int main() {
    string y;
    cout<<"\nEnter your name:";
    cin>>y;
    cout<<"\nYour name is " << y;


    int x;
    cout<<"\nEnter your student ID:";
    cin>>x;
    cout<<"\nYour ID is " << x;



    int var1 , var2 , sum , diff , prod;
    cout << "\nEnter your first number: ";
    cin>>var1;
    cout << "\nEnter your second number: ";
    cin>>var2;
    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;
    cout << "\nSum = " << sum;
    cout << "\nDiff = " << diff;
    cout << "\nProd = " << prod;



    string name;
    int labGrade , midtermGrade , finalGrade , finalScore;
    cout << "\nEnter student name: ";
    cin >> name;
    cout << "\nEnter your lab grade: ";
    cin >> labGrade;
    cout << "\nEnter your midterm grade: ";
    cin >> midtermGrade;
    cout << "\nEnter your final grade: ";
    cin >> finalGrade;
    finalScore = labGrade * 0.25 + midtermGrade * 0.35 + finalGrade * 0.4;
    cout <<"\nfinal score is " << finalScore;



    cout << "\n*\n**\n***\n**\n*\n";
}
