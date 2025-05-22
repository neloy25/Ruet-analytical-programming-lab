#include<stdio.h>

int main() {
    int x,y,w,h,r;
    scanf("%d%d%d%d%d", &w,&h,&x,&y,&r);
    if(r <= x && r <= y && w >= x + r && h >= y + r){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    return 0;
}