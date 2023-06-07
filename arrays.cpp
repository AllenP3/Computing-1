//when calling an array from a function, the values of the array can be changed
//in the event that this is not desired, use const int arr[] as the parameter
//within the scope of the function where the array is declared with a const modifier, the array cannot be changed
//passing an imported const array to another function requires the use of const modifier in both functions
//error will be generated otherwise due to violation of data security
//only arrays are modifiable inside funciton, so they need to be declared as constant if not desired
//vectors are not modifiable within a function where it is called