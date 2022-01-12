#include <iostream>
#include <map>

using namespace std;

void map_basics()
{
    map<string, int> marks;
    marks["Tom"] = 90;
    marks["Chunyue"] = 88;
    marks["Mary"] = 98;
    cout << "Tom's score is: " << marks["Tom"] << endl;

    // finding a key value pair
    map<string, int>::iterator pos = marks.find("Harry");
    if (pos == marks.end())
    {
        cout << "Harry is not in the class :(" << endl;
    }
    else
    {
        cout << "Harry's score is: " << (*pos).second;
    }

    // iterate through the map
    map<string, int>::iterator pos2;
    for (pos2 = marks.begin(); pos2 != marks.end(); pos2++)
    {
        cout << "The score of " << pos2->first << " is " << (*pos2).second << endl;
    }
}

void multimap_basics()
{
    multimap<string, string> friends;
    friends.insert(make_pair("Tom", "Bobby"));
    friends.insert(make_pair("Tom", "Tracy"));
    friends.insert(make_pair("Maria", "Tracy"));

    // iterator through the multimap
    multimap<string, string>::iterator lower = friends.lower_bound("Tom");
    multimap<string, string>::iterator upper = friends.upper_bound("Tom");
    cout << "Tom's friends: ";
    for (multimap<string, string>::iterator pos = lower; pos != upper; pos++)
    {
        cout << pos->second << " ";
    }
    cout << endl;

    // initialize container
    multimap<int, int> mp;

    // insert elements in random order
    mp.insert(make_pair(2, 30));
    mp.insert(make_pair(1, 40));
    mp.insert(make_pair(2, 60));
    mp.insert(make_pair(2, 20));
    mp.insert(make_pair(1, 50));
    mp.insert(make_pair(4, 50));

    // when 2 is present
    multimap<int, int>::iterator it = mp.lower_bound(2);
    cout << "The lower bound of key 2 is ";
    cout << (*it).first << " "
         << (*it).second << endl;

    it = mp.upper_bound(2);
    cout << "The upper bound of key 2 is ";
    cout << (*it).first << " "
         << (*it).second << endl;

    // when 3 is not present
    it = mp.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*it).first << " "
         << (*it).second << endl;

    it = mp.upper_bound(3);
    cout << "The upper bound of key 3 is ";
    cout << (*it).first << " "
         << (*it).second << endl;

    // when 5 exceeds
    it = mp.lower_bound(5);
    cout << "The lower bound of key 5 is ";
    cout << (*it).first << " "
         << (*it).second << endl;

    it = mp.upper_bound(5);
    cout << "The upper bound of key 5 is ";
    cout << (*it).first << " "
         << (*it).second << endl;

    // when 0 exceeds
    it = mp.lower_bound(0);
    cout << "The lower bound of key 0 is ";
    cout << (*it).first << " "
         << (*it).second << endl;

    it = mp.upper_bound(0);
    cout << "The upper bound of key 0 is ";
    cout << (*it).first << " "
         << (*it).second << endl;
}

int main()
{
    // map_basics();
    // multimap_basics();
}