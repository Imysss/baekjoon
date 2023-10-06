#include<iostream>
using namespace std;

void Short1436()
{
	int N;
	cin >> N;

	int cnt = 0, tmp, title = 0;
	while (N != cnt)
	{
		title++;
		tmp = title;
		while (tmp != 0) //수에 최소 666이 세 개 들어가는지 판별하는 것
		{
			if (tmp % 1000 == 666) //종말의 숫자일 경우
			{
				cnt++;
				break;
			}
			else //종말의 숫자가 아닐 경우 1의 자리 숫자 버리기
			{
				tmp /= 10;
			}
		}
	}
	cout << title;
}
