#include<iostream> 
#include<cstdlib> 
#include<ctime> 
using namespace std;
class Random{
    int n;
public:
    Random(){ n = 0 ;};
    int next();
    int nextInRange(int a, int b);
};
int Random::next(){
    n = rand();
    return n;
}
int Random::nextInRange(int a, int b){
    n = rand()%(b-a+1) + 2 ;
    return n;
}
int main() {
    Random r;
    int a = 0 , b = 0;
    srand((unsigned)time (0));
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    while(true) {
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        if (n%2==1){continue;}
        a ++;
        cout << n << ' ';
        if (a==10){break;}
    }
    cout << endl << endl <<"-- 2에서 " << "10까지의 랜덤 정수 10 개 --"<< endl;
    while(true) {
        int n = r.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 정수
        if (n%2==1){continue;}
        b ++;
        cout << n << ' ';
        if (b==10){break;}
    }
}