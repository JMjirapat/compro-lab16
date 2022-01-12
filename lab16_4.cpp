#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &w,int &x,int &y,int &z){
	int random[] = {w,x,y,z};
	for(int i=0; i < 4; i++) swap(random[i],random[rand()%4]);
	w = random[0];
	x = random[1];
	y = random[2];
	z = random[3];
}