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
            printf("0���� ���� �� �����ϴ�.\n");
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
        printf("�� ������ �����ڸ� �Է��ϼ���>> ");
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
            printf("�߸��� �������Դϴ�.\n");
        }
    }

    return 0;
}
