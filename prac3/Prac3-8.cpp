#include <iostream> 
using namespace std;

class Add{
    int a, b;
public:
    Add(){}
    Add(int x, int y){a=x,b=y;}
    void setValue(int x, int y);
    int calculate(){return a+b;}
};
class Sub{
    int a, b;
public:
    Sub(){}
    Sub(int x, int y){a=x,b=y;}
    void setValue(int x, int y);
    int calculate(){return a-b;}
};
class Mul{
    int a, b;
public:
    Mul(){}
    Mul(int x, int y){a=x,b=y;}
    void setValue(int x, int y);
    int calculate(){return a*b;}
};
class Div{
    int a, b;
public:
    Div(){}
    Div(int x, int y){a=x,b=y;}
    void setValue(int x, int y);
    int calculate(){return a/b;}
};
void Sub::setValue(int x, int y){
    a = x, b = y;
}
void Add::setValue(int x, int y){
    a = x, b = y;
}
void Mul::setValue(int x, int y){
    a = x, b = y;
}
void Div::setValue(int x, int y){
    a = x, b = y;
}

int main(){
    Add a;
    Sub s;
    Mul m;
    Div d;
    int o,p;
    char n;
    char l[4] = {'+','-','*','/'};
    while (true){
        cout << "두 정수와 연산자를 입력하세요>>";
        cin >> o;
        cin >> p;
        cin >> n;
        if(n==l[0]){
            a.setValue(o,p);
            cout << a.calculate() <<endl;
        }
        if(n==l[1]){
            s.setValue(o,p);
            cout << s.calculate() <<endl;
        }
        if(n==l[2]){
            m.setValue(o,p);
            cout << m.calculate() <<endl;
        }
        if(n==l[3]){
            d.setValue(o,p);
            cout << d.calculate() <<endl;
        }
    }
   
    
}