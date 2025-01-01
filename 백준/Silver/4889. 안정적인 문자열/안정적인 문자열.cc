#include <iostream>
#include <string>

#define MAX 100001
using namespace std;

class Stack {
private:
    char stack[MAX];
    int top;
public:
    Stack() : top(-1) {}
    void push(char value) {
        stack[++top] = value;
    }

    char peek() {
        if (top >= 0) {
            return stack[top];
        }
        return '\0';
    }

    void pop() {
        if (top >= 0) top--;
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    int num = 1;

    while (true) {
        string input;
        getline(cin, input);

        if (input[0] == '-') break;
        Stack stack;
        int chng = 0;
        for (char c : input) {
            if (c == '{')
                stack.push(c);
            else {
                if (!stack.isEmpty() && stack.peek() == '{')
                    stack.pop();
                else stack.push(c);
            }
        }
        while (!stack.isEmpty()) {
            char top1 = stack.peek();
            stack.pop();
            char top2 = stack.peek();
            stack.pop();
            if (top1 == top2) chng++;
            else chng += 2;
        }
        cout << num++ << ". " << chng << endl;
    }
    return 0;
}
