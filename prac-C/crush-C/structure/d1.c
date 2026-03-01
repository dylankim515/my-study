#include <stdio.h>

struct Test {
    int c;
    int *pointer;
};
int main() {
    struct Test t;
    struct Test *pt = &t;
    int i=0;

    t.pointer = &i; //t의 멤버 pointer는 i를 가리키게 된다.
    *t.pointer = 3; // t의 멤버 pointer가 가리키는 변수(i)의 값을 3으로 만든다. 사실상 *(t.pointer)
    // . 이 *보다 우선순위 높음
    
    printf("i : %d\n",i);

    // -> 가 *보다 우선순위 높음
    *pt->pointer = 4; //(pt가 가리키는 구조체 변수의 pointer멤버) 가 가리키는 변수(i)의 값을 4로 세팅. 사실상 *(pt->pointer)

    printf("i : %d\n",i);
    return 0;
}

