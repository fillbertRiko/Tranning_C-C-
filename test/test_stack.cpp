#include <iostream>
#include <err.h>

/*
const int max = 10;
template <class Entry>
class Stack (
    public: 
        Stack();
        bool empty() const;
        ErrorCode pop();
        ErrorCode top(Entry &item) const;
        ErrorCode push(const Entry &item);
    private:
        int count;
        Entry entry[max];
);
*/
int main()
{
    const int max =0;
    template <class Entry>
    class Stack(
    {
    private:
        int count;
        Entry entry[max];
    public:
        Stack();
        bool empty() const;
        ErrorCode pop();
        ErrorCode top(Entry &item) const;
        ErrorCode push(const Entry &item);
    };
    );
    return 0;
}