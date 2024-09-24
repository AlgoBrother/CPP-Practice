
#include "Date.h"


Date::Date(int month. int day, int year){
  this->day = day;
  this->month = month;
  this->year = year;

}

void Date::display(){
  cout << month << "/" << day << "/" << year << endl;
}
