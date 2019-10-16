#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int Structsj(int a,int b,int c){
	int r;
	if(a+b>c||a+c>b||b+c>a){
		cout<<"可以构成三角形"<<endl;
		r=1;
	}
	else{
		cout<<"不能构成三角形"<<endl; 
		r=0;
	}
	return r;
}
void zc(int a,int b,int c){
	cout<<a+b+c<<endl;
}
void mj(int a,int b,int c){
	int p,s;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<s<<endl;
}
void whichsj(int a,int b,int c){
	int a2,b2,c2;
	a2=a*a;
	b2=b*b;
	c2=c*c;
	if(a2+b2==c2||a2+c2==b2||b2+c2==a2){
		cout<<"直角三角形"<<endl;
	} 
	else if(a2+b2>c2||a2+c2>b2||b2+c2>a2){
		cout<<"锐角三角形"<<endl;
	} 
	else{
		cout<<"钝角三角形"<<endl;
	}
}
int main(){
	int ifs;
	int a,b,c;
	cin>>a>>b>>c;
	ifs=Structsj(a,b,c);
	if(ifs==0){
		return 0;
	}
	else{
		zc(a,b,c);
		mj(a,b,c);	
		whichsj(a,b,c);
	}
	return 0;
} 
