// Ashu and Arvind participated in a coding contest, as a result of which they received NN chocolates. Now they want to divide the chocolates between them equally.

// Can you help them by deciding if it is possible for them to divide all the NN chocolates in such a way that they each get an equal number of chocolates?

// For each test case output the answer on a new line — "Yes" (without quotes) if they can divide chocolates between them equally, and "No" (without quotes) otherwise

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
