#include <iostream>
#include <string>
using namespace std;


class Person {
    string name; string tel;
public: 
    Person (){};
    string getName() { return name; }  
    string getTel() { return tel; } 
    void set(string name, string tel);
};
void Person::set(string name , string tel){
    this->name = name;
    this->tel=tel;
}

int main (){
    Person a[3];
    string c,b,d,f;
    cout << "이름과 전화 번호를 입력해 주세요."<<endl;
    for(int i = 0;i<3;i++){
        cout<<"사람 "<<(i+1)<<">>";
        cin >> c >> b;  
        a[i].set(c,b);
    }
    cout << "모든 사람의 이름은 "<< ' ';
    for (int i =0; i<3;i++){
        cout << a[i].getName() << ' ';
    }
    cout << endl;
    cout << "전화 번호를 검색합니다. 이름을 입력하세요>>";
    cin>>d;
    for (int i =0; i<3;i++){
        if(a[i].getName()==d){f=a[i].getTel();}
    }
    cout << "전화 번호는 " << f << endl;
}
