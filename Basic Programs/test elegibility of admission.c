//Find eligibility of admission
/*Criteria:
Marks in math>=65
Marks in phy>=55
Marks in chem>50
Total in all three sub>=190
or,
Total in math+phy>=140*/
#include<stdio.h>
int main(){
    int phy, chem, math, total, totalmp;
    printf("Eligibility criteria:\n");
    printf("Marks in physics>=55:\n");
    printf("Marks in chemistry>=50:\n");
    printf("Marks in math>=65:\n");
    printf("Marks in total three subject>=190\n:");
    printf("Marks in math and physics>=140\n");
    printf("*************************************\n");

    printf("Enter the marks obtain in physics:");
    scanf("%d",&phy);
    printf("Enter the marks obtain in chemistry:");
    scanf("%d",&chem);
    printf("Enter the marks obtain in math:");
    scanf("%d",&math);


if(phy>=55)
    if(chem>=50)
      if(math>=65)
      if((phy+chem+math)>=190||(math+phy)>=140)
      printf("The candidate is eligible for admission");
else
    printf("The candidate is not eligible for admission");


 return 0;
}
