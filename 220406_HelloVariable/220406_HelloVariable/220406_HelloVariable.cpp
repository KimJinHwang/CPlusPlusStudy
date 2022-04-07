#include <iostream>

using namespace std;

int main()
{
    // 변수
    /*
        1) 이름 : testNum   2) 크기 : 4byte   3) 값 : 2.8    4) 메모리주소 : 0000009AE12FFA54
    */
    //float testNum = 2.8f;
    //double testNum1 = 2.8;

    //cout << sizeof(testNum) << endl;
    //cout << &testNum << endl;
    //cout << testNum1 << endl;

    // 실습 1. 상대방 이름과 내 이름, 상대방 나이를 입력 받는다 /  
    // 변수가 필요함
    // 데이터타입 변수명;

    /*
        변수명 이름 규칙
        1. C++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
        int float = 3; (X)

        2. 알파벳, 숫자, _ 로만 구성할 수 있다.
        int num = 3;
            1) 숫자로 변수명을 시작할 수는 없다.

        3. 대/소문자 구분을 한다.
        4. 변수명 사이에 띄어쓰기를 넣을 수 없다.
        5. 전부 소문자로 작성한다.
        6. 축약어를 쓰지 않는다.

        헝가리안 표기법
        카멜 표기법
        파스칼 표기법

        오늘의 과제
        1. 자기 자신을 분석해서
        2. 여러가지 타입의 변수로 정의한다.
        총 20개
        예) 이름 : ...
        나이 : ...
        키 : ...
        혈액형 : ...
        MBTI : ...

    */
    int num = 3;
    int customer_count = 100;
    int customer_count1 = 200;
    //int 2customer_count = 300;
    int _num = 5;
    int my_age = 10;
    int my_agE = 10;
    //int my age = 10;

    string your_name;
    cout << "상대방 이름을 입력하세요." << endl;
    cin >> your_name;

    //cout << your_name << endl;

    string my_name;
    cout << "본인의 이름을 입력하세요." << endl;
    cin >> my_name;

    //cout << my_name << endl;

    int your_age;
    cout << "상대방 나이를 입력하세요." << endl;
    cin >> your_age;

    cout << my_name << " : " << your_name << "님 " << your_age << "살 생일을 축하합니다.";

        
    // 생일 축하메시지를 출력한다 
    
    // 프로그램을 만들어보자.

    /*
        예시)
            상대방 이름을 입력하세요.
            _이재혁

            본인의 이름을 입력하세요.
            _김진황

            상대방 나이를 입력하세요.
            _24

            김진황 : 이재혁님 24살 생일을 축하합니다.
    */
}