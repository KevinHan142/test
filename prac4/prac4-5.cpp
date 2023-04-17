#include <iostream> 
using namespace std;

class Circle {
    int radius; // 원의반지름값    
public:
    void setRadius(int radius); //반지름을설정한다. 
    double getArea(); // 면적을리턴한다.
};
double Circle::getArea(){
    return 3.14*radius*radius;
}
void Circle::setRadius(int radius){
    this->radius = radius;
}
int main(){
    Circle a[3];
    int num = 0;
    double m;
    for(int i = 0 ; i <3; i++){
        a[i].setRadius(5+i);
        cout << "원 " << (i+1) << "의 반지름 >>"<< (5+i) <<endl; 
        m = a[i].getArea();
        if(m>100){num += 1;}
    }
    cout << "면적이 100보다 큰 원은 "<<num<<"개입니다."<<endl;
}