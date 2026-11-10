 #include<stdio.h>
 int main(){
 	int num[5];
	int max,min;
	int x;
	for (x=0;x<5;x++) {
		scanf("%d",&num[x]);
	}
    max=num[0];
    for (x=1;x<5;x++){
    	if (num[x]>max){
    	max=num[x];
    }
}
    min=num[0];
    for (x=1;x<5;x++){
    	if (num[x]<min){
    	min=num[x];
    	}
    }
    printf("%d %d",max,min);
    return 0;
    }

