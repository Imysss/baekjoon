#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void No10757()
{
	string A, B, C;
	int len;
	cin >> A >> B;

	//더 큰 수
	len = (A.length() > B.length() ? A.length() : B.length());

	//뒤에서 계산하기 위해 reverse
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	int tmp = 0;
	int a, b;
	//작은 수의 값이 끝나면 0으로 취급하고 계속 더해주는 식으로 진행
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