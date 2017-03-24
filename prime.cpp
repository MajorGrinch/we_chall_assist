#include <cstdio>
#include <cmath>
using namespace std;

bool is_Prime(int x);
bool both_Prime(int x);

int main(int argc, char const *argv[])
{
	int prime_1, prime_2;
	for( int i = 1000000; ; i++){
		if( is_Prime(i) && both_Prime(i)){
			prime_1 = i;
			break;
		}
	}
	for( int i = prime_1+1; ; i++){
		if(is_Prime(i) && both_Prime(i)){
			prime_2 = i;
			break;
		}
	}

	printf("%d%d\n", prime_1, prime_2);
	return 0;
}

bool is_Prime(int x){
	for( int i = 2; i <= sqrt(x)+1; i++){
		if( x%i == 0 )
			return false;
	}
	return true;
}

bool both_Prime(int x){
	int temp = x, sum = 0;
	while( x ){
		sum += x % 10;
		x /= 10;
	}
	if( is_Prime(sum) )
		return true;
	return false;
}