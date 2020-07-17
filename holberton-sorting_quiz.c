#include <stdio.h>
#include <stdlib.h>

int main ()
{
char questions[7][1024] = 
{
	"1. How many hours of sleep do you get per night?",
	"2. What is your drink of choice?",
	"3. Which text editor do prefer?",
	"4. Do you attempt the advanced tasks?",
	"5. How do you feel about Betty?",
	"6. Your relationship with the checker is...",
	"7. What does your slack look like?",
};

char A[7][1024] =
{
	"A. What is sleep?",
	"A. Coffee: The drink of champions!",
	"A. Emacs",
	"A. Always! I'm up for the challenge!",
	"A. Nothing I can't conquer.",
	"A. Mutual: We help each other",
	"A. Not afraid to ask for help",
};

char B[7][1024] =
{
	"B. As much as I want",
	"B. Wouldn't taster that if I were you...",
	"B. VI",
	"B. Advanced what now?",
	"B. Who's Betty?",
	"B. Not the Best",
	"B. Always there for support",
};

char C[7][1024] =
{
	"C. The optimal amount",
	"C. Tea: It helps me focus",
	"C. VIM",
	"C. Of course!",
	"C. It's necessary for me to improve",
	"C. I always get green checks",
	"C. Sharing lots of tips",
};

char D[7][1024] = 
{
	"D. Do naps during live codes count?",
	"D. Energy Drink: Got to Stay Ahead",
	"D. My own (Don't tell Derek!)",
	"D. Only if I know the answer!",
	"D. I am her master!",
	"D. I gamed the system, so I always get all checks",
	"D. Not engaged, focused mainly on my own projects",
};

char answer;
int n = 0;
int gryffindor = 0;
int h = 0;
int ravenclaw = 0;
int slytherin = 0;

while(n < 7)
{
	printf("%s\n", questions[n]);
	printf("%s\n", A[n]);
	printf("%s\n", B[n]);
	printf("%s\n", C[n]);
	printf("%s\n", D[n]);
	printf("Your Answer:");
	scanf(" %c", &answer);
	printf("\n");

if('a' == answer || 'A' == answer)
{
	gryffindor = gryffindor + 1;
}

else if('b' == answer || 'B' == answer)
{
	h = h + 1;
}

else if('c' == answer || 'C' == answer )
{
	ravenclaw = ravenclaw + 1;
}

else if('d' == answer || 'D' == answer)
{
	slytherin = slytherin + 1;
}
n++;
continue;

}

if(gryffindor > h && gryffindor > ravenclaw && gryffindor > slytherin)
	printf("Gryffindor!\nWhen it comes to software programming, you're not afraid to be daring! You try it all, even if it means failure!\n");

else if(h > gryffindor && h > ravenclaw && h > slytherin)
	printf("Hufflepuff!\nYou may not be the best programmer yet, but your patience, hard work, and loyalty will truly pay off in the end!\n");

else if(ravenclaw > gryffindor && ravenclaw > h && ravenclaw > slytherin)
	printf("Ravenclaw!\nYou are the master of your own code! Your creativity and intelligence helps you solve problems efficiently and thoroughly\n");

else if(slytherin > gryffindor && slytherin > h && slytherin > ravenclaw)
	printf("Slytherin!\nYou're an ambitious programmer who knows the sky is never the limit. You use your resources wisely and are cunning with a keyboard.\n");

       return(0);
}
