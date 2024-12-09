#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000000

typedef struct s_stack
{
	int arr[MAX_SIZE];
	int top;
}	Stack;

void init(Stack *s) {
	s->top = -1;
}

void push(Stack *s, int x) {
	s->arr[++(s->top)] = x;
}

int pop(Stack *s) {
	if (s->top == -1) return -1;
	return s->arr[(s->top)--];
}

int size(Stack *s) {
	return s->top + 1;
}

int is_empty(Stack *s) {
	return s->top == -1 ? 1 : 0;
}

int top(Stack *s) {
	if (s->top == -1) return -1;
	return s->arr[s->top];
}

int main() {
	Stack s;
	init(&s);
	int N;
	scanf("%d", &N);
	int cmd, res = 0;

	while (N--) {
		scanf("%d", &cmd);
		switch (cmd) {
			case 0:
				pop(&s);
				break;
			default:
				push(&s, cmd);
				break;
		}
	}
	while (s.top != -1) {
		res += s.arr[s.top--];
	}
	printf("%d\n", res);
	return 0;
}