#include<stdio.h>
 
int main()
{
	int i,j,k,t;
	printf("請輸入三個數字:\n");
	scanf("%d%d%d",&i,&j,&k);
	if(i>j){
		t=i;
		i=j;
		j=t;
	}
	if(i>k){
		t=i;
		i=k;
		k=t;
	}
	if(j>k){
		t=j;
		j=k;
		k=t;
	}
	printf("從小到大的排列是:%d %d %d\n",i,j,k);
	
	return 0;
}
