#include<math.h>
#include <iostream>
#include<stdio.h>

#define MAX 100
#define PI 3.14
double B(double n, double a) {
	return (n * a * a) / (4 * tan(PI / n));
}

double V(double n, double a, double h) {
	return (n * a * a * h) / (4 * tan(PI / n));
}

double bigestV(double v[], int count) {
	double max = v[0];
	for (int i = 1;i < count;i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}

void sortV(double v[], int count) {
	for (int i = 0;i < count - 1;i++) {
		for (int x = 0;x < count - i - 1;x++) {
			if (v[x] > v[x + 1]) {
				double z = v[x];
				v[x] = v[x + 1];
				v[x + 1] = z;
			}
		}
	}
	
}


int main()
{
	int n, sides[MAX];
	double side[MAX], hight[MAX], volume[MAX];
	printf("Enter number of prism: ");
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++) {
		printf("\nPrism: %d\n", i + 1);
		printf("Enter the amount of sides: ");
		scanf_s("%d", &sides[i]);

		printf("Enter the lenght(cm): ");
		scanf_s("%lf", &side[i]);

		printf("Enter the hight(cm): ");
		scanf_s("%lf", &hight[i]);

		volume[i] = V(sides[i], side[i], hight[i]);
	}
	printf("\nVolume of prisms: \n");
	for (int i = 0; i < n; i++) {
		printf("Prism %d: %.2lf\n", i+1, volume[i]);
	}
	printf("\nThe biggest volume is: %.2lf\n",bigestV(volume,n));

	sortV(volume, n);

	printf("\nSorted volumes: ");
	for (int i = 0;i < n;i++) {
		printf("\n%.2lf", volume[i]);
	}
}

