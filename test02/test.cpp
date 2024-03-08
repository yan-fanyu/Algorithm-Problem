#include <iostream>
using namespace std;
#include <string>

bool is_prime(int n){
    if(n < 2) return false;
    for(int i = 2;i <= n / i;i ++){ //ÓÅ»¯ÄÚÈÝ
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool is_prime0(int n)
{
	for(int i = 2; i < n/2; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;

}

int main()
{
	int ans0 = 0;

	int size = 5*1e5;
	for(int i = 10; i < size; i ++)
	{
		if(is_prime0(i))
			ans0++;
	
	}


	cout << ans0 << endl;
	int ans1 = 0;

	for(int i = 10; i < size; i ++)
	{
		if(is_prime(i))
			ans1++;
	
	}

	cout << ans1;


	return 0;
}