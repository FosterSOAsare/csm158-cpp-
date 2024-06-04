#include <iostream>

using namespace std;

int main(){
  int marks;
  cout << "Please enter your exam score \n";
  cin >> marks;

  string grade;
  if(marks >= 70){
    grade = 'A';
  }
  else if(marks >= 60){
    grade = 'B';
  }
  else if(marks >= 50){
    grade = 'C';
  }
  else if(marks >= 40){
    grade = 'D';
  }

  cout << "Your exam score is " << grade;

  return 0;
}