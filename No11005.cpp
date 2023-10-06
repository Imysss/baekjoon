#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void No11005()
{
	int N; //input - 10���� �� 
	int B; //����
	string result;

	cin >> N >> B;

	while (N > 0)
	{
		result += ((N%B) > 9 ? char((N%B) + 55) : (N%B)+'0');
		N = N / B;
	}
	reverse(result.begin(), result.end());

	cout << result << endl;
}

void Short11005()
{
	int n, m, k;
	string s;
	cin >> n >> m;

	while (n) {
		k = n % m; //������ ���ϱ�
		n -= k;
		n /= m; //���� �����ϴ��� Ȯ���ϴ� �뵵
		s.push_back(k > 9 ? 'A' + k - 10 : '0' + k); //���Ϳ� �־ �ڿ������� �о����
	}

	n = s.size();
	while (n--) cout << s[n];
}
