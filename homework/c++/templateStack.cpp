#include <iostream>
#include <vector> //thu vien vecto de luu tru cac phan tu cua ngan xep

using namespace std;

template <class Entry>
class Stack
{
    private:
        vector<Entry> stack;    //vecto luu tru cac phan tu cua ngan xep
        int maxSize;            //kich thuoc toi da cua ngan xep
    
    public: 
    //constructor mac dinh 
        Stack() : maxSize(100)  //khoi tao ngan xep voi kich thuoc toi da la 100
        {
            cout << "Stack made with max size is 100.\n";
        }
    //constructor co tham so
        Stack(int size) : maxSize(size)
        {
            cout << "Stack create with max size of" << maxSize << ".\n";
        }
    //[huong thuc kiem tra ngan xep co rong hay khong]
        bool empty() const 
        {
            return.stack.empty();
        }
    //phuong thuc kiem tra ngan xep co day khong
        bool full() const
        {
            return.stack.size()  == maxSize;
        }


        //phuong thuc them phan tu vao ngan xep
        void push(const Entry &item)
        {
            if(full())
            {
                throw runtime_error("Stack overflow: cannot push, stack is full.");
            }else{
                stack.push_back(item);
            }
        }

        //phuong thuc lay phan tu ra khoi ngan xep
        void pop()
        {
            if(empty())
            {
                throw runtime_error("Stack underflow: cannot pop, stack is empty.");
            }else {
                stack.pop_back();
            }
        }

        //phuong thuc xem phan tu tai dinh ngan xep
        void top() const
        {
            if(empty())
            {
                throw runtime_error("Stack is empty: cannot access top elements.");
            }else {
                return stack.back();
            }
        }


        //phuong thuc tra ve so luong phan tu co trong ngan xep
        int size() const{
            return stack.size();
        }

        //phuong thuc xoa sach ngan xep 
        void clear()
        {
            stack.clear();
        }
};

int main()
{
    return 0;
}