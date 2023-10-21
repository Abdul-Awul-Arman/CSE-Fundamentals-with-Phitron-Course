for(int i=1;i<=n;i++)
    {
        cout<<"List Of"<<" "<<i<<":"<<" ";
        for(int val:adjmatrix[i])
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }