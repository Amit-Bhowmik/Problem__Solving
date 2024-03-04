int n;
    cin >> n;

    char ch[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            c++;
        }
    }
    cout << c;