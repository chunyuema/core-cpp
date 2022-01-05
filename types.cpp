#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <iomanip>
using namespace std;

struct time_of_day{
    int sec; 
    int min;
    int hour;
};

struct working_hours{
    time_of_day start_work;
    time_of_day end_work;
};

int integer_type(){
    int height = 480; 
    int width = 640;
    int ratio = width / height;
    float ratio1 = width / height;
    float another_ratio = width / (float) height;
    cout << ratio << endl;
    cout << ratio1 << endl;
    cout << another_ratio << endl;

    cout << "Size of integer types: " << endl;
    cout << sizeof(int8_t) << endl;
    cout << sizeof(int16_t) << endl;
    cout << sizeof(int32_t) << endl;
    cout << sizeof(int64_t) << endl;
    return 0;
}

int floating_type(){
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;

    double one = 1;
    double two = 2.0;
    double one_million = 1e6;
    double one_billion = 1'000'000'000.;
    cout << one << " " << two << " " << one_million << one_billion << endl;
}

int character_type(){
    cout << "signed char and unsigned char both exists and should be treated as numeric types" << endl;

    char c = '~';
    cout << c << " " << (signed short) c << endl;
    c += 2;
    cout << c << " " << (signed short) c << endl;

    char c1 = -128;
    cout << c1 << endl;

    // char c2;
    // do {
    //     cin >> c2;
    // } while (isdigit(c2));

    // char c3;
    // do {
    //     cin >> c3;
    //     if (islower(c3)) c3 = toupper(c3);
    //     cout << c3 << endl;
    // } while (c3 != 'Q');

    cout << "new line is \n in C++ and" << endl;
    cout << R"(new line is \n in C++ and "quote texts" use quotes)" << endl;
    cout << R"(Mary had a little lamb, 
                                its fleece was white and snow!)" << endl;
}

int boolean_type(){
    bool b = false; 
    cout << b << endl;
}

int initializer(){
    int i1 = 1;
    int i2 = int(2);
    int i3(3);

    // new from C++ 11: but should be avoided
    int i4{4}; 
    int i5 = {5};
    cout << i1 << i2 << i3 << i4 << i5 << endl;
    return 0;
}

int default_values(){
    char c;
    int i;
    bool b; 
    cout << "Hi" << c << endl;
    cout << "Hi" << i << endl; 
    cout << "Hi" << b << endl;
    return 0; 
}

int storage_class(){


}

int type_alias(){
    typedef tuple<string, int> name_year_t;
    vector <name_year_t> beatles;
    beatles.push_back(make_tuple("John", 1940));
    beatles.push_back(make_tuple("Paul", 1940));
    beatles.push_back(make_tuple("George", 1940));
    beatles.push_back(make_tuple("Ringo", 1940));
    for (name_year_t musician : beatles){
        cout << get<0>(musician) << " " << get<1>(musician) << endl;
    }
}

void print_time(time_of_day time){
    cout << setw(2) << setfill('0') << time.hour << ":";
    cout << setw(2) << setfill('0') << time.min << ":";
    cout << setw(2) << setfill('0') << time.sec << endl;
}

int using_structure(){
    time_of_day start_time; 
    start_time.sec = 0; 
    start_time.min = 30; 
    start_time.hour = 8;
    print_time(start_time);

    time_of_day lunch_time{0, 0, 13};
    print_time(lunch_time);

    working_hours weekly{{0, 30, 8}, {0, 0, 17}};
    cout << "weekday: " << endl;
    print_time(weekly.start_work);
    print_time(weekly.end_work);
    return 0;
}

int main(){
    // integer_type();
    // floating_type();
    // character_type();
    // boolean_type();
    // initializer();
    // default_values();
    // type_alias();
    // using_structure();
    return 0;
}