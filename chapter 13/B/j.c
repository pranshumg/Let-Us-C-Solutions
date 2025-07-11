#include <stdio.h>
#include <string.h>

#define SIZE 10

char deque[SIZE];
int left = -1, right = -1;

void insert_left(char c) {
    if ((left == 0 && right == SIZE-1) || (left == right+1)) {
        printf("Deque is full\n");
        return;
    }
    if (left == -1) {
        left = right = 0;
    } else if (left == 0) {
        left = SIZE - 1;
    } else {
        left--;
    }
    deque[left] = c;
}

void insert_right(char c) {
    if ((left == 0 && right == SIZE-1) || (left == right+1)) {
        printf("Deque is full\n");
        return;
    }
    if (left == -1) {
        left = right = 0;
    } else if (right == SIZE - 1) {
        right = 0;
    } else {
        right++;
    }
    deque[right] = c;
}

void delete_left() {
    if (left == -1) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deleted from left: %c\n", deque[left]);
    if (left == right) {
        left = right = -1;
    } else if (left == SIZE-1) {
        left = 0;
    } else {
        left++;
    }
}

void delete_right() {
    if (left == -1) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deleted from right: %c\n", deque[right]);
    if (left == right) {
        left = right = -1;
    } else if (right == 0) {
        right = SIZE - 1;
    } else {
        right--;
    }
}

void display() {
    if (left == -1) {
        printf("Deque is empty\n");
        return;
    }
    int i = left;
    printf("Deque: ");
    while (1) {
        printf("%c ", deque[i]);
        if(i == right) {
            break;
        }
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    insertRight('A');
    insertRight('B');
    insertLeft('C');
    insertLeft('D');
    display();
    deleteLeft();
    deleteRight();
    display();
    return 0;
}
