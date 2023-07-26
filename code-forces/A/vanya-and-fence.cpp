 #include<iostream>
 #include<stdio.h>
 
 using namespace std;
 
 int main()
 {
   int numPeople, heightFence, heightPerson, widthRoad=0;
 
   scanf("%d %d", &numPeople, &heightFence);
 
   for (int i=0; i<numPeople; i++) {
      scanf("%d6", &heightPerson);
      if (heightPerson > heightFence) {
         widthRoad += 2;
      } else {
         widthRoad++;
      }
   }
 
   printf("%d", widthRoad);
   
 }
