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
	int cmd, x;

	while (N--) {
		scanf("%d", &cmd);
		switch (cmd) {
			case 1:
				scanf("%d", &x);
				push(&s, x);
				break;
			case 2:
				printf("%d\n", pop(&s));
				break;
			case 3:
				printf("%d\n", size(&s));
				break;
			case 4:
				printf("%d\n", is_empty(&s));
				break;
			case 5:
				printf("%d\n", top(&s));
				break;
		}
	}
	return 0;
}