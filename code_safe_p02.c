#include <stdio.h>

int main(void) {
	int T, N;
	scanf("%d", &T);
	for(int i=0; i<T; i++ )
    {
        scanf("%d",&N);
        if(N%2==0){
            printf("YES \n");
        }
        else{
            printf("NO \n");
        }
    }
	return 0;
}
