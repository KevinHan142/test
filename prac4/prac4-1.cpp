#include <iostream> 
using namespace std;
class Color { 
    int red, green, blue;
public:
    Color() {red =green =blue =0; }
    Color(int r, int g, int b) {red =r; green =g; blue =b; } 
    void setcolor (int r, int g, int b) { red =r; green =g; blue =b; }
    void show() {cout << red <<' '<< green <<' '<<blue<< endl;}
};
int main() {
    Color screencolor( 255 , 0 , 0 ) ; // 빨 간 색 의 s c r e e n c o l o r 객 체 생 성 
    Color *p ; 
    p = &screencolor;
    p -> show();
    Color colors[3];
    p = colors;
    p[0].setcolor(255,0,0);
    p[1].setcolor(0,255,0);
    p[2].setcolor(0,0,255);
    for(int i;i<3;i++){
        p[i].show();
    }
}