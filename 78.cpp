#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // creation
    map<string, int> mp;

    // insertion

    // method 1
    pair<string, int> p1 = make_pair("om", 2);
    mp.insert(p1);

    // method 2
    pair<string, int> p2("asati", 5);
    mp.insert(p2);

    // method 3
    mp["hello"] = 8;

    cout << mp["hello"] << endl;
    cout << mp["om"] << endl;
    // cout<<mp.at("tt")<<endl; //this not will not gave 0
    cout << mp["tt"] << endl;
    // cout<<mp.at("tt")<<endl; // this will gave 0
    cout << mp.size() << endl;

    // to check presence
    cout << mp.count("bro") << endl;
    mp["om"]=6;
    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second;
    // }

    // OR

    // unordered_map<string,int> :: iterator it=mp.begin();
    // // if it is ordered map ot will print in sort way but in case it will not
    // while (it !=mp.end())
    // {
    //      cout << it->first << " " << it->second<<endl;
    //      it++;
    // }
    // we use map here
    map<string,int> :: iterator it=mp.begin();
    while (it !=mp.end())
    {
         cout << it->first << " " << it->second<<endl;
         it++;
    }
    

    return 0;
}