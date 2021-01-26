#include<bits/stdc++.h>
using namespace std;
#define Max 100
struct Robot{
	int dong, cot;
	char huongmat;
	bool truyvet[Max][Max];
	int lotrinh[Max];
	int diem;
};
typedef struct Robot ROBOT;
void KhoiTao(ROBOT &robot,int n, int dong_start, int cot_start, char huong, int diem)
{
	robot.dong=dong_start;
	robot.cot=cot_start;
	robot.huongmat=huong;
	robot.diem=diem;
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
		{
			robot.truyvet[i][j]==false;
		}
}
void dichuyen(ROBOT &robot,int map[Max][Max], int lenh)
{
	if(lenh==1)
	{
			if(robot.huongmat=='W') robot.huongmat='A';
			else if(robot.huongmat=='S') robot.huongmat='D';
			else if(robot.huongmat=='A') robot.huongmat='S';
			else if(robot.huongmat=='D') robot.huongmat='W';
	}
	else 		if(lenh==2)
	{
			if(robot.huongmat=='W') robot.huongmat='D';
			else if(robot.huongmat=='S') robot.huongmat='A';
			else if(robot.huongmat=='A') robot.huongmat='W';
			else if(robot.huongmat=='D') robot.huongmat='S';
	}else 	if(lenh==0)
	{
			if(robot.huongmat=='W') robot.dong--;
			else if(robot.huongmat=='S') robot.dong++;
			else if(robot.huongmat=='A') robot.cot--;
			else if(robot.huongmat=='D') robot.cot++;
			if(robot.truyvet[robot.dong][robot.cot]==false ) {
				robot.diem+=map[robot.dong][robot.cot];
				robot.truyvet[robot.dong][robot.cot]=true;
			}
			
		
	}	
	
}
void xuli(int map[Max][Max], int m, ROBOT &rb_xanh, ROBOT &rb_do)
{
	for(int i=0; i<m; i++)
	{
		dichuyen(rb_xanh, map, rb_xanh.lotrinh[i]);
		dichuyen(rb_do, map, rb_do.lotrinh[i]);
		if(rb_xanh.dong==rb_do.dong && rb_xanh.cot==rb_do.cot)
		{
			rb_do.diem-= map[rb_do.dong][rb_do.cot];
			rb_xanh.diem-= map[rb_xanh.dong][rb_xanh.cot];
			break;
		}
	}
}
int main()
{
	int t; cin>>t;
	for(int k=0; k<t; k++)
	{
		int n, m, map[Max][Max];
		cin>>n>>m;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin>>map[i][j];
		ROBOT rb_xanh, rb_do;
		for(int i=0; i<m; i++)	cin>>rb_xanh.lotrinh[i];
		for(int i=0; i<m; i++)	cin>>rb_do.lotrinh[i];
		KhoiTao(rb_xanh,n, 0, 0, 'S', 0);
		KhoiTao(rb_do,n, n-1, n-1, 'W', 0);
		xuli(map, m, rb_xanh, rb_do);
		cout<<rb_xanh.diem<<" "<<rb_do.diem<<endl;
	}
	return 0;
}

