#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int Nboxes, Xgoldcoin, Sswaps;
        scanf("%d %d %d", &Nboxes, &Xgoldcoin, &Sswaps);
        
        for(int i=1; i<=Sswaps; i++){
            int box1, box2;
            scanf("%d %d", &box1, &box2);
            if(Xgoldcoin==box1) Xgoldcoin = box2;
            else if(Xgoldcoin==box2) Xgoldcoin = box1;
        }
        printf("%d\n", Xgoldcoin);
    }
}
