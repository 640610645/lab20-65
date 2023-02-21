#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
    double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
    double leftR1 = r1.x, rightR1 = r1.x+r1.w, upperR1 = r1.y, lowerR1 = r1.y-r1.h;
    double leftR2 = r2.x, rightR2 = r2.x+r2.w, upperR2 = r2.y, lowerR2 = r2.y-r2.h;
    double leftLap = max(leftR1,leftR2), rightLap = min(rightR1,rightR2), upperLap = min(upperR1,upperR2), lowerLap = max(lowerR1,lowerR2);
	double width = rightLap-leftLap, height = upperLap-lowerLap;
	double area = width*height;
	if(width <= 0 || height <= 0) return 0;
	else return area;
}

int main(){
	Rect R1 = {1,1,2,2};
	Rect R2 = {6,6,1,1};	
	cout << overlap(R1,R2);	
}
