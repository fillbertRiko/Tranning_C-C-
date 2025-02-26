/*
Bài 03(ctdlgtbai03.cpp). Viết chương trình C/C++ cài đặt cấu trúc dữ liệu ngăn xếp sử dụng cấu trúc lưu trữ kế tiếp.
Sử dụng ngăn xếp cho bài toán chuyển một số nguyên dương hệ 10 sang hệ 2. Đưa ra bit MSB của số nhị phân tìm được.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;

template<class Entry> class Stack
{
private:
	vector<Entry> phantu;
public:
	void push(Entry const&);
	void pop();
	Entry top() const;
	bool empty() const
	{
		return phantu.empty();
	}
};

template<class Entry> void Stack<Entry>::push(Entry const& element)
{
	phantu.push_back(element);

}
template<class Entry> void Stack<Entry>::pop()
{
	if (phantu.empty())
		throw out_of_range("Stack<>::pop(): Ngan xep da rong");
	phantu.pop_back();
}
template<class Entry> Entry Stack<Entry>::top() const
{
	if (phantu.empty())
		throw out_of_range("Stack<>::top(): Ngan xep da rong");
	return phantu.back();
}

int main()
{
	try
	{
		Stack<int> stackSoHeBin;

		//thao tac trn stack so bin
		int n;
		cout << "Enter the num you want to change: ";
		cin >> n;
		int temp;

		do
		{
			temp = n % 2;
			n /= 2;
			stackSoHeBin.push(temp);
		} while (n > 0);

		cout << stackSoHeBin.top() << endl;
		stackSoHeBin.pop();
	}
	
	catch (exception const& ex)
	{
		cerr << "Exception: " << ex.what() << endl;
		return -1;
	}
}