#include <stdio.h>
int count_arr(char s[],int n,char value){
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]==value){
            count++;
        }
    }
    return count;
}

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    int n;
	    scanf("%d",&n);
	    char s[n+1];
	    scanf("%s",&s);
	    int count_y=count_arr(s,n,'Y');
	    int count_i=count_arr(s,n,'I');
	    int count_n=count_arr(s,n,'N');
	    if(count_n+count_i==n&&count_i!=0){
	        printf("INDIAN\n");
	    }
	    else if(count_n+count_y==n&&count_y!=0){
	        printf("NOT INDIAN\n");
	    }
	    else{
	        printf("NOT SURE\n");
	    }
	}

}


