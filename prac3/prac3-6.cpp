#include <iostream> 
#include <string> 
using namespace std;
class Integer {
    int a;
public:
    Integer(int r){a=r;}
    Integer(string r){a = stoi(r);}
    int get(){return a;}
    bool isEven(){ 
        if(a%2==0){return true;}
        }
    void set(int r){ a = r;}
};
int main() {
    Integer n(30);
    cout <<n.get() <<' '; // 30 출력
    n.set (50);
    cout << n.get() <<' '; // 50 출력
    Integer m("300");
    cout <<m.get() << ' '; // 300 출력 
    cout <<m.isEven(); // true(정수로 1) 출력
}