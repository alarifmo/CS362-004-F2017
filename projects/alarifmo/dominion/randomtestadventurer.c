#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>

int main(){
        struct gameState realGame, testGame;
        int result;
        int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
                        sea_hag, tribute, smithy};
//        int i=0, j=0, h=0;
        int count=0;
        int random;
	int num_p,handC,deckC,discard;
printf(" Here is the RANDOM Test For the ( adventurer ) \n");


int i,j,z;
srand(time(NULL));   // should only be called once
initializeGame(2, k, rand, &realGame);

for (i=0; i<1000 ; i++){
	initializeGame(2, k, rand, &realGame);
	memcpy(&testGame, &realGame, sizeof(struct gameState));



	num_p= rand() %4;
	handC= rand() %500;
	deckC=rand() % 500;
	discard=rand()%5;
	testGame.handCount[0]=handC;
	testGame.deckCount[0]=deckC;
	testGame.discardCount[0]=discard;


	result=cardEffect(adventurer, 0, 0, 0, &testGame, 0, 0);

	if(result==0){count++;}



	}


if(count>900){printf("pass and count = %d \n", count);}
printf("is it updting \n");
return 0;
}

