int x,y;
    cout<<"Enter Year 1:";
    cin>>x;
    cout<<"Enter Year 2:";
    cin>>y;

    while(x<=y)
    {
        if((x%4==0 && x%100!=0) || (x%400==0))
            cout<<x<<"\t";  
        x++;
    