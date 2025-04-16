#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 定义链表节点结构
struct Link
{
    int i;
    struct Link* next;
};
//创建链表并初始化节点
struct Link* creat(struct Link* head, int n) {
    struct Link* new_node = (struct Link*)malloc(sizeof(struct Link));
    if (!new_node) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->i = n;
    new_node->next = head;
    return new_node;
}
// 在链表末尾插入新节点
struct Link* insert(struct Link* head, int n) {
    struct Link* new_node = (struct Link*)malloc(sizeof(struct Link));
    if (!new_node) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->i = n;
    new_node->next = NULL;
    if (!head) {
        return new_node;
    }
    struct Link* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}
// 根据值删除节点
struct Link* delete_(struct Link* head, int n) {
    if (!head) return head;
    if (head->i == n) {
        struct Link* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Link* temp = head;
    struct Link* prev = NULL;
    while (temp && temp->i != n) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return head;
    prev->next = temp->next;
    free(temp);
    return head;
}

// 根据位置修改节点值
void modify(struct Link* head, int pos, int n) {
    if (!head) return;
    struct Link* temp = head;
    for (int i = 0; temp && i < pos; i++) {
        temp = temp->next;
    }
    if (temp) {
        temp->i = n;
    }
    else {
        printf("Position out of bounds\n");
    }
}

// 根据值查找节点
struct Link* find(struct Link* head, int n) {
    struct Link* temp = head;
    while (temp) {
        if (temp->i == n) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

// 打印链表
void printList(struct Link* head) {
    struct Link* temp = head;
    while (temp) {
        printf("%d -> ", temp->i);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Link* head = NULL;
    // 创建并插入节点
    head = creat(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    // 打印链表
    printf("Initial list: ");
    printList(head);
    // 删除节点
    head = delete_(head, 2);
    printf("After deleting 2: ");
    printList(head);
    // 修改节点值
    modify(head, 1, 4);
    printf("After modifying first node to 4: ");
    printList(head);
    // 查找节点
    struct Link* found = find(head, 4);
    if (found) {
        printf("Found node with value: %d\n", found->i);
    }
    else {
        printf("Node not found\n");
    }
    // 释放链表内存
    struct Link* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}