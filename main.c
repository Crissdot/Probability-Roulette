#include <stdio.h>

int main(){
	// You can change this roulette
	unsigned char roulette[] = {2, 3, 5, 10, 20};
	
	
	
	unsigned char size = sizeof(roulette);
	unsigned int bet[size];
	unsigned long amountBet = size;
	
	unsigned int gain[size];
	
	// fill bet
	unsigned char i;
	for(i = 0; i < size; i++){
		bet[i] = 1;
	}
	
	unsigned long minGain = bet[0] * roulette[0];
	while(minGain < amountBet){
		unsigned int minGain = bet[0] * roulette[0];
		for(i = 0; i < size; i++){
			gain[i] = bet[i] * roulette[i];
			printf("%d ", gain[i]);
		}
		for(i = 0; i < size; i++){
			if(gain[i] < minGain) minGain = gain[i];
		}
		printf("   %d  %d\n", minGain, amountBet);
		for(i = 0; i < size; i++){
			if(gain[i] == minGain) {
				bet[i]++;
				break;
			}
		}
		
		amountBet++;
	}
	
	printf("\n\n\nWIN!!!\n\n");
	printf("%d\n", amountBet);
	for(i = 0; i < size; i++){
		printf("%d,", bet[i]);
	}
	
	return 0;
}

