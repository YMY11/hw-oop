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
	cout<<"�Ա�0�����У�1����Ů,�������ڣ������գ�"<<endl;
	cin>>name>>cno>>sex>>birth>>height>>weight>>score>>address;
	int n;
	cout<<"����ʼ��ѧ��������Ϣ������1�������ѧ��������Ϣ������2�����޸�ѧ��������Ϣ������3"<<endl;
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
		cout<<"ѡ���޸����ݣ�������ѧ�ţ��Ա𣬳������ڣ���ߣ����أ��߿��ɼ�����ͥסַ"<<endl;
		string x;
		cin>>x;
		if(x=="����"){
			cout<<"������ĺ������:"<<endl;
			string name1;
			cin>>name1;
			name = name1;
		}
		else if(x=="ѧ��"){
			cout<<"������ĺ��ѧ��:"<<endl;
			int cno1;
			cin>>cno1;
			cno = cno1;
		}
		else if(x=="�Ա�"){
			cout<<"������ĺ���Ա�:"<<endl;
			bool sex1;
			cin>>sex1;
			sex = sex1;
		}
		else if(x=="��������"){
			cout<<"������ĺ�ĳ�������:"<<endl;
			int birth1;
			cin>>birth1;
			birth = birth1;
		}
		else if(x=="���"){
			cout<<"������ĺ�����:"<<endl;
			int height1;
			cin>>height1;
			height = height1;
		}
		else if(x=="����"){
			cout<<"������ĺ������:"<<endl;
			int weight1;
			cin>>weight1;
			weight = weight1;
		}
		else if(x=="�߿��ɼ�"){
			cout<<"������ĺ�ĸ߿��ɼ�:"<<endl;
			int score1;
			cin>>score1;
			score = score1;
		}
		else if(x=="��ͥסַ"){
			cout<<"������ĺ�ļ�ͥסַ:"<<endl;
			string address1;
			cin>>address1;
			address = address1;
		}
		cout<<name<<" "<<cno<<" "<<sex<<" "<<birth<<" "<<height<<" "<<weight<<" "<<score<<" "<<address;
	}
	return 0;
}
