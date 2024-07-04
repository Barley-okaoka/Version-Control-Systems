#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int heads=0;
    char str[100];
    printf("Who are you?\n");
    scanf("%s", str);
    printf("Hello, %s!\n",str);

    printf("Tossing a coin...\n");
    for(i=0;i<3;i++){
        printf("Round %d: ",i+1);
        srand( (int)time(NULL) );
        if(rand()%2){
            heads++;
            printf("Heads\n");
        }
        else printf("Tails\n");
        sleep(1);
    }
    printf("Heads: %d, Tails: %d\n",heads,3-heads);

    if(heads>=2) printf("%s won\n",str);
    else printf("%s lost\n",str);

    return 0;
}