#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Member
{
	int cnt;
	int age;
	string name;

	Member(int cnt, int age, string name) :cnt(cnt), age(age), name(name) {}
};

bool compare(Member a, Member b)
{
	if (a.age == b.age)
		return a.cnt < b.cnt;
	else
		return a.age < b.age;
}
void No10814()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int cnt = 0, age;
	string name;
	vector<Member> vc;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> age >> name;
		vc.push_back(Member(cnt++, age, name));
	}

	sort(vc.begin(), vc.end(), compare);

	for (int i = 0; i < N; i++)
	{
		cout << vc[i].age << " " << vc[i].name << "\n";
	}
}

void Short10814()
{
	vector<string> v[210];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		int y; 
		string x; 
		cin >> y >> x;
		v[y].push_back(x); //나이마다 넣어놓기
	}

	for (int i = 0; i <= 200; i++) //나이는 1보다 크고 200보다 작으니까
		for (auto x : v[i])  //나이가 존재할 때 출력
			cout << i << ' ' << x << '\n';
}
