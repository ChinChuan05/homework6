#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct card{
	const char *face;
	const char *suit;
}Card;

void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void) {
	Card desk[52];

	
}
