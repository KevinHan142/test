#include <iostream>
using namespace std;

int big(int a, int b) { // a와 b 중 큰 수 리턴
	if(a>b) return a;
	else return b;
}

int big(int a[], int size) { // 배열 a[]에서 가장 큰 수 리턴
	int res = a[0];
	for(int i=1; i<size; i++)
		if(res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[5] = {1, 9, -2, 8, 6};
	cout << big(2,3) << endl;
	cout << big(array, 5) << endl;
}
/*
#include <iostream> 
#include <string> //#pragma warning(disable: 4996)
using namespace std;
class Person {// person 클래스 선언
    char* name;
    int id;
public:
    Person (int id, const char* name);
    ~Person();
    Person (Person& person);
    void changeName (const char* name);
    void show() { cout << id << name << endl; }

};
Person::Person (int id, const char* name) { 
    this->id = id;
    size_t len = strlen(name); //name의 문자 개수 
    this->name = new char[len + 1]; // name 문자열 공간 한당 
    strcpy(this->name, len + 1, name); // name에 문자열 복사
}
Person::~Person() {// 소멸자
    if (name) //만일 name에 동적 할당된 배열이 있으면
        delete[] name;
}
Person :: Person(Person& person) {// 복사 생성자
    this->id = person.id; // id 값 복사 
    size_t len = strlen(person. name);// name의 문자 개수 
    this->name = new char[len + 1]; // name을 위한 공간 할당
    strcpy(this->name, len + 1,person.name); // name의 문자입
    cout << "복사 생성자 실행. 원본 객체의 이름"<< this->name << endl;
}
void Person::changeName (const char* name) {// 이름 변경
    if (strlen (name) > strlen (this->name)) return;   
    strcpy(this->name, strlen(name) + 1, name);
}
*/
/*
#include <iostream> 
using namespace std;
class Circle { 
private:
    int radius; 
public:
    Circle(Circle& c); // 복사 생성자 선언
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; } double getArea() { return 3.14*radius*radius; }
};

Circle::Circle(Circle& c) { // 복사 생성자 구현 
    this->radius = c.radius;
    cout << "복사 생성자 실행 radius = " << radius << endl; 
}

int main() {
    Circle src(30); // src 객체의 보통 생성자 호출 
    Circle dest(src); // dest 객체의 복사 생성자 호출
    cout << "원본의 면적 = " << src.getArea() << endl;
    cout << "사본의 면적 = " << dest.getArea() << endl; 
}
*/
/*
#include<iostream>
#include <cstring>
#pragma warning(disable:49996)
using namespace std;
class Person{
    char*name;
    int id;
public:
    Person(int id, const char* name);
    ~Person();
    void changename(const char*name);
    void show(){cout << id << ','<< name<<endl;}
};
Person::Person(int id , const char*name){
    this->id =id;
    int len = (int)strlen(name);
    this->name = new char[len-1];
    strcpy(this->name,name);
}
Person::~Person(){
    if(name){delete[]name;}
}
int main(){
    Person father(1,"kitae");
    Person daughter(father);

}
*/
/*
#include <iostream> 
using namespace std;

int main(){

int* a = new int (3);// 메모리 공간 할당

int* b = new int (5);
cout << "a의 주소(복사전) :" << a << endl;
cout << "b의 주소(복사전) : "<< b << endl;

a= b;
*b = 10;
cout << "a의 주소(복사후)"<<a<<endl;
cout << "b의 주소(복사후)"<<b<<endl;
*/

/* 0323-04
사진 참고해서 작성하기
#include <iostream>
using namespace std;

class Box {
    int width , height;
    char fill;
public:
Box(int x, int h);
void setFill(char f);
void setSize(int w, int h);
void draw();
};
Box::(int w, int h){
    setSize(w,h);
    fill = '*';
}
*/

/* 0322-03
비주얼 스튜디오 깔아서 해봐야함 
*/

/* 0322-02
(사진 참고해서 완성하기)
#include <iostream>
using namespace std;

class Oval { 
    int width , height;
    double getArea();
public :
Oval(){width= height =1; }

};
*/

/* 0322-01
#include <iostream>
using namespace std;

class Circle {
public:
    int radius ; 

    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout << "반지름 "<< radius << 
}
*/