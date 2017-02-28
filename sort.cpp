#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int n, m;
int h[1000001];

void Down(int idx){
#define L(x) (x<<1)
#define R(x) ((x<<1)+1)

	//cout << idx << endl;
	// can end 
	bool flag = true;
	if (L(idx) <= m && h[idx]>h[L(idx)]){
		flag = false;
	}
	if (R(idx) <= m && h[idx] > h[R(idx)]){
		flag = false;
	}
	if (flag == true)
		return;
	// can't end, we should down()
	//cout << h[L(idx)] <<"  "<<  h[R(idx)] << endl;
	if (R(idx) <= m && h[R(idx)] <= h[L(idx)]){
		int temp = h[R(idx)];
		h[R(idx)] = h[idx];
		h[idx] = temp;
		Down(R(idx));
	}
	else{
		int temp = h[L(idx)];
		h[L(idx)] = h[idx];
		h[idx] = temp;
		Down(L(idx));
	}

}

int main(){
	while (~scanf("%d%d", &n,&m)){
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &h[i + 1]);
			// cin >> h[i + 1];
		}
		// Initialization
		for (int i = 0; i < n / 2; i++)
			Down(n / 2 - i);

		for (int i = 0; i < n - m; i++){
			int temp;
			// cin >> temp;
			scanf("%d", &temp);
			if (temp>h[1]){
				h[1] = temp;
				Down(1);
			}
		}
		vector <int>a;
		for (int i = 1; i <= m; i++){
			a.push_back(h[1]);
			h[1] = h[m - i + 1];
			Down(h[1]);
		}
		int length = a.size();
		for (int i = 0; i < length - 1; i++){
			// cout << a[length - i - 1] << " ";
			printf("%d ", a[length - i + 1]);
		}
		cout << a[0] << endl;
	}
	// cin >> length ;
	
}



