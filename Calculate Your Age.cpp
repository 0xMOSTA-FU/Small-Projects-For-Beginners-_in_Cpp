#include <iostream>
using namespace std;



int main(){

int age;
cin >> age;

int age_in_days = age * 365;
int age_in_hours = age_in_days * 24;
int age_in_minutes = age_in_hours * 60;
int age_in_seconds = age_in_minutes * 60;

 cout << "Your age in days: " << age_in_days << endl << "Your age in hours: " << age_in_hours << endl << "Your age in minutes: " << age_in_minutes << endl << "Your age in seconds: " << age_in_seconds; 



  return 0;
}
