#include <stdio.h>
#define N 40
#define M 40


struct Family
{
	char name[M][N];
	int age[M];
};

int main()
{
	int n;
	Family nom;
	printf("Enter numbers of relatives: ");
	scanf("%d", &n);

	int *old, *young;
	char *n1, *n2;
	old = &nom.age[0];
	young = &nom.age[0];
	
	for (int i = 0; i < n; i++)
	{
		printf("\nEnter name: ");
		scanf("%s", &nom.name[i][0]);
		printf("\nEnter age: ");
		scanf("%d", &nom.age[i]);
	}

	for (int i = 1; i<n; i++)
	{
		if (nom.age[i]<*young)
		{
			young = &nom.age[i];
			n1 = &nom.name[i][0];
		}
		else if (nom.age[i]>*old)
		{
			old = &nom.age[i];
			n2 = &nom.name[i][0];
		}
	}

	printf("Young: %s, %d\n", n1, *young);
	printf("Old: %s, %d\n", n2, *old);


	return 0;
}