#include <stdio.h>

int main(void){
int l;
int w;
int h;
printf("What is the height of the box?\n");
scanf("%d", &h);
printf("What is the lenghth of the box?\n");
scanf("%d", &l);
printf("What is the width of the box?\n");
scanf("%d", &w);
printf("The volume of the box is %d units cubed.\n", h*l*w);

return 0;
}
