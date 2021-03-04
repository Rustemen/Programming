#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, n, k, b = 0;

	cin >> a >> n;

	vector<string> nap(n);
	vector<int> price(n);
	vector<int> v(n);
	vector<int> rez(n);
	vector<int> litr(n);
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nap[i] >> price[i] >> v[i];
		rez[i] = a / price[i];
		litr[i] = rez[i] * v[i];
		if (litr[i] == 0) b++;
	}

	if (b == n) {
		cout << -1 << endl;
		return(0);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (litr[i] > litr[j]) k = i;
		}
	}

	cout << nap[k] << " " << rez[k] << " " << endl << litr[k] << endl << a - (price[k] * rez[k]) << endl;

	return(0);
}

