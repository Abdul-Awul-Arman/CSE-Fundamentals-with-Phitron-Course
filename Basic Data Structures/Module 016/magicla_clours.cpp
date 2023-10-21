#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int n;
        cin >> n;
        char c;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            cin >> c;

            if (st.empty())
            {
                st.push(c);
            }
            else if (c == 'R')
            {
                if (st.top() == 'B' || st.top() == 'G')
                {
                    if (st.top() == 'B')
                    {
                        
                        int x= st.top();
                        st.pop();
                        if (!st.empty())
                        {
                            if (st.top() == 'P')
                            {
                                st.pop();
                            }
                            else if(x=='B')
                            {
                                st.push('P');
                            }
                            else
                            {
                                st.push(c);
                            }
                        }
                        else
                        {
                            st.push('P');
                        }
                    }
                    else if (st.top() == 'G')
                    {
                       int x= st.top();
                        st.pop();
                        if (!st.empty())
                        {
                            if (st.top() == 'Y')
                            {
                                st.pop();
                            }
                            else if(x=='G')
                            {
                                st.push('Y');
                            }
                            else
                            {
                                st.push(c);
                            }
                        }
                        else
                        {
                            st.push('Y');
                        }
                    }
                }
                else
                {
                    
                    if(!st.empty())
                    {
                        if(st.top()==c)
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push(c);
                        }
                    }
                    else
                    {
                        st.push(c);
                    }
                }
            }
            else if (c == 'B')
            {
                if (st.top() == 'R' || st.top() == 'G')
                {
                    if (st.top() == 'G')
                    {
                        int x= st.top();
                        st.pop();
                        if (!st.empty())
                        {
                            if (st.top() == 'C')
                            {
                                st.pop();
                            }
                            else if(x=='G')
                            {
                                st.push('C');
                            }
                            else
                            {
                                st.push(c);
                            }
                        }
                        else
                        {
                            st.push('C');
                        }
                    }
                    else if (st.top() == 'R')
                    {
                       int x= st.top();
                        st.pop();
                        if (!st.empty())
                        {
                            if (st.top() == 'P')
                            {
                                st.pop();
                            } 
                            else if(x=='R')
                            {
                                st.push('P');
                            }
                            else
                            {
                                st.push(c);
                            }
                        }
                        else
                        {
                            st.push('P');
                        }
                    }
                }
                else
                {
                   if(!st.empty())
                    {
                        if(st.top()==c)
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push(c);
                        }
                    }
                    else
                    {
                        st.push(c);
                    }
                    
                }
            }
            else if (c == 'G')
            {
                if (st.top() == 'R' || st.top() == 'B')
                {
                    if (st.top() == 'R')
                    {
                       int x= st.top();
                        st.pop();
                        if (!st.empty())
                        {
                            if (st.top() == 'Y')
                            {
                                st.pop();
                            } 
                            else if(x=='R')
                            {
                                st.push('Y');
                            }
                            else
                            {
                                st.push(c);
                            }
                        }
                        else
                        {
                            st.push('Y');
                        }
                    }
                    else if (st.top() == 'B')
                    {
                        int x= st.top();
                        st.pop();
                        if (!st.empty())
                        {
                            if (st.top() == 'C')
                            {
                                st.pop();
                            } 
                            else if(x=='B')
                            {
                                st.push('C');
                            }
                            else
                            {
                                st.push(c);
                            }
                        }
                        else
                        {
                            st.push('C');
                        }
                    }
                }
                else
                {
                   
                    if(!st.empty())
                    {
                        if(st.top()==c)
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push(c);
                        }
                    }
                    else
                    {
                        st.push(c);
                    }
                }
            }
        }

        stack<char> st2;

        while (!st.empty())
        {
           st2.push(st.top());
            st.pop();
        }

        while(!st2.empty())
        {
            cout<<st2.top();
            st2.pop();
        }
        cout<<endl;
    }
    return 0;
}