/*#include <iostream>

using namespace std;


void swap(int& a_ref,int& b_ref){
    int temp = a_ref;
    a_ref = b_ref;
    b_ref = temp;

}

void swap2(int& a_ref,int& b_ref,int& c_ref, int first, int second){
    if (first == 1){
        int temp = a_ref;
        if(second == 1){}
        if(second == 2){
            a_ref = b_ref;
            b_ref = temp;
        }
        else if (second == 3){
            a_ref = c_ref;
            c_ref = temp;
        }
    }
    else if (first == 2){
        int temp = b_ref;
        if(second == 2){}
        if(second == 3){
            b_ref = c_ref;
            c_ref = temp;
        }
        else if (second == 1){
            b_ref = a_ref;
            a_ref = temp;
        }

    }
    else if (first == 3){
        int temp = c_ref;
        if(second == 3){}
        if(second == 1){
            c_ref = a_ref;
            a_ref = temp;
        }
        else if (second == 2){
            c_ref = b_ref;
            b_ref = temp;
        }

    }
    else{}
}

int swapcount(int& c_ref, int& d_ref){
    static int c = 0;
    c++;

    if(c%2 == 0){
        int temp = c_ref;
        c_ref = d_ref;
        d_ref = temp;
    }
    return c;
}*/
#include <iostream>


void swap(int& a_ref,int& b_ref){
    int temp = a_ref;
    a_ref = b_ref;
    b_ref = temp;
}

void swap2(int& a_ref,int& b_ref,int& c_ref, int first, int second){
    if (first == 1){
        int temp = a_ref;
        if(second == 1){}
        else if(second == 2){
            a_ref = b_ref;
            b_ref = temp;
        }
        else if(second == 3){
            a_ref = c_ref;
            c_ref = temp;
        }
        else{a_ref = second;}
    }
    else if(first == 2){
        int temp = b_ref;
        if(second == 2){}
        else if(second == 3){
            b_ref = c_ref;
            c_ref = temp;
        }
        else if(second == 1){
            b_ref = a_ref;
            a_ref = temp;
        }
        else{b_ref = second;}
    }
    else if(first == 3){
        int temp = c_ref;
        if(second == 3){}
        else if(second == 1){
            c_ref = a_ref;
            a_ref = temp;
        }
        else if(second == 2){
            c_ref = b_ref;
            b_ref = temp;
        }
        else{c_ref = second;}
    }
    else{
        if(second == 1){a_ref=first;}
        else if(second == 2){b_ref=second;}
        else if(second == 3){c_ref=second;}
    }  
}
int swapcount(int& a_ref, int& b_ref){
    
}