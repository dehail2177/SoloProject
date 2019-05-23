#include<iostream>
using namespace std;
class CMath{
	int w, h;
public:
	CMath(){
		w=10; h=25;
	}
	int Area(){
		return w*h;
	}
};
int main(){
	CMath me;
	cout << me.Area();
}
