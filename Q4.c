main()
{
    int i,n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i*i;
    printf("square of sum of n number is %d",sum);
    getch();

}
