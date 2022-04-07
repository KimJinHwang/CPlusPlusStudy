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
    //int num = 3;
    //int customer_count = 100;
    //int customer_count1 = 200;
    ////int 2customer_count = 300;
    //int _num = 5;
    //int my_age = 10;
    //int my_agE = 10;
    ////int my age = 10;

    //string your_name;
    //cout << "상대방 이름을 입력하세요." << endl;
    //cin >> your_name;

    ////cout << your_name << endl;

    //string my_name;
    //cout << "본인의 이름을 입력하세요." << endl;
    //cin >> my_name;

    ////cout << my_name << endl;

    //int your_age;
    //cout << "상대방 나이를 입력하세요." << endl;
    //cin >> your_age;

    //cout << my_name << " : " << your_name << "님 " << your_age << "살 생일을 축하합니다.";

        
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

    /*
        연산자
        데이터를 가공(연산)하는 모든 명령에 필요한 것들
        1) 어떤 종류의 연산자들이 있는지?
        2) 우선 순위 : 어떤 순서로 연산이 진행되는지?
        3) 결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

        1. 사칙연산 : 산술연산자 (좌측부터 연산)
        + : 더하기
        - : 빼기
        * : 곱하기
        / : 나누기     11 / 3 => 3
        % : 나머지     11 % 3 => 2

        *, /, % > +, -

        2. 대입연산자 (우측부터 연산)
        = : 왼쪽 항에 오른쪽 항의 값을 대입한다.(복사한다)

        3. 복합대입연산자
        += : a += b;    => a = a + b;
        -= : a -= b;    => a = a - b;
        *= : a *= b;    => a = a * b;
        /= : a /= b;    => a = a / b;
        %= : a %= b;    => a = a % b; (a와 b는 정수형타입이어야 한다)

        4. 증감연산자
        특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
        변수의 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.

        5. 관계연산자
        두 값을 비교한 결과가 참(1, true)인지 거짓(0, false)인지 반환하는 연산자

        < : a < b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
        > : a > b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
        <= : 
        >= :
        == : 왼쪽 항의 값과 오른쪽 항의 값이 같을 때, 참을 반환한다.
        != : 왼쪽 항의 값과 오른쪽 항의 값이 다를 때, 참을 반환한다.

        */

    /*
        실습.
        고객의 나이를 입력받아서 미성년자(19세 이하)이면 true를 출력
        성인이면 false를 출력.

        아까 입력 받은 나이를 기준으로, 주민등록증 발급대상(20살만)이면 true를 아니면 false를 출력.

        + 아홉수(1의 자리가 9인수)인지 확인해서 true, false를 출력.
    */

    int customer_age;

    cout << "고객의 나이를 입력하세요 : ";
    cin >> customer_age;

    cout << boolalpha;
    cout << "고갱님은 미성년자가 " << (customer_age <= 19) << "입니다." << endl;
    cout << "고갱님은 주민등록발급대상 " << (customer_age == 20) << "입니다." << endl;
    cout << "고갱님은 아홉수 " << ((customer_age % 10) == 9) << "입니다." << endl;

    //int left_value = 14;
    //int right_value = 3;

    ////left_value++;   // 15
    //cout << left_value++ << endl;   // 출력 : 14, 메모리 : 15
    ////++left_value;   // 16
    //cout << ++left_value << endl;   // 메모리 : 16, 출력 16

    //cout << "+ : " << left_value + right_value << endl; // 17
    //cout << "- : " << left_value - right_value << endl; // 11
    //cout << "* : " << left_value * right_value << endl; // 42
    //cout << "/ : " << left_value / right_value << endl; // 4
    //cout << "% : " << left_value % right_value << endl; // 2

    //left_value += right_value;  //left_value = left_value + right_value;
    //cout << "+= : " << left_value << endl;  // 17

    //left_value -= right_value;
    //cout << "-= : " << left_value << endl;  // 14

    //left_value *= right_value;
    //cout << "*= : " << left_value << endl;  // 42

    //left_value /= right_value;
    //cout << "/= : " << left_value << endl;  // 14

    //cout << "%= : " << (left_value %= right_value) << endl; // 2
}