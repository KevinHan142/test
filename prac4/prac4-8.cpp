#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person(){}
    Person(string name) { this->name = name; }
    string getName() { return name; }
    void setName(string name);
};
class Family {
    Person *p; 
    string name;
    int size;
public:
    Family(string name, int size); // size 개수만큼Person 배열동적생성 
    void show(); // 모든가족구성원출력
    void setName(int r, string f);
    ~Family(){};
};
Family::Family(string name, int size){
   this->name = name;
   this->size=size;
    Person *s = new Person[size];
    p = s;
}
void Family::show(){
    cout << name <<"의 가족은 다음과 같이 "<< size << "명 입니다."<<endl;
    for (int i = 0; i<size ;i++){
        cout<< p[i].getName() << '\t';
    }
}
void Family::setName(int r, string f){
    p[r].setName(f);
}
void Person::setName(string name){
    this->name=name;
}
int main() {
    Family *simpson = new Family("simpson", 3); // 3명으로구성된Simpson가족 
    simpson->setName(0,"123");
    simpson->setName(1,"123");
    simpson->setName(2,"123");
    simpson->show();
    delete simpson;
}

