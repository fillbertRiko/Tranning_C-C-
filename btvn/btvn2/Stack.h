#pragma once
#include <iostream>

using namespace std;

const int max = 100;

template <class Entry>
class Stack {
public:
    Stack();
    bool empty() const;
    void pop();
    void top(Entry& item) const;
    void push(const Entry& item);

private:
    int count;
    Entry entry[max];
};

template <class Entry>
Stack<Entry>::Stack() {
    count = 0;
}

template <class Entry>
bool Stack<Entry>::empty() const {
    return count == 0;
}

template <class Entry>
void Stack<Entry>::push(const Entry& item) {
    if (count < max) {
        entry[count++] = item;
    }
    else {
        cerr << "Stack overflow" << endl;
    }
}

template <class Entry>
void Stack<Entry>::pop() {
    if (!empty()) {
        count--;
    }
    else {
        cerr << "Stack underflow" << endl;
    }
}

template <class Entry>
void Stack<Entry>::top(Entry& item) const {
    if (!empty()) {
        item = entry[count - 1];
    }
    else {
        cerr << "Stack underflow" << endl;
    }
}