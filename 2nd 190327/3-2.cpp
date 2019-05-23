#include<iostream>
using namespace std;
class CPnt{
	int x, y;
public:
	CPnt(int a, int b):x(a),y(b){
	}
	void Pr(){
		cout << x << "," << y << endl;
	}
};
int main(){
	CPnt p1(2,3), p2(3,4), p3(0,0);
	p1.Pr();
}
