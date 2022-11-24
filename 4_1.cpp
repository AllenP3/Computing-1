#include <iostream>

int compare(int i1,int i2){
    
    if (i1 > i2)
        return 1;
    else if (i1 < i2)
        return -1;
    else if (i1 == i2)
        return 0;
 
}

int signum(float x){
    
    if(x > 0)
        return 1;
    else if(x < 0)
        return -1;
    else if(x == 0)
        return 0;
}
