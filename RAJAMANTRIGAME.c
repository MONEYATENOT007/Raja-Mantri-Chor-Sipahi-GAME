#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define x 4

void shuffle(int array[], int length);
void shuffle(int array[], int length)
{
  srand( time(NULL) );
  for (int i = 0; i < length; i++)
  {
    int swap_index = rand() % length;
    int temp = array[i];
    array[i] = array[swap_index];
    array[swap_index] = temp;
  }
  
}

int main(void)
{
  int c=1,p0=0,p1=0,p2=0,p3=0;
  char name1[100];
  char name2[100];
  char name3[100];
  char name4[100];
  

  while(c<=1){
  int players[x],i;
  for (int i = 0; i < x; i++){
    players[i] = i + 1;
  }
  shuffle(players, x);
  for (int i = 0; i < x; i++){
  //printf("player[%d] = %d" ,i, players[i]);
  }
    
    printf("\nENTER YOUR NAME-");
    scanf("%[^\n]%*c" ,&name1);
    if(players[0]==1){
    printf("\nRAJA for %s" ,name1);
    p0=p0+1000;}
    if(players[0]==2){
    printf("\nMANTRI for %s" ,name1);
    p0=p0+800;}
    if(players[0]==3){
    p0=p0+500;}
    if(players[0]==4){
    p0=p0;}
    
    printf("\n");
    printf("\nENTER YOUR NAME-");
    scanf("%[^\n]%*c" ,&name2);
    if(players[1]==1){
    printf("\nRAJA for %s" ,name2);
    p1=p1+1000;}
    if(players[1]==2){
    printf("\nMANTRI for %s" ,name2);
    p1=p1+800;}
    if(players[1]==3){
    p1=p1+500;}
    if(players[1]==4){
    p1=p1;}

    printf("\n");
    

    printf("\nENTER YOUR NAME-");
    scanf("%[^\n]%*c" ,&name3);
    if(players[2]==1){
    printf("\nRAJA for %s" ,name3);
    p2=p2+1000;}
    if(players[2]==2){
    printf("\nMANTRI for %s" ,name3);
    p2=p2+800;}
    if(players[2]==3){
    p2=p2+500;}
    if(players[2]==4){
    p2=p2;}

    printf("\n");
    

    printf("\nENTER YOUR NAME-");
    scanf("%[^\n]%*c" ,&name4);
    if(players[3]==1){
    printf("\nRAJA for %s" ,name4);
    p3=p3+1000;}
    if(players[3]==2){
    printf("\nMANTRI for %s" ,name4);
    p3=p3+800;}
    if(players[3]==3){
    p3=p3+500;}
    if(players[3]==4){
    p3=p3;}
    printf("\n");
    if(players[0]==1)
    printf("\n%s said \"MERA MANTRI KON\"" ,name1);
    if(players[1]==1)
    printf("\n%s said \"MERA MANTRI KON\"" ,name2);
    if(players[2]==1)
    printf("\n%s said \"MERA MANTRI KON\"" ,name3);
    if(players[3]==1){
    printf("\n%s said \"MERA MANTRI KON\"" ,name4);}
    printf("\n");
    if(players[0]==2)
    printf("\n%s responded \"MAI\"" ,name1); //shift chor mantri printf statements at the end of the program for all players
    if(players[1]==2)
    printf("\n%s responded \"MAI\"" ,name2); //shift chor mantri printf statements at the end of the program for all players
    if(players[2]==2)
    printf("\n%s responded \"MAI\"" ,name3); //shift chor mantri printf statements at the end of the program for all players
    if(players[3]==2){
    printf("\n%s responded \"MAI\"" ,name4);} //shift chor mantri printf statements at the end of the program for all players
    printf("\n");
if(players[0]==1)
    printf("\n%s said \"CHOR SIPAHI KA PATA LAGAO\"" ,name1);
    if(players[1]==1)
    printf("\n%s said \"CHOR SIPAHI KA PTA LAGAO\"" ,name2);
    if(players[2]==1)
    printf("\n%s said \"CHOR SIPAHI KA PTA LAGAO\"" ,name3);
    if(players[3]==1)
    printf("\n%s said \"CHOR SIPAHI KA PTA LAGAO\"" ,name4);
    int a;
    printf("\n");
    if(players[0]==3 || players[0]==4){
    printf("\nENTER YOUR CHOICE FOR %s  [3]SIPAHI [4]CHOR=" ,name1);
    scanf("%d" ,&a);
    if((a==3 && players[0]==3) || (a==4 && players[0]==4)){
      printf("TRUE");
    }
    else{
    if(players[0]==4 && players[1]==2){
    p0=p1;
    p1=0;
    }
    if(players[0]==4 && players[2]==2){
    p0=p2;
    p2=0;
    }
    if(players[0]==4 && players[3]==2){
    p0=p3;
    p3=0;
    }  
    printf("FALSE");
    }
    }
    if(players[1]==3 || players[1]==4){
    printf("\nENTER YOUR CHOICE FOR %s  [3]SIPAHI [4]CHOR=" ,name2);
    scanf("%d" ,&a);
    if((a==3 && players[1]==3) || (a==4 && players[1]==4)){
      printf("TRUE");
    }
    else{
    if(players[1]==4 && players[2]==2){
    p1=p2;
    p2=0;
    }
    if(players[1]==4 && players[3]==2){
    p1=p3;
    p3=0;
    }
    if(players[1]==4 && players[0]==2){
    p1=p0;
    p0=0;
    }
    printf("FALSE");
    }
    }
    if(players[2]==3 || players[2]==4){
    printf("\nENTER YOUR CHOICE FOR %s  [3]SIPAHI [4]CHOR=" ,name3);
    scanf("%d" ,&a);
    if((a==3 && players[2]==3) || (a==4 && players[2]==4)){
      printf("TRUE");
    }
    else{
    if(players[2]==4 && players[3]==2){
    p2=p3;
    p3=0;
    }
    if(players[2]==4 && players[0]==2){
    p2=p0;
    p0=0;
    }
    if(players[2]==4 && players[1]==2){
    p2=p1;
    p1=0;
    }
    printf("FALSE");
    }
    }
    if(players[3]==3 || players[3]==4){
    printf("\nENTER YOUR CHOICE FOR %s  [3]SIPAHI [4]CHOR=" ,name4);
    scanf("%d" ,&a);
    if((a==3 && players[3]==3) || (a==4 && players[3]==4)){
      printf("TRUE");
    }
    else{
    if(players[3]==4 && players[0]==4){
    p3=p0;
    p0=0;
    }
    if(players[3]==4 && players[1]==4){
    p3=p1;
    p1=0;
    }
    if(players[3]==4 && players[2]==4){
    p3=p2;
    p2=0;
    }
    printf("FALSE");
    }
    }
    
    
    
    if(players[0]==3){
    printf("\nSIPAHI for %s" ,name1);
    }
    if(players[0]==4){
    printf("\nCHOR for %s" ,name1);
    }
    if(players[1]==3){
    printf("\nSIPAHI for %s" ,name2);
    }
    if(players[1]==4){
    printf("\nCHOR for %s" ,name2);
    }
    if(players[2]==3){
    printf("\nSIPAHI for %s" ,name3);
    }
    if(players[2]==4){
    printf("\nCHOR for %s " ,name3);
    }
    if(players[3]==3){
    printf("\nSIPAHI for %s" ,name4);
    }
    if(players[3]==4)
    printf("\nCHOR for %s" ,name4);
    ++c;
  }
  printf("\n%d,%d,%d,%d" ,p0,p1,p2,p3);
  if(p0>p3){
    if(p0>p2){
      if(p0>p1){
        printf("\n%s WINS" ,name1);
        printf("\nPLAYER 1 SCORE %d" ,p0);
      }
      else {
      printf("\n%s WINS" ,name2);
      printf("\nPLAYER 2 SCORE %d",p1);
       }
    }
    else {
    printf("\n%s WINS" ,name3);
    printf("\nPLAYER 3 SCORE %d" ,p2);
    }
  }
  else{
    if(p1>p3){
      if(p1>p2){
        printf("\n%s WINS" ,name2 );
        printf("\nPLAYER 2 SCORE %d" ,p1 );
      }
      else {
      printf("\n%s WINS" ,name3 );
      printf("\nPLAYER 3 SCORE %d" ,p2);
      }
    }
    else{
      if(p2>p3){
        printf("\n%s WINS" ,name3 );
        printf("\nPLAYER 3 SCORE %d",p2);
      }
      else {
      printf("\n%s WINS" ,name4);
      printf("\nPLAYER 4 SCORE %d",p3);
      }
    }
  }
  return 0;
}