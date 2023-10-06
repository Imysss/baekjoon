#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void No10757()
{
	string A, B, C;
	int len;
	cin >> A >> B;

	//�� ū ��
	len = (A.length() > B.length() ? A.length() : B.length());

	//�ڿ��� ����ϱ� ���� reverse
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	int tmp = 0;
	int a, b;
	//���� ���� ���� ������ 0���� ����ϰ� ��� �����ִ� ������ ����
	for (int i = 0; i < len; i++)
	{
		a = (i < A.length() ? A[i] - '0' : 0);
		b = (i < B.length() ? B[i] - '0' : 0);

		tmp = (tmp > 9 ? a + b + 1 : a + b);
		C += (tmp > 9 ? (tmp - 10) + '0' : tmp + '0');
	}
	if (tmp > 9)
	{
		C += "1";
	}

	reverse(C.begin(), C.end());
	cout << C;
}

void Short10757()
{
	string x, y;
	cin >> x >> y;
	string ans;
	int tmpsum = 0;
	while (!x.empty() || !y.empty() || tmpsum != 0) {
		if (!x.empty()) 
		{
			tmpsum += x.back() - '0';
			x.pop_back();
		}
		if (!y.empty()) 
		{
			tmpsum += y.back() - '0';
			y.pop_back();
		}
		ans.push_back((tmpsum % 10) + '0');
		tmpsum = tmpsum / 10;
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
}