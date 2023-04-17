#include <iostream> 
using namespace std;

class Sample {
    int *p;
    int size;
public:
    Sample(int n) { // 생성자
        size = n; p =new int [n]; // n개정수배열의동적생성     

    }
    void read(); // 동적할당받은정수배열p에사용자로부터정수를입력받음
    void write(); // 정수배열을화면에출력
    int big(); // 정수배열에서가장큰수리턴
    ~Sample(){delete[]p;}; // 소멸자
};
void Sample::read(){
    // getchar();
    for(int i=0;i<size;i++){
        cin>>p[i];
    }
}
void Sample::write(){
    for(int i=0;i<size;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
int Sample::big(){
    int large;
    large = p[0];
    for(int i=1;i<size;i++){
        if (p[i]>large){large = p[i];}
    }
    return large;
}
int main() {
    Sample s(10); // 10개정수배열을가진Sample객체생성 s.read(); // 키보드에서정수배열읽기
    s.read();
    s.write(); // 정수배열출력
    cout <<"가장큰수는"<<s.big()<<endl;//가장큰수출력
}