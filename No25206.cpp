#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

//학점X과목 평점을 반환
double GetUniversityGrade(double grade, string rate)
{
	string gradeRate[9][2] = { {"A+", "4.5"}, {"A0", "4.0"}, {"B+", "3.5"}, {"B0", "3.0"}, {"C+", "2.5"}, {"C0", "2.0"},
		{"D+", "1.5"}, {"D0", "1.0"}, {"F", "0.0"} }; //P는 계산에서 제외


	double double_rate;
	for (int i = 0; i < 9; i++)
	{
		if (rate == gradeRate[i][0])
		{
			double_rate = stod(gradeRate[i][1]);
		}
	}
	return grade * double_rate;
}

void No25206()
{
	string subjectName; //과목 이름
	double grade; //학점
	string rate; //등급명

	double university_grade=0.0;
	double grade_sum = 0.0;

	for (int i = 0; i < 20; i++)
	{
		cin >> subjectName;
		cin >> grade;
		cin >> rate;

		if (rate != "P")
		{
			//등급이 P가 아닐 경우 전공 과목별 학점 X 과목 평점의 합을 구함
			university_grade += GetUniversityGrade(grade, rate);
			grade_sum += grade;
		}
		
	}

	//P가 아닌 평점의 합의 평균을 구함
	printf("%.6lf%", university_grade / grade_sum);
	//cout << university_grade/ grade_sum << endl;
	
}

void Short25206()
{
	char a[50], b[5];
	double s = 0, c, S = 0;
	for (int t = 0; t < 20; t++) 
	{
		scanf("%s%lf%s", a, &c, b);
		if (b[0] == 80) 
			continue;

		s += c;

		if (b[0] == 70) 
			continue;

		if (b[1] == 48) 
			S += (69 - b[0])*c;
		else 
			S += (69 - b[0] + 0.5)*c;
	}
	printf("%lf", S / s);
}

