#include <iostream> 
#include<string>
using namespace std;
class Date{
    string r;
    int year, month, day;
public:
    Date(string i){ r = i ;}
    Date(int a ,int b, int c) {year=a, month = b , day=c;}
    int getMonth();
    int getDay();
    int getYear();
    void show(){cout<< r << endl;}
};
int Date::getMonth(){
    return month ;
}
int Date::getYear(){
    return year ;
}
int Date::getDay(){
    return day ;
}
int main() {
Date birth(2014, 3, 20);  
Date independenceDay("1945/8/15");
independenceDay.show();
cout << birth.getYear() <<',' << birth.getMonth() << ',' << birth. getDay() << endl;
}