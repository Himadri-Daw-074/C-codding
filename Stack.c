#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct Stack {
    int arr[MAX];
    int top;
};

void init(struct Stack *s) {
    s->top = -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void push(struct Stack *s, int val) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", val);
    } else {
        s->arr[++(s->top)] = val;
        printf("Pushed %d onto the stack.\n", val);
    }
}

void pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Nothing to pop.\n");
    } else {
        printf("Popped element: %d\n", s->arr[(s->top)--]);
    }
}

void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = s->top; i >= 0; i--) {
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack s;
    init(&s);
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&s, value);
                break;
            case 2:
                pop(&s);
                break;
            case 3:
                display(&s);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}