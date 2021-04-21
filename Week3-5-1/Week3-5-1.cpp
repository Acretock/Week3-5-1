#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class ReversibleString
{
public:
	ReversibleString();
	ReversibleString(string s);
	~ReversibleString();

	void Reverse() { reverse(begin(stroka), end(stroka)); }
	string ToString() const { return stroka; }
	

private:
	string stroka;
};

ReversibleString::ReversibleString()
{
}

ReversibleString::ReversibleString(string s)
{
	stroka = s;
}


ReversibleString::~ReversibleString()
{
}


int main()
{
	ReversibleString s("live");
	s.Reverse();
	cout << s.ToString() << endl;

	s.Reverse();
	const ReversibleString& s_ref = s;
	string tmp = s_ref.ToString();
	cout << tmp << endl;

	ReversibleString empty;
	cout << '"' << empty.ToString() << '"' << endl;

}
