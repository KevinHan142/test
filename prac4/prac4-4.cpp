#include <iostream> 
#include <string>
#include<cstdlib> 
#include<ctime> 
using namespace std;

int main(){
    srand((unsigned)time (0));
    int size ,n, m;
    string chat , sub;
    while(true){
        cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다.)"<<endl<<">>";
        getline(cin,chat,'\n');
        if(chat=="exit"){break;}
        size = chat.size();
        for(int i=0;i<size;i++){
            sub = sub + chat[size-1-i];
        }
        cout << sub << endl;
        sub ="";
    }
}