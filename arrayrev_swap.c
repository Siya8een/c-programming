//reversing a string using an array;


int main(){
    int arr[4];
    printf("enter array elements\n");
    for (int i=0;i<=3;i++)
    {
    scanf("%d", &arr[i]);
    }
    int mom;
    for (int i=0;i<=3/2;i++){
        mom=arr[i];
        arr[i]=arr[3-i];
        arr[3-i]=mom;
        
    };
    for (int i=0;i<=3;i++)
    {
     printf("%denter array elements %d\n",i,arr[i]);
    };
    return 0; 
}
