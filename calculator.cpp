#include <stdio.h>

#pragma warning(disable: 4996)

class Add {
public:
    int a, b;
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        return a + b;
    }
};

class Sub {
    int a, b;
public:
    void setValue(int x, int y) {
        a = x; b = y;
    }
    int calculate() {
        return a - b;
    }
};

class Mul {
    int a, b;
public:
    void setValue(int x, int y) {
        a = x; b = y;
    }
    int calculate() {
        return a * b;
    }
};

class Div {
    int a, b;
public:
    void setValue(int x, int y) {
        a = x; b = y;
    }
    int calculate() {
        if (b == 0) {
            printf("0으로 나눌 수 없습니다.\n");
            return 0;
        }
        return a / b;
    }
};

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;

    while (true) {
        char op;
        int x, y;
        printf("두 정수와 연산자를 입력하세요>> ");
        scanf("%d %d %c", &x, &y, &op);

        if (op == '+') {
            a.setValue(x, y);
            printf("%d\n", a.calculate());
        }
        else if (op == '-') {
            s.setValue(x, y);
            printf("%d\n", s.calculate());
        }
        else if (op == '*') {
            m.setValue(x, y);
            printf("%d\n", m.calculate());
        }
        else if (op == '/') {
            d.setValue(x, y);
            printf("%d\n", d.calculate());
        }
        else {
            printf("잘못된 연산자입니다.\n");
        }
    }

    return 0;
}
