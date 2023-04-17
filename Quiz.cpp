#include <iostream>
using namespace std;

void fillLine(int n=25, char c='*') { // n개의 c 문자를 한 라인에 출력
	for(int i=0; i<n; i++) cout << c;
	cout << endl;
}

int main() {
	fillLine(); // 25개의 '*'를 한 라인에 출력
	fillLine(10, '%'); // 10개의 '%'를 한 라인에 출력
}
/*#include<iostream>
using namespace std;
int big(int x, int y){
    int bigNum;
    bigNum = x;
    if (bigNum< y) {
        bigNum = y;
    }
    if (bigNum>100){
        bigNum=100;
    }
    return bigNum;
}
int big(int x, int y,int z){
    int bigNum;
    bigNum = x;
    if (bigNum< y) {
        bigNum = y;
    }
    if (bigNum< z) {
        bigNum = z;
    }
    if (bigNum>100){
        bigNum=100;
    }
    return bigNum;
}
int main(){
    int x = big(3,5);
    int y = big(300,600);
    int z = big(30,50,60);
    cout<<"x="<<x<< ' '<<"y="<<y<<"z="<<z<<endl;
}*/
/*#include <iostream>
#include <cstring>
using namespace std;
class Mystring {
private:
    char* pBuf; //동적으로 할당된 메모리의 주소값 저장
public:
    Mystring (const char* s = NULL );
    Mystring (Mystring& s);
    ~Mystring();
    void print ();//문자열을 화면에 출력
    size_t getsize();//문자열의 길이 반한
};
Mystring::Mystring(const char* s) {
    if (s == NULL) {
        pBuf = new char [1]; pBuf[0] = NULL;
    }
    else {
        pBuf = new char [strlen (s) + 1];
        strcpy(pBuf,s);
    }
}
void Mystring::print(){
    cout<<pBuf<<endl;
}
size_t Mystring::getsize(){
    return strlen(pBuf);
}
Mystring::Mystring(const char* s = NULL){

}

int main() {
    Mystring str1;
    Mystring str2("Hello");
    Mystring str3 = "world!";
    Mystring str4(str3);
//Mystring str4 = str3; 같음
    str1.print();
    str2.print();
    str3.print();
    str4.print();
    return 0;
}
*/