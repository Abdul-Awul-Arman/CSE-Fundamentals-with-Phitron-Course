   printf("%d %d",maxindx,minindx);
    
    int tem=a[maxindx];
    a[maxindx]=a[minindx];
    a[minindx]=tem;
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }