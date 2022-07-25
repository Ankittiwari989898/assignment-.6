main()
{

    int i,n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+2*i;
    printf(" sum of even number is %d",sum);
    getch();
}
