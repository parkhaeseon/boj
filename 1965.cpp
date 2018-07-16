#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

int N = 0; // ������ ũ��
int num[1001] = { 0, };
int dp[1001] = { 0, };

using namespace std;

int main(void)
{
	int max = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 1; i <= N; i++)
	{
		dp[i] = 1; // ����

		for (int j = 1; j < i; j++) // �� ���� �͵��� �ϳ��� �� ��. i-1����.
		{
			if (num[i] > num[j] && dp[j] + 1 > dp[i])
			{
				dp[i] = dp[j] + 1;
			}
		}

		if (max < dp[i]) max = dp[i];
	}

	printf("%d\n", max);

	return 0;
}