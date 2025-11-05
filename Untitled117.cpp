#include <stdio.h>

int main(){

	int n;
	printf("Nhap so thang: ");
	do {
		scanf("%d", &n);
		if (n < 2) printf("Vui long nhap thang >= 2\n");
	} while (n < 2);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	int profit;
	int p[n-1];
	
	printf("Ban mua vao o thang 1 (gia %d).\n", a[0]);
	printf("Ban can tim thang ban sao cho lo thap nhat.\n");
	for (int i = 1; i < n; i++){
		profit = a[0] - a[i];
		if (profit > 0) {
			printf("Neu ban vao thang %d (gia %d), ban se lo %d.\n", i + 1, a[i], profit);
			p[i-1] = profit;
		}
	 	else if (profit < 0) {
	 		printf("Neu ban vao thang %d (gia %d), ban se lai %d.\n", i + 1, a[i], -profit);
	 		p[i-1] = profit;
		}
	 	else {
	 		printf("Neu ban vao thang %d ban se hoa von.", i+1);
			p[i-1] = profit;
		}
	}
	
	int min = p[0];
	int loss = 0;
	int month;
	for (int i = 0; i < n - 1; i++) {
		if (p[i] > 0) {
			loss = 1;
			if (min >= p[i]) {
				min = p[i];
				month = i + 2;
			}
		}
	}
	
	if (loss == 1) {
		printf("Ket qua: ban se lo it nhat khi ban vao thang %d (lo %d).", month, min);
	} else printf("Ban khong lo");
	
}


