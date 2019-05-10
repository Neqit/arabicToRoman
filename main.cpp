#include <iostream>
//#include <utility>
//#include <string>

using namespace std;

string ArabicToRoman(int arabic){

    string answer;
    const auto romanNumbers = { // auto = initializer_list<pair<unsigned int,const char*>> 
        make_pair(1000000u,"M"),
        make_pair(500000u,"D"),
        make_pair(100000u,"C"),
        make_pair(50000u,"L"),
        make_pair(10000u,"X"),
        make_pair(5000u,"V"),
        make_pair(1000u,"m"),
        make_pair(500u,"d"),
        make_pair(100u,"c"),
        make_pair(50u,"l"),
        make_pair(10u,"x"),
        make_pair(5u,"v"),
        make_pair(4u, "iv"),
        make_pair(1u,"i"),
    };


    for (auto& pair : romanNumbers) //auto& = pair<unsigned int,const char*>
    {
        while (pair.first <= arabic)
        {
            arabic -= pair.first;
            answer += pair.second;
        }
    }

    return answer;
}

int main()
{
    //Example
    string x = ArabicToRoman(2019);
    cout<<x<<endl;
    return 0;
}
