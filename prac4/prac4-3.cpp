#include <iostream> 
#include <string>
#include<cstdlib> 
#include<ctime> 

using namespace std;

int main(){
    srand((unsigned)time (0));
    int size ,n, m;
    string chat;
    while(true){
        cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다.)"<<endl<<">>";
        getline(cin,chat,'\n');
        if(chat=="exit"){break;}
        size = chat.size();
        while(true){
            n = rand()%size;
            if(chat[n]==' '){continue;}
            else{break;}
        }
        m = rand()%26;
        chat[n] ='a'+m ;
        cout << chat << endl;
    }
}