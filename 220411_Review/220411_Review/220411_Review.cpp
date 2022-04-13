// C++ 문법

// 주석 : 실행(컴파일) 되지 않고 설명만을 위해서 사용되는 문법
/*
    1
    2
    3
    4
*/

// 220411_Review.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/*
    C++ 문법을 사용할 때 주의해야 할 점
    1. 대/소문자를 구분해야 한다.

    main / Main / mAIN / maIN

    2. 띄어쓰기를 통해 요소를 구분한다.
    3. 실행문의 마무리는 세미콜론(;)로 한다.

    [변수] : 데이터를 저장할 메모리공간을 할당받는다.
    데이터타입 변수명;
    데이터타입 변수명 = 10;
    데이터타입 변수명 = 'a';
    데이터타입 변수명 = "Hello";

    데이터타입 크기? 표현할 수 있는 숫자의 범위?
    1. 정수형 ( 0, 1, 2, 3, ... , -1, -2, -3, ...)
     int
     short
     long
     long long
     __int8, __int16, __int32, __int64
    2. 실수형
     float
     double
     long double
    3. 문자형
     char
    4. 문자열
     string

    변수명 이름짓기 규칙 (표기법)
    1. 헝가리안 표기법
     - 데이터타입 약자를 접두어로 붙인다.
     int nMaxCount = 10;
    2. 카멜 표기법
     int maxCount = 10;
    3. 파스칼 표기법
     int TokenMaxCount = 10;

    int token_max_count = 10;

     int nn = 10;
     int cmprs = 20;

    1. 대소문자를 구분한다.
    2. 알파벳, 숫자, _(언더바)만 사용한다.
     2-1. 숫자는 가장 앞에 올 수 없다.

    4가지 속성
    1) 이름 : input_key   2) 크기 : 4byte   3) 값 : 10    4) 메모리주소 : ??

    연산자
    데이터를 가공(연산)하는 모든 명령에 필요한 것들
    1) 어떤 종류의 연산자인가
    2) 우선순위 : 어떤 순서로 연산이 되는가
    3) 결합순서 : 좌측부터 연산하는가, 우측부터 연산하는가

    1. 사칙연산 : 산술연산자 (좌측부터 연산된다)
    + : 더하기
    - : 빼기
    * : 곱하기
    / : 나누기     11 / 3 -> 3 (몫)
    % : 나머지     11 % 3 -> 2 (나머지)

    *, /, % > +, -
     
    2. 대입연산자 (우측부터 연산된다)
    = : 왼쪽 항에 오른쪽 항의 값을 대입(복사)한다.

    3. 복합대입연산자
    += : a += b;    -> a = a + b;
    -= : a -= b;    -> a = a - b;
    *= : a *= b;    -> a = a * b;
    /= : a /= b;    -> a = a / b; (b == 0, 런타임에러 발생)
    %= : a %= b;    -> a = a % b; (데이터타입이 정수형이 아닐 때)

    4. 증감연산자
    특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용하는 연산자.
    변수명 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.

    5. 관계연산자
    두 항의 값을 비교한 결과가 참(1, true) 또는, 거짓(0, false)으로 반환되는 연산자

    a < b 
    a > b
    a <= b
    a >= b
    a == b
    a != b

    6. 논리연산자
    왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서
    두 값을 비교해서 참과 거짓을 반환하는 연산자

    && : 논리곱(AND)
    a && b : a의 결과값이 참이고 b의 결과값이 참이면 1을 반환

    || : 논리합(OR)
    a || b : a의 결과값이 참이거나 b의 결과값이 참이면 1을 반환

    ! : 논리부정(NOT)
    !a : a의 결과값이 참이면 거짓을 반환, 거짓이면 참을 반환

    7. 삼항연산자
    a ? b : c;
    a의 결과값이 참이면 b실행문이 동작, 거짓이면 c실행문이 동작.

    난수 (랜덤값)
    rand(); // 0 ~ 32767 사이의 랜덤한 값이 반환된다. 4byte
    함수 내부에 seed값이 있어서 이 값에 의해서 리턴값이 정해진다.
    기본적으로 seed : 1로 세팅되어 있다.

    srand(time(NULL));
*/

/*
    실습1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자.
    (3, 7 포함)

    실습2. 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.

    실습3. 프로그램을 실행하면 내부적으로 1 ~ 9 사이의 숫자가 정답으로 정해진다. 유저가 1 ~ 9 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력한다.



    제어문     데이터(타입) / 연산자 / <제어구조>

    1. 조건문 : 특정 조건에 따라서 실행문을 실행할지 안할지 제어 : if / switch
    2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행 제어 : while / for

    조건문
    1_1. if 문

    if (조건식1)
    {
        실행문1;
    }
    else if (조건식2)
    {
        실행문3;
    }
    else
    {
        실행문2;
    }

    조건문 실습1. 
    정수를 하나 입력 받아서
    입력 받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다." 출력
    10 이하 9초과 이면 "9보다 큽니다." 출력
    9 이하 6초과 이면 "6보다 큽니다." 출력
    그 이외에는 "6보다 작거나 같습니다." 출력

    1_2. switch문

    switch (정수형 변수)
    {
        case 정수1:
            실행문1;
        break;
        case 정수2:
            실행문2;
        break;
        case -3:
            실행문3;
        break;
        default:    // 해당하는 정수값이 없을 때
            실행문4;
        break;
    }

    switch문 실습. 
    당신의 고향은 어디입니까?
    1. 서울   2. 양평   3. 광주   4. 대전   5. 제주도
    _1

    안녕하세요. 당신의 고향은 서울이군요.
    안녕하수꽝. 혼저옵서예.
    5개 중에 선택해 주세요.

    반복문
    2_1. while문

    // 초기식
    while (조건식)
    {
        실행문;
        조건식을 바꾸는 실행문;   // while문을 중단시키는 첫번째 방법
        증감식;
        if (조건식)
        {
            break;              // while문을 중단시키는 두번째 방법
        }
    }

    do-while문

    do
    {
        실행문;
    }
    while (조건식);

    2_2. for문

    for ( (1)초기식; (2)조건식; (3)증감식)
    {
        (4)실행문;
    }

    (1) -> (2) -> (4) -> (3) -> (2) -> (4) -> (3) -> ... 조건식의 결과값이 0 이 나올 때까지

    별찍기
    1) 
    *
    **
    ***
    ****
    *****
    
    2) 
        *
       **
      ***
     ****
    *****

    3) 
    *****
    ****
    ***
    **
    *
    
    4) 
    *****
     ****
      ***
       **
        *
    
    5)
            *
           ***
          *****
         *******
        *********
        
    6)
        *********
         *******
          *****
           ***
            *
          
    7)
            *
           ***
          *****
         *******
        *********
         *******
          *****
           ***
            *
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss;

    ss << "Hello";
    string str;
    ss >> str;
    cout << str << endl;

    for (int gugu_dan = 2; gugu_dan < 10; gugu_dan++)
    {
        for (int gugu_su = 1; gugu_su < 10; gugu_su++)
        {
            cout << gugu_dan << " * " << gugu_su << " = " << gugu_dan * gugu_su << endl;
        }
        cout << endl;
    }




    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }

    for (int i = 3; i < 100; i += 3)
    {
        cout << i << endl;
    }

    for (int i = 1; i < 1000; i *= 2)
    {
        cout << i << endl;
    }

    /*
        for문 실습1.
        10부터 1까지 차례대로 출력되는 코드를 작성해 보자.
        10
        9
        8
        7
        6
        ...
        2
        1

        실습2.
        100미만의 3의 배수를 차례대로 출력되는 코드를 작성해 보자.
        3
        6
        9
        12
        15
        ...
        96
        99

        실습3.
        1000미만의 2의 승수를 차례대로 출력되는 코드를 작성해 보자.
        1
        2
        4
        8
        16
        32
        64
        128
        256
        512

        실습4.
        구구단을 출력해보자.
        4_1. 구구단 2단을 차례대로 출력해보자.
        2 * 1 = 2
        2 * 2 = 4
        2 * 3 = 6
        2 * 4 = 8
        2 * 5 = 10
        2 * 6 = 12
        2 * 7 = 14
        2 * 8 = 16
        2 * 9 = 18

        3 * 1 = 2
        3 * 2 = 4
        3 * 3 = 6
        3 * 4 = 8
        3 * 5 = 10
        3 * 6 = 12
        3 * 7 = 14
        3 * 8 = 16
        3 * 9 = 18

        4_2. 구구단 2단 ~ 9단을 차례대로 출력해보자.
        2단

        3단

        4단

        ...

        8단

        9단

        4_3. 구구단 2단 ~ 9단을 다음과 같은 형태로 출력해 보자.
        2단 3단 4단

        5단 6단 7단

        8단 9단

        2 * 1 = 2   3 * 1 = 3   4 * 1 = 4
        2 * 2 = 2   3 * 2 = 3   4 * 2 = 4
        2 * 3 = 2   3 * 3 = 3   4 * 3 = 4
        2 * 4 = 2   3 * 4 = 3   4 * 4 = 4

        2 * 1 = 2   3 * 1 = 3   4 * 1 = 4
        2 * 2 = 2   3 * 2 = 3   4 * 2 = 4
        2 * 3 = 2   3 * 3 = 3   4 * 3 = 4
        2 * 4 = 2   3 * 4 = 3   4 * 4 = 4

        2 * 1 = 2   3 * 1 = 3  
        2 * 2 = 2   3 * 2 = 3  
        2 * 3 = 2   3 * 3 = 3  
        2 * 4 = 2   3 * 4 = 3  

    */


#pragma region 실습3
    // while문을 써서 정답을 맞출 때까지 반복되는 프로그램으로 수정해보자.

    // 처리
    int correct_number = rand() % 9 + 1;
    cout << "미리보는 정답 : " << correct_number << endl;

    int input_quiz_number = -1;     // 초기식
    while (input_quiz_number != correct_number)   // 조건식을 수정한다.
    {
        // 입력
        cout << "숫자를 맞춰 보세요 : ";
        cin >> input_quiz_number;

        // 출력 : true or false
        (input_quiz_number == correct_number) ? cout << "true" << endl :
            cout << "false" << endl;
    }

#pragma endregion



    // Hello World를 5번 출력하는 프로그램
    int repeat_count = 0;
    while (0)
    {
        cout << "1. Hello World" << endl;
        repeat_count++; // 증감식
    }

    do
    {
        cout << "2. Hello World" << endl;
        repeat_count++;
    } while (0);


    cout << "당신의 고향은 어디입니까 ?" << endl;
    cout << "1. 서울   2. 양평   3. 광주   4. 대전   5. 제주도" << endl;

    // 입력
    int hometown_num;
    cin >> hometown_num;

    // 처리
    // 출력
    switch (hometown_num)
    {
    case 1:
        cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
        break;
    case 2:
        cout << "안녕하세요. 당신의 고향은 양평이군요." << endl;
        break;
    case 3:
        cout << "아따 허벌라게 반갑구마잉. 광주 사람을 여기서 만나네" << endl;
        break;
    case 4:
        cout << "안녕하셔유~. 대전 좋지유." << endl;
        break;
    case 5:
        cout << "안녕하수꽝. 제주에서 왔맨" << endl;
        break;
    default:
        cout << "5개 중에 선택해 주세요." << endl;
        break;
    }


    // 입력
    int input_num;
    cin >> input_num;

    // 처리
    // 출력
    if (input_num > 10)
    { 
        cout << "입력된 숫자가 10보다 큽니다." << endl;
        cout << "입력된 숫자가 10보다 큽니다." << endl;
    }
    else if (input_num > 9)
    {
        cout << "9보다 큽니다." << endl;
    }
    else if (input_num > 6)
    {
        cout << "6보다 큽니다." << endl;
    }
    else
    {
        cout << "6보다 작거나 같습니다." << endl;
    }


#pragma region 실습1
    int rand_num;
    // 입력

    // 처리
    srand(time(NULL));
    //rand(); // 0 ~ 32767 % 5

    rand_num = 3 + rand() % 5;
    //3 + 0, 3 + 1, 3 + 2, 3 + 3, 3 + 4;

    // 출력 - 숫자 하나 출력
    cout << "실습 1 : " << rand_num << endl;
#pragma endregion

#pragma region 실습2
    // 입력
    int input_min_number;
    int input_max_number;
    cin >> input_min_number;
    cin >> input_max_number;

    // 처리
    rand_num = input_min_number + rand() % (input_max_number - input_min_number + 1);

    // 출력
    cout << "실습 2 : " << rand_num << endl;
#pragma endregion




    //srand(time(NULL));
    //cout << rand() << endl;

    //(10 < 5) ? std::cout << "10이 5보다 크다." : std::cout << "10이 5보다 작다";
    //std::cout << std::endl;

    //std::cout << !-300 << std::endl;   // 0


    //std::cout << ((10 < 5) == 0) << std::endl; // 0

    //int input_key = 10;
    //std::cout << input_key++ << std::endl;  // 10
    //std::cout << ++input_key << std::endl;  // 12
    //std::cout << input_key-- << std::endl;  // 12
    //std::cout << --input_key << std::endl;  // 10

    //float testFloat = 5.3f;
    //float testFloat2 = 5.3;
    //char testCharacter = 'a';
    //std::string testString = "Hello";


    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    //std::cin >> input_key;
}