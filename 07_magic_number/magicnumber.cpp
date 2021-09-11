#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int i, yournumber, k, l, m, p, s, t, a, g, h, d, o, q, u;
    cout << "I'd like to play a game. Think of any number from 0 to 100, please. \n";

    //cin >> yournumber;

    cout << "Is it more than 50? (1 - yes, 2 - no, 3 - it's 50): \n";

    cin >> i;
        if ( i == 1 ) 
        {
            cout << "Is it more than 75? (1 - yes, 2 - no, 3 - it's 75): \n";
            cin >> k;
            
            if ( k == 1 )
            {
                cout << "Is it more than 87? (1 - yes, 2 - no, 3 - it's 87): \n";
                cin >> m;

                if ( m == 1 )
                {
                    cout << "Is it more than 94? (1 - yes, 2 - no, 3 - it's 94): \n";
                    cin >> s;

                    if ( s == 1 )
                    {
                        cout << "Is it more than 97? (1 - yes, 2 - no, 3 - it's 97): \n";
                        cin >> t;

                        if ( t == 1 )
                        {
                            cout << "Is it 98? (1 - yes, 2 - no): \n";
                            cin >> a;

                            if ( a == 1 )
                            {
                                cout << "Yay! It's 98!\n";
                            } 
                            else cout << "Yay! It's 99!\n";

                        }

                        if ( t == 2 )
                        {
                            cout << "Is it 96? (1 - yes, 2 - no): \n";
                            cin >> a;

                            if ( a == 1 )
                            {
                                cout << "Yay! It's 96!\n";
                            } 
                            else cout << "Yay! It's 95!\n";
                        }

                    }

                    if ( s == 2 )
                    {
                        cout << "Is it more than 90? (1 - yes, 2 - no, 3 - it's 90): \n";
                        cin >> t;

                        if ( t = 1 )
                        {
                            cout << "Is it more than 92? (1 - yes, 2 - no, 3 - it's 92): \n";
                            cin >> a;

                            if ( a == 1 ) cout << "Yay! It's 93!\n";
                            if ( a == 2 ) cout << "Yay! It's 91!\n";
                            if ( a == 3 ) cout << "Yay! It's 92!\n";
                        }
                    }

                    if ( s == 3 )
                    {
                        cout << "Yay! 94 is your number!\n";
                    }
                }

                if ( m == 2 )
                {
                    cout << "Is it more than 81? (1 - yes, 2 - no, 3 - it's 81): \n";
                    cin >> s;
                    
                    if ( s == 1 )
                    {
                        cout << "Is it more than 84? (1 - yes, 2 - no, 3 - it's 84): \n";
                        cin >> t;
                        
                        if ( t == 1 )
                        {
                            cout << "Is it 85? (1 - yes, 2 - no): \n";
                            cin >> a;
                            
                            if ( a == 1 ) cout << "Yay! It is 85! \n";
                            else cout << "Yay! It is 86! \n";
                        }

                        if ( t == 2 )
                        {
                            cout << "Is it 83? (1 - yes, 2 - no): \n";
                            cin >> a;
                            
                            if ( a == 1 ) cout << "Yay! It is 83! \n";
                            else cout << "Yay! It is 82! \n";
                        }

                        if ( t == 3 ) cout << "Yay! It's 84! \n";
                    };
                }

                if ( m == 3 )
                {
                    cout << "Yay! 87 is your number!\n";
                }

            }
            
            if ( k == 2 )
            {
                cout << "Is it more than 62? (1 - yes, 2 - no, 3 - it's 62): \n";
                cin >> m;

                if ( m == 1 )
                {
                    cout << "Is it more than 69? (1 - yes, 2 - no, 3 - it's 69): \n";
                    cin >> g;

                    if ( g == 1 )
                    {
                        cout << "It is more than 72? (1 - yes, 2 - no, 3 - it's 72): \n";
                        cin >> h;

                        if ( h == 1 )
                        {
                            cout << "Is it 73? (1 - yes, 2 - no): \n";
                            cin >> d;

                            if ( d == 1 ) cout << "Yay! It's 73! \n";
                            else cout << "Yay! It's 74! \n";

                        }

                        if ( h == 2 )
                        {
                            cout << "Is it 71? (1 - yes, 2 - no): \n";
                            cin >> d;

                            if ( d == 1 ) cout << "Yay! It's 71! \n";
                            else cout << "Yay! It's 70! \n"; 
                        }

                        if ( h == 3 ) cout << "Yay! It's 73! \n";
                    };

                    if ( g == 2 )
                    {
                        cout << "It is more than 65? (1 - yes, 2 - no, 3 - it's 65): \n";
                        cin >> h;

                        if ( h == 1 )
                        {
                            cout << "Is it more than 67? (1 - yes, 2 - no, 3 - it's 67): \n";
                            cin >> d;

                            if ( d == 1 ) cout << "Yay! It's 68! \n";
                            if ( d == 2 ) cout << "Yay! It's 66! \n";
                            if ( d == 3 ) cout << "Yay! It's 67! \n";
                           
                        }

                        if ( h == 2 )
                        {
                            cout << "Is it 63? (1 - yes, 2 - no): \n";
                            cin >> d;

                            if ( d == 1 ) cout << "Yay! It's 63! \n";
                            else cout << "Yay! It's 64! \n"; 
                        }

                        if ( h == 3 ) cout << "Yay! It's 69! \n";
                    }
                }

                if ( m == 2 )
                {
                    cout << "Is it more than 56? (1 - yes, 2 - no, 3 - it's 56): \n";
                    cin >> g;

                    if ( g == 1 )
                    {
                        cout << "Is it more than 59? (1 - yes, 2 - no, 3 - it's 59): \n";
                        cin >> h;

                        if ( h == 1 )
                        {
                            cout << "Is it 60? (1 - yes, 2 - no): \n";
                            cin >> d;

                            if ( d == 1 ) cout << "Yay! It's 60!\n";
                            else cout << "Yay! It's 61!\n";
                        }

                        if ( h == 2 )
                        {
                            cout << "Is it 58? (1 - yes, 2 - no): \n";
                            cin >> d;

                            if ( d == 1 ) cout << "Yay! It's 58!\n";
                            else cout << "Yay! It's 57!\n";
                        }

                        if ( h == 3 ) cout << "Yay! It's 59!\n";
                    }

                    if ( g == 2 )
                    {
                        cout << "Is it more than 53? (1 - yes, 2 - no, 3 - it's 53): \n";
                        cin >> h;

                        if ( h == 1 )
                        {
                            cout << "Is it 54? (1 - yes, 2 - no): \n";
                            cin >> d;

                            if ( d == 1 ) cout << "Yay! It's 54!\n";
                            else cout << "Yay! It's 55!\n";
                        }

                        if ( h == 2 )
                        {
                            cout << "Is it 52? (1 - yes, 2 - no): \n";
                            cin >> d;

                            if ( d == 1 ) cout << "Yay! It's 52!\n";
                            else cout << "Yay! It's 51!\n";
                        }

                        if ( h == 3 ) cout << "Yay! It's 53!\n";
                    
                    }
                    
                    if ( g == 3 ) cout << "Yay! It's 56!\n";

                }

                if ( m == 3 ) cout << "Yay! 62 is your number!\n";

            }

            if ( k == 3 ) cout << "Yay! 75 is your number!\n";

        }

        if ( i == 2 ) 
        {
            cout << "Is it more than 25? (1 - yes, 2 - no, 3 - it's 25): \n";
            cin >> l;

            if ( l == 1 )
            {
                cout << "Is it more than 38? (1 - yes, 2 - no, 3 - it's 38): \n";
                cin >> p;

                if ( p == 1 )
                {
                    cout << "Is it more than 44? (1 - yes, 2 - no, 3 - it's 44): \n";
                    cin >> o;

                    if ( o == 1 )
                    {
                        cout << "Is it more than 47? (1 - yes, 2 - no, 3 - it's 47): \n";
                        cin >> q;

                        if ( q == 1 )
                        {
                            cout << "It it more than 49? (1 - yes, 2 - no, 3 - it's 49): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 50! \n";
                            if ( u == 2 ) cout << "Yay! It's 48! \n";
                            if ( u == 3 ) cout << "Yay! It's 49! \n";

                        }

                        if ( q == 2 )
                        {
                            cout << "Is it 46? ( 1 - yes, 2 - no ) \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 46! \n";
                            if ( u == 2 ) cout << "Yay! It's 45! \n";

                        }

                        if ( q == 3 ) cout << "Yay! It's 44! \n";

                    }

                    if ( o == 2 )
                    {
                        cout << "Is it more than 41? (1 - yes, 2 - no, 3 - it's 41): \n";
                        cin >> q;

                        if ( q == 1 )
                        {
                            cout << "It it 42? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 42! \n";
                            if ( u == 2 ) cout << "Yay! It's 43! \n";

                        }

                        if ( q == 2 )
                        {
                            cout << "Is it 39? ( 1 - yes, 2 - no ) \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 39! \n";
                            if ( u == 2 ) cout << "Yay! It's 40! \n";

                        }

                        if ( q == 3 ) cout << "Yay! It's 41! \n";
 
                    }
                }

                if ( p == 2 )
                {
                    cout << "Is it more than 31? (1 - yes, 2 - no, 3 - it's 31): \n";
                    cin >> o;
                    
                    if ( o == 1 )
                    {
                        cout << "Is it more than 35? (1 - yes, 2 - no, 3 - it's 35): \n";
                        cin >> q;

                        if ( q == 1 )
                        {
                            cout << "It it 36? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 36! \n";
                            if ( u == 2 ) cout << "Yay! It's 37! \n";

                        }

                        if ( q == 2 )
                        {
                            cout << "Is it more than 33? ( 1 - yes, 2 - no, 3 - it's 33 ): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 34! \n";
                            if ( u == 2 ) cout << "Yay! It's 32! \n";
                            if ( u == 3 ) cout << "Yay! It's 33! \n";

                        }

                        if ( q == 3 ) cout << "Yay! It's 35! \n";

                    }

                    if ( o == 2 )
                    {
                        cout << "Is it more than 28? (1 - yes, 2 - no, 3 - it's 28): \n";
                        cin >> q;

                        if ( q == 1 )
                        {
                            cout << "It it 29? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 29! \n";
                            if ( u == 2 ) cout << "Yay! It's 30! \n";
                        }

                        if ( q == 2 )
                        {
                            cout << "It it 26? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 26! \n";
                            if ( u == 2 ) cout << "Yay! It's 27! \n";
                        }
                    }

                    if ( o == 3 ) cout << "Yay! It's 31! \n";
                }

                if ( p == 3 )
                {
                    cout << "Yay! 38 is your number!\n";
                }

            }

            if ( l == 2 )
            {
                cout << "Is it more than 12? (1 - yes, 2 - no, 3 - it's 12): \n";
                cin >> p;

                if ( p == 1 ) 
                {
                    cout << "Is it more than 18? (1 - yes, 2 - no, 3 - it's 18): \n";
                    cin >> o;

                    if ( o == 1 )
                    {
                        cout << "Is it more than 22? (1 - yes, 2 - no, 3 - it's 22): \n";
                        cin >> q;

                        if ( q == 1 )
                        {
                            cout << "It it 23? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 23! \n";
                            if ( u == 2 ) cout << "Yay! It's 24! \n";

                        } 
                        
                        if ( q == 2 )
                        {
                            cout << "It it more than 20? (1 - yes, 2 - no, 3 - it's 20): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 21! \n";
                            if ( u == 2 ) cout << "Yay! It's 19! \n";
                            if ( u == 3 ) cout << "Yay! It's 20! \n";

                        } 

                        if ( q == 3 ) cout << "It's 22!\n";
                    }

                    if ( o == 2 )
                    {
                        cout << "Is it more than 15? (1 - yes, 2 - no, 3 - it's 15): \n";
                        cin >> q;

                        if ( q == 1 )
                        {
                            cout << "It it 16? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 16! \n";
                            if ( u == 2 ) cout << "Yay! It's 17! \n";

                        } 
                        
                        if ( q == 2 )
                        {
                            cout << "It it 13? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 13! \n";
                            if ( u == 2 ) cout << "Yay! It's 14! \n";

                        }
                        
                        if ( q == 3 ) cout << "Yay! It's 15!\n";

                    }

                    if ( o == 3 ) cout << "Yay! It's 18!\n";
                }

                if ( p == 2 )
                {
                    cout << "Is it more than 6? (1 - yes, 2 - no, 3 - it's 6): \n";
                    cin >> o;

                    if ( o == 1 )
                    {
                        cout << "Is it more than 9? (1 - yes, 2 - no, 3 - it's 9): \n";
                        cin >> q;
                        
                        if ( q == 1 )
                        {
                            cout << "It it 10? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 10! \n";
                            if ( u == 2 ) cout << "Yay! It's 11! \n";

                        } 

                        if ( q == 2 )
                        {
                            cout << "It it 8? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 8! \n";
                            if ( u == 2 ) cout << "Yay! It's 7! \n";

                        }

                        if ( q == 3 ) cout << "Yay! It's 9!\n";
                    }

                    if ( o == 2 )
                    {
                        cout << "Is it more than 3? (1 - yes, 2 - no, 3 - it's 3): \n";
                        cin >> q;
                        
                        if ( q == 1 )
                        {
                            cout << "It it 4? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 4! \n";
                            if ( u == 2 ) cout << "Yay! It's 5! \n"; 
                        }

                        if ( q == 2 )
                        {
                            cout << "It it 2? (1 - yes, 2 - no): \n";
                            cin >> u;

                            if ( u == 1 ) cout << "Yay! It's 2! \n";
                            if ( u == 2 ) cout << "Yay! It's 1! \n"; 
                        }

                        if ( q == 3 ) cout << "Yay! It's 3!\n";

                    }
                    if ( o == 3 ) cout << "Yay! It's 6!\n";
                }

                if ( p == 3 )
                {
                    cout << "Yay! 12 is your number!\n";
                }


            }

            if ( l == 3 ) cout << "Yay! 25 is your number!\n";

        }

        if (i == 3) 
        {
            cout << "Yay! 50 is your number!\n";
            
        }

    return 0;
}