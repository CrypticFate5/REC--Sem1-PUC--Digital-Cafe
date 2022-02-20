#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int ansarr[t];
    for(int i=0;i<t;i++){
        int m,n,d,temp;
        scanf("%d %d",&n,&m);
        int arr[n];
        d=n-m;
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        int *p=&arr[0];
        for(int j=0;j<n;j++){
            for(int k=0;k<n-j-1;k++){
                if(*(p+k)>*(p+k+1)){
                    temp=*(p+k);
                    *(p+k)=*(p+k+1);
                    *(p+k+1)=temp;
                }
            }
        }
        // for(int j=0;j<n;j++){
        //     printf("%d ",arr[j]);
        // }
        int summin=0,summax=0;
        for(int j=0;j<d;j++){
            summin+=arr[j];
        }
        for(int j=n-1;j>n-d-1;j--){
            summax+=arr[j];
        }
        int ans=summax-summin;
        // printf("%d",ans);
        ansarr[i]=ans;
    }
    for(int i=0;i<t;i++){
        printf("%d\n",ansarr[i]);
    }
}
