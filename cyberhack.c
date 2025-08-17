#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

void print(const char *str){
	int i = 0;
 	while (str[i] != '\0') {
        putchar(str[i]);
        fflush(stdout);
        usleep(25000); 
        i++;
    }
}
int main(){
	srand(time(NULL));	
	system("clear");
	int points=0;
while(1){
	print("1 -> Direct Trace: 50% success rate, +50 security points if successful.\n2 -> Proxy Scan: Always succeeds, +30 security points.\n3 -> Social Engineering: No immediate points, but gives a clue for Stage 2.\n\n");
	int c1,c2,c3;
	int random=rand()%900+100;
	scanf("%d",&c1);
	printf("\n\n");
    sleep(1);
	switch(c1){
		case 1:
			if(rand()%100>50){
			print("Trace Successful, You earned 50 points !\n\n");
			points+=50;
			
			}
			else{
				print("Trace Failure !\n\n");
				print("You have ");
				printf("%d ",points);
				print("points\n\n");
				
			}
			break;
			case 2:
			print("Scan Success, you earned  30 points\n\n");
			points+=30;
			
			break;
			case 3:
			print("The Hundered's digit of the code is ");
			printf("%d\n",random/100);
			break;
		default:
		print("Invalid Choice, Try Again\n\n");
			continue;
		}
		print("Waiting for secret code terminal...  ");
		for (int i = 0; i < 30; i++)
	{
		printf("\b/");
		fflush(stdout);
		usleep(100000); 
		printf("\b-");
		fflush(stdout);
		usleep(100000); 
		printf("\b\\");
		fflush(stdout);
		usleep(100000); 
	}
	
	system("clear");
	print("You have ");printf("%d ",points);print("points\n\n");
	print("You have 3 attempts to guess the secret 3-digit code.\n\n");
	usleep(500000);
	for (int i = 0; i < 3; i++)
	{
		printf("Guess Secret 3-digit Code : ");
		scanf("%d",&c2);
		if (c2==random){
			print("Code Correct! +100 points\n\n");
			points+=100;
		}
		else{
			print("Code Incorrect! + 20 points\n\n");
			points+=20;
		}
		usleep(500000);
	}
	printf("Round Over\n\n");

	print("Opening firewall Window...  ");
	for (int i = 0; i < 30; i++)
	{
		printf("\b/");
		fflush(stdout);
		usleep(100000); 
		printf("\b-");
		fflush(stdout);
		usleep(100000); 
		printf("\b\\");
		fflush(stdout);
		usleep(100000); 
	}
	
	sleep(5);
	system("clear");
	print("You have ");printf("%d ",points);print("points\n\n");
	print("You must choose a firewall strategy:\n1 -> Quick Lockdown: 70% chance of +80 points, otherwise 0.\n2 -> Layered Defense: Always +50 points.\n3 -> AI Counterattack: 30% chance of +150 points, otherwise -20 points.\n\n");
	scanf("%d",&c3);
	sleep(2);
	print("\n");
	if(c3==1){
		if(rand()%100<70){
			print("Quick Lockdown Successful\n\n");
			points+=80;
		}
		else{
			print("Quick Lockdown Failed\n\n");
		}
	}
	else if(c3==2){
		print("Layered Defense Activated\n\n");
		points+=50;
	}
	else if(c3==3){
		if(rand()%100<30){
			print("AI Counterattack Successful\n\n");
			points+=150;
		}
		else{
			print("AI Counterattack Failed\n\n");
			points-=20;
		}
	}
	if (points >= 200)
	{
		print("Hacker fully blocked. System secure.\n\n");
		print("Final Points: ");
		printf("%d\n", points);
		print("Congratulations!\n");
	}
	else if (points > 100)
	{
		print("Partial success. Hacker activity reduced.\n\n");
		print("Final Points: ");
		printf("%d\n", points);
		print("You can improve your defenses for next time.\n");
	}
	else
	{
		print("Hacker escaped with data. Mission failed.\n\n");
		print("Final Points: ");
		printf("%d\n", points);
		print("Better luck next time.\n");
	}
	usleep(50000);
	printf("Do you want to play again? (y/n): ");
	char c4;
	scanf("%c",&c4);
	if(c4=='y' || c4=='Y'){
		printf("Restarting the game...\n\n");
		points=0;
		continue;
	}
	else if(c4=='n' || c4=='N'){
		printf("Exiting the game...\n\n");
		break;
	}
	else{
		printf("Invalid input, exiting...\n\n");
		break;
	}

}

return 0;
}