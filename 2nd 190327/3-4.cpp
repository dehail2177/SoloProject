#include<iostream>
using namespace std;
class CPnt{
	int x, y;
public:
	CPnt(int a, int b):x(a),y(b){
	}
	CPnt operator+(CPnt me){
		return(CPnt(x+me.x,y+me.y));
	}
	void Pr(){
		cout << x << "," << y << endl;
	}
};
int main(){
	CPnt p1(2,3), p2(3,4), p3(0,0);
	p3=p1+p2;
	p3.Pr();
}
