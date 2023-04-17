#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius; // 원의반지름값 
    string name; // 원의이름 
public:
    Circle(){}
    void setcircle(string name, int radius); //이름과반지름설정 
    double getArea();
    string getName(){return name;}
};
class CircleManager {
    Circle *p; // Circle배열에대한포인터    
    int size; // 배열의크기
public:
    CircleManager(int size); // size크기의배열을동적생성. 사용자로부터입력완료
    ~CircleManager( ){} ;
    void searchByName(); // 사용자로부터원의이름을입력받아면적출력
    void searchByArea(); // 사용자로부터면적을입력받아면적보다큰원의이름출력
};
void Circle::setcircle(string name, int radius){
    this->name = name;
    this->radius = radius;
}
double Circle::getArea(){
    return 3.14*radius*radius;
}
CircleManager::CircleManager(int size){
    string name;
    int radius;
    Circle *s= new Circle[size];
    p =s;
    this->size = size;
     for (int i = 0 ; i< size;i++){
        cout << "원"<<(i+1)<<"의 이름과 반지름 >> ";
        cin >> name >> radius;
        p[i].setcircle(name,radius);
     }
    
}
void CircleManager::searchByName(){
    string u;
    cout << "검색하고자 하는 원의 이름 >> " ;
    cin >> u;
    for (int i = 0 ; i< size;i++){
        if(p[i].getName()==u){cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<endl;}
    }
}
void CircleManager::searchByArea(){
    int u;
    cout << "최소 면적을 정수로 입력하세요 >> " ;
    cin >> u;
    cout<<u<<"보다 큰 원을 검색합니다.\n"<<endl;
    for (int i = 0 ; i< size;i++){
        if(p[i].getArea()>u){cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<"\t";}
    }
}
int main(){
    int a;
    cout << "원의 개수 >> ";
    cin >> a;
    CircleManager sir(a);
    sir.searchByName();
    sir.searchByArea();
}

