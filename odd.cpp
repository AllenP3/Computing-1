#include <iostream>
#include <map>


using namespace std;


int main(){
    map<string, int>mapofnumbers;

    mapofnumbers.insert(make_pair("earths", 1));
    mapofnumbers["earths"] = 2;
    

    map<string, int> :: iterator allen = mapofnumbers.begin();
   
   cout << allen->first<<endl;
   
   /* while (it != mapofnumbers.end()){

        cout << it->first<<" :: "<<it->second<<endl;
        it++;
    }

    if(mapofnumbers.insert(make_pair("earth", 1)).second == false){
        cout <<"Element with key 'earth' not inserted because already existed"<<endl;

    }

    if(mapofnumbers.find("sun") != mapofnumbers.end())
        cout << "word 'sun' found"<<endl;
    if(mapofnumbers.find("mars") == mapofnumbers.end())
        cout << "word 'mars' not found"<<endl;*/
        return 0;



    

}