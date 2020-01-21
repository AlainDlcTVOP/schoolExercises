#include <stdio.h>
int main()
{
	int n, i;  // mata in variabel
	printf("Valkomen til Sum Evens");
	printf("Mata in ett nummer:");
	scanf("%d", &n);
	printf("Summa till jamna tal %d:\n", n);

	for (i = 0; i <= n; i = i + 2)  // loppar ut om räknaren i är mindre liks med N (siffran vi matar in) är ojämn då vill vi att siffran ska + med 2
	{
		printf("%d ", i);
	}
	return 0;
}