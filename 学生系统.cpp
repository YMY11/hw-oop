#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	string name;
	int cno;
	bool sex;
	int birth;
	int height;
	int weight;
	int score;
	string address;
	cout<<"性别0代表男，1代表女,出生日期（年月日）"<<endl;
	cin>>name>>cno>>sex>>birth>>height>>weight>>score>>address;
	int n;
	cout<<"若初始化学生数据信息，输入1；若输出学生数据信息，输入2；若修改学生基本信息，输入3"<<endl;
	cin>>n;
	if(n==1){
		name = "xxx";
		cno = 0;
		sex = 0;
		birth = 0;
		height = 0;
		weight = 0;
		score = 0;
		address = "XXX";
	}
	else if(n==2){
		cout<<name<<" "<<cno<<" "<<sex<<" "<<birth<<" "<<height<<" "<<weight<<" "<<score<<" "<<address;
	}
	else{
		cout<<"选择修改内容：姓名，学号，性别，出生日期，身高，体重，高考成绩，家庭住址"<<endl;
		string x;
		cin>>x;
		if(x=="姓名"){
			cout<<"输入更改后的姓名:"<<endl;
			string name1;
			cin>>name1;
			name = name1;
		}
		else if(x=="学号"){
			cout<<"输入更改后的学号:"<<endl;
			int cno1;
			cin>>cno1;
			cno = cno1;
		}
		else if(x=="性别"){
			cout<<"输入更改后的性别:"<<endl;
			bool sex1;
			cin>>sex1;
			sex = sex1;
		}
		else if(x=="出生日期"){
			cout<<"输入更改后的出生日期:"<<endl;
			int birth1;
			cin>>birth1;
			birth = birth1;
		}
		else if(x=="身高"){
			cout<<"输入更改后的身高:"<<endl;
			int height1;
			cin>>height1;
			height = height1;
		}
		else if(x=="体重"){
			cout<<"输入更改后的体重:"<<endl;
			int weight1;
			cin>>weight1;
			weight = weight1;
		}
		else if(x=="高考成绩"){
			cout<<"输入更改后的高考成绩:"<<endl;
			int score1;
			cin>>score1;
			score = score1;
		}
		else if(x=="家庭住址"){
			cout<<"输入更改后的家庭住址:"<<endl;
			string address1;
			cin>>address1;
			address = address1;
		}
		cout<<name<<" "<<cno<<" "<<sex<<" "<<birth<<" "<<height<<" "<<weight<<" "<<score<<" "<<address;
	}
	return 0;
}
