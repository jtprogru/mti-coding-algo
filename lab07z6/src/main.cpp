/*
 * PROGRAMM: lab07z6
 * Создать очередь вещественных значений, для реализации
 * используя односвязные списки. Реализовать операции
 * добавления (enqueue) и удаления (dequeue) элемента
 * из очереди. Добавьте в очередь числа 2.1, 2.1, 5.3
 * и распечатайте содержимое очереди. Удалите 1 элемент
 * из очереди, затем добавьте в очередь число 4.9 и
 * распечатайте очередь еще раз.
 * Найдите сумму элементов очереди.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/XXXXXXXXXXXX
 * Copyright [2023] Michael Savin
 */

#include <iostream>

struct Node {
    double value;
    Node* next;
};

class Queue {
public:
    Queue() : head(nullptr), tail(nullptr) {}

    ~Queue() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void enqueue(double value) {
        Node* newNode = new Node{value, nullptr};
        if (tail) {
            tail->next = newNode;
        } else {
            head = newNode;
        }
        tail = newNode;
    }

    void dequeue() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        if (!head) tail = nullptr;
        delete temp;
    }

    void print() const {
        Node* currentNode = head;
        while (currentNode) {
            std::cout << currentNode->value << " ";
            currentNode = currentNode->next;
        }
        std::cout << std::endl;
    }

    double sum() const {
        double total = 0;
        Node* currentNode = head;
        while (currentNode) {
            total += currentNode->value;
            currentNode = currentNode->next;
        }
        return total;
    }

private:
    Node* head;
    Node* tail;
};

int main() {
    Queue queue;

    queue.enqueue(2.1);
    queue.enqueue(2.1);
    queue.enqueue(5.3);

    std::cout << "Queue contents: ";
    queue.print();

    queue.dequeue();

    queue.enqueue(4.9);

    std::cout << "Queue contents after dequeue and enqueue: ";
    queue.print();

    double sum = queue.sum();
    std::cout << "Sum of elements in the queue: " << sum << std::endl;

    return 0;
}
