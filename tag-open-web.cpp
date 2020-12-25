#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
string c,d;
string r="start ";
string in_put;
int go(string n)
{
	if(n[0]=='n'&&n[1]=='e'&&n[2]=='w') return 1;
	else if(n[0]=='c'&&n[1]=='h'&&n[2]=='a'&&n[3]=='n'&&n[4]=='g'&&n[5]=='e') return 2;
//	else if(n[0]=='n'&&n[1]=='e'&&n[2]=='w'&&n[3]=='s') return 3;
	else return 3;
}
void new_tag(string n)
{
	string fname;
	int i;
	for(i=4; n[i]!=' '; i++) {
		fname=fname+n[i];
	}
//	ifstream fin;
//	fin.open((fname+".txt").c_str());
//	if(fin) {
//		cout<<"tag已存在"<<endl;
//		return ;
//	}
	ofstream fout((fname+".txt").c_str());
	for(int j=i+1; j<n.size(); j++) {
		fout<<n[j];
	}
}
void change_tag(string n)
{
	string fname;
	int i;
	for(i=7; n[i]!=' '; i++) {
		fname=fname+n[i];
	}
	cout<<fname<<endl;
	ofstream fout;
	fout.open((fname+".txt").c_str());
	if(!fout) {
		cout<<"标识符不存在"<<endl;
		fout.close();
	} else {
		for(int j=i+1; j<n.size(); j++) {
			fout<<n[j];
		}
	}
}
void open_tag(string t)
{
	int i;
	string fname;
	for(i=0; t[i]!=' '; i++) {
		fname=fname+t[i];
	}
	ifstream fin;
	fin.open((fname+".txt").c_str());
	if(!fin) {
		cout<<"无效tag"<<endl;
	} else {
		string cmdi;
		fin>>cmdi;
		r=r+cmdi;
		for(int j=i+1; j<t.size(); j++) {
			r=r+t[j];
		}
		system(r.c_str());
	}
}
//暂不可用
//void news_tag(string p)
//{
//	int i;
//	string fname;
//	for(i=5; p[i]!=' '; i++) {
//		fname=fname+p[i];
//	}
//	ofstream fout((fname+".txt").c_str());
//	for(int j=i+1; j<p.size(); j++) {
//		fout<<p[j];
//	}
//}
int main()
{
	while(true) {
		cout<<"input:";
		getline(cin,in_put);
		if(go(in_put)==1) {
			new_tag(in_put);
		} else if(go(in_put)==2) {
			change_tag(in_put);
		} else if(go(in_put)==3) {
			if(in_put=="help") {
				system("start README.md");
			} else {
				open_tag(in_put);
			}
		}
	}
	return 0;
}
