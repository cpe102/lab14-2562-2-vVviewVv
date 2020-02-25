#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 

void shuffle(int &a,int &b, int &c, int &d){
	int *x[4] = {&a,&b,&c,&d};
	int i,j,m,n;
	while (n < 5)
	{
		i = rand()%4;
		j = rand()%4;
	
		m = *x[i];
		*x[i] = *x[j];
		*x[j] = m;
		n++;
	}
	
}