#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std; // 선수를 추상화한 클래스 
class Player {
    string name; 
public:
    Player(string name="") {this->name = name;}
    void setName(string name) { this->name = name; } 
    string getName() {return name;}
    void getEnterKey() { // <Enter> 키가 입력되면 리턴
        char buf[100];
        cin.getline(buf, 99); // wait <Enter> key 
        }
};

class GamblingGame {// 갬블링 게임 전체를 다루는 클래스
    Player p[2]; // 2 명의 선수
    int num[3]; // 랜덤하게 생성된 3 개의 수를 저장하는 배열 
    bool matchAll(); // num[] 배열의 수가 모두 일치하면 true 리턴
public:
    GamblingGame(); // num[i] = 0 setting 및 랜덤 seed 값 생성
    void run();
};
GamblingGame::GamblingGame() {
    cout << "***** 갬블링 게임을 시작합니다. *****" <<endl ;
    string name1,name2;
    cout << "첫번째 선수 이름>>" <<endl ;
    cin >> name1;
    cout << "두번째 선수 이름>>" <<endl;
    cin >> name2;
    p[0].setName(name1);
    p[1].setName(name2);
}
bool GamblingGame::matchAll() {
    if (num[0]==num[1]&&num[1]==num[2]){
        return true;
    }
    else{
        return false;
    }
}
void GamblingGame::run() {
    int i = 0 ;
    while (true){
         std::srand(std::time(nullptr));
         for (int i = 0; i < 3; ++i){
            num[i] = 0;
            num[i] = std::rand() % 2;
        }
       if(matchAll){
        cout << p[i%2].getName << "<Enter>" <<endl;
        cout << num[0]<< '\t' << num[1]<< '\t' <<num[2]<< '\t'<< '아쉽군요!'<<endl;
        break;
       }
       else{
        cout << p[i%2].getName << "<Enter>" <<endl;
        cout << num[0] << '\t' << num[1]<< '\t' <<num[2]<< '\t'<< p[i%2].getName << "님의 승리!" <<endl;
       }
       i ++ ;
    }

}
int main() {
    GamblingGame game;
    game.run(); }