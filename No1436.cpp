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
		while (tmp != 0) //���� �ּ� 666�� �� �� ������ �Ǻ��ϴ� ��
		{
			if (tmp % 1000 == 666) //������ ������ ���
			{
				cnt++;
				break;
			}
			else //������ ���ڰ� �ƴ� ��� 1�� �ڸ� ���� ������
			{
				tmp /= 10;
			}
		}
	}
	cout << title;
}
