#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter coordinate x1 : ");
    scanf("%d",&x1);
    printf("Enter coordinate y1 : ");
    scanf("%d",&y1);
    printf("Enter coordinate x2 : ");
    scanf("%d",&x2);
    printf("Enter coordinate y2 : ");
    scanf("%d",&y2);
    printf("Enter coordinate x3 : ");
    scanf("%d",&x3);
    printf("Enter coordinate y3 : ");
    scanf("%d",&y3);
    float area =0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    area == 0 ? printf("points are collinear %f\n",area):printf("points are not collinear %f\n",area);
    return 0;
}