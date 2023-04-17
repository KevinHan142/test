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
    srand((unsigned)time (0));
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for (int i=0; i<10; i++) {
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl <<"-- 2에서 " << "4 까지의 랜덤 정수 10 개 --"<< endl;
    for (int i=0; i<10; i++) {
        int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
        cout << n <<' ';
    }
}