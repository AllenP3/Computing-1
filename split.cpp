#include <iostream>
float split(float x, float y, int splits){
    float largest, temp;
   
    for (int i=0; i < splits; ++i){
        temp = y;
        y = x;
        x = temp/2;
    }
    
    x = static_cast<int>(x);
    y = static_cast<int>(y);
    
    std::cout << x << " x " << y << std::endl;
    return x * 2 + y * 2;
}
float split(float x, float y, int splits, float* rex, float* resy){
     float temp;
     for (int i=0; i < splits; ++i){
     if(x<y){
        temp = y;
        y = temp/2;
    }
    else{
        temp = x;
        x = temp/2;
           }
}
     x = static_cast<int>(x);
     y = static_cast<int>(y);
     
      std::cout << x << " x " << y << std::endl;
      
      
      *rex = x;
      *resy = y;
      
      return x * 2 + y * 2;
}