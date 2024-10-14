#include <iostream>

using namespace std;

//dinh nghia 1 node cua ngan xep
struct Node
{
    int data;
    Node * next;
};

//lop ngan xep
class Stack 
{
    private: 
        Node* top;      //con tro tro toi dinh ngan xep
    
    public: 
        Stack()
        {
            top = nullptr;      //khoi tao ngan xep rong
        }

        //ham kiem tra ngan xep co rong khong
        bool isEmpty()
        {
            return top == nullptr;
        }

        //ham them phan tu vao ngan xep
        void push(int value)
        {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = top;
            top = newNode;
        }

        //ham xoa phan tu khoi ngan xep
        void pop()
        {
            if (isEmpty())
            {
                cout << "Ngan xep da rong!";
                return;
            }

            Node* temp = top;
            top = top ->next;
            delete temp;
        }

        //ham la phan tu dinh ma khong can xoa
        int peak()
        {
            if(isEmpty())
            {
                cout << "Ngan xep da rong!";
                return -1;
            }

            return top->data;
        }

        //in ra cac phan tu cua ngan xep
        void printStack()
        {
            Node* temp = top;
            while(temp != nullptr)
            {
                cout <<  temp->data << " -> ";
                temp = temp -> next ;
            }

            cout << "null";
        }
};

int main()
{
    Stack s;

    //them phan tu vao ngan xep
    s.push(10);
    s.push(20);
    s.push(30);

    //in ra cac phan tu trong ngan xep
    cout << "Ngan xep co du lieu nhu sau: \n";
    s.printStack();

    //lay phan tu dinh
    cout << "\nPhan tu dinh: " << s.peak();

    //xoa phan tu dinh
    s.pop();
    cout << "\nXoa phan tu dinh: \n";
    s.printStack();

    return 0;
}