main()
{

    int i,n,sum=0;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+2*i-1;
        printf("sum of n  odd number  is %d",sum);
    getch();
}
