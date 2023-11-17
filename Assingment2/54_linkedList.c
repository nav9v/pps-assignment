#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node node1, node2, node3;

    node1.data = 1;
    node2.data = 2;
    node3.data = 3;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    struct Node* curr = &node1;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    return 0;
}
