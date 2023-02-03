int t;
    cin >> t;
    while(t--){
        int x , y;
        int count_x =0 , count_y =0;
        cin >> x >> y;
        if(x < y || x == y){
          cout << abs(x -  y) <<endl;
        }
        else if(y < x){
            if(x%2 != 0 && y%2 == 0 || y%2 != 0 && x%2 == 0){
                x = x+1 ;
                count_x++;
                do{
                    y= y+2 ; 
                    count_y++;
                }while(x != y);
            }
            else{
                 do{
                    y= y+2 ; 
                    count_y++;
                }while(x != y);
            }
            cout << count_x + count_y <<endl;
        }
    }