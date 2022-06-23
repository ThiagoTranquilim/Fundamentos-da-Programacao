#include <stdio.h>

int main(){
	int vet[10], cont, par;
	par = 0;
	for(cont = 0; cont < 9; cont++){
		scanf("%d", &vet[cont]);
		if(vet[cont]%2 == 0){
			par++;
		}
	}
	printf("%d", par);
	return 0;
}
