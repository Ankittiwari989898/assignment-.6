main()
{
    int a,b,l;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(l=1;l<=a*b;l++)
        if(l%a==0&&l%b==0)
    break;
    printf("lcm of %d and %d is %d",a,b,l);
    getch();



}
