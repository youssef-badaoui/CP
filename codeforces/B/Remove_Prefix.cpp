    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <iterator>
    #include <set>

    using namespace std;

    ll main()
    {
        long long t;
        cin >> t;
        while(t--)
        {
            long long l;
            long long i;
            cin >> l;
            vector<long>v(l);
            set<long>see;
            set<long>::iterator it;
            i = 0;
            while(i < l)
                cin >> v[i++];
            i--;//back to the last posistion of the vector;
            // here we gonna start from the end of the vector looking for any duplicating.
            while(i > -1)
            {
                it = see.find(v[i]);
                //if the iterator poll at the end of the set means that no duplication finded, and we insert the element to the set.
                //else we gonna have to delet all the rest of the vector. 
                if(it != see.end())
                    break;
                else
                    see.insert(v[i]);
                i--;
            }
            i++;
            cout << i << '\n';
        }
    }