#include <iostream> 
using namespace std;
class Oval{
    int width, height;
public:
    Oval(){width=1,height=1;}
    Oval(int a, int b){ width = a, height = b;}
    void set(int a, int b);
    void show();
    int getWidth(){return width;}
    int getHeight(){return height;}
    ~Oval(){cout<<"Oval 소멸 : width = "<<width<<','<<" height = "<<height<<endl;}
};
void Oval::set(int a, int b){
    width = a, height = b;
}
void Oval::show(){
    cout << "width = "<< width <<", "<<"height = "<< height<<endl;
}
int main(){
    Oval a,b(3,4);
    a.set(10,20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
}