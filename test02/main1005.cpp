#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>
#include <set>

void solve()
{
	int a, b, c, d;
	double avg;
	cin >> a >> b >> c >> d;

	if(a == b && a == c && a == d && b == c && b == d && c == d){
		cout << "B";
		return;
	}

	avg = (a+b+c+d)/4.0;

	int chang = 0;
	int duan = 0;
	if(a > avg)
		chang++;
	if(b > avg)
		chang++;
	if(c > avg)
		chang++;
	if(d > avg)
		chang++;

	if(a < avg)
		duan++;
	if(b < avg)
		duan++;
	if(c < avg)
		duan++;
	if(d < avg)
		duan++;

	if(chang == 3){
		if(a < avg){cout << "A"; return;}
			
		if(b < avg){cout << "B"; return;}
		if(c < avg){cout << "C"; return;}
		if(d < avg){cout << "D"; return;}
	}

	else if(duan == 3){
		if(a > avg){cout << "A"; return;}
			
		if(b > avg){cout << "B"; return;}
		if(c > avg){cout << "C"; return;}
		if(d > avg){cout << "D"; return;}
	}

	else{cout << "C";}


}

int main()
{
	solve();


	return 0;
}