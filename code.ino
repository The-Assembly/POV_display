 int C[] = {0,1,1,1,0, 1,0,0,0,1, 1,0,0,0,1, 1,0,0,0,1, 1,0,0,0,1};
 int E[] = {0,1,1,1,0, 1,0,1,0,1, 1,0,1,0,1, 1,0,1,0,1, 1,0,1,0,1};
 int I[] = {1,0,0,0,1, 1,0,0,0,1, 1,1,1,1,1, 1,0,0,0,1, 1,0,0,0,1};
 int N[] = {1,1,1,1,1, 0,1,0,0,0, 0,0,1,0,0, 0,0,0,1,0, 1,1,1,1,1};
 int space[] = {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0};
 int* alpha[]= {A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,space,1,2,3,4,5,6,7,8,9,0};//,T,U,V,W,X,Y,Z};
 int letterSpace;
 int dotTime;
 void setup()
 { Serial.begin(9600);
// setting the ports of the leds to OUTPUT
 for( int i = 9; i<14 ;i++ )
 { pinMode(i, OUTPUT);
 }

// defining the space between the letters (ms)
 letterSpace =5;
 // defining the time dots appear (ms)
 dotTime =1;
}
 void printLetter(int letter[])
 {
 int y;
 int x = 0;
// printing the first y row of the letter
 for (y=7; y<12; y++)
 {
 digitalWrite(y+2, letter[x]);
 x++;
 }
 delay(dotTime);
// printing the second y row of the letter
x=0;
 for (y=7; y<12; y++)
 {
 digitalWrite(y+2, letter[x+5]);
 x++;
 }
 delay(dotTime);
// printing the third y row of the letter
x = 0;
 for (y=7; y<12; y++)
 {
 digitalWrite(y+2, letter[x+10]);
 x++;
 }
 delay(dotTime);
 x=0;
 for(y = 7; y<12; y++) {
 digitalWrite(y+2, letter[x+15]);
 x++;
 }
 delay(dotTime);
 x=0;
for(y = 7; y<12; y++) {
 digitalWrite(y+2, letter[x+20]);
 x++;
 }
 delay(dotTime);
 // printing the sspace between the letters*/
 x=0;
 for (y=7; y<12; y++)
 {
 digitalWrite(y+2, 0);
 }
 delay(letterSpace);
 }
 
 void loop()//write here =) enjoy subscribe to my channel if you like the project
 {
 //printLetter (A);
 //printLetter (B);
 //printLetter (M);
 printLetter (N);
 printLetter (I);
 printLetter (C);
 printLetter (E);
 printLetter (space);
 printLetter (space);
 printLetter (space);
 printLetter (space);
 printLetter (space);
 printLetter (space);
// printLetter (G);
}
