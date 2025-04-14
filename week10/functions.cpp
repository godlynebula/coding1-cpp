/* Anoki Adams
 Coding 1 Week 10
 C++ Functions
 Declaring 
 Defining
 Passing by Value
 Returning by Value
 Overloading Functions */

 // warm-up task - create an array with three names
 // use a loop to display all of the names
 // compile and run the program

 #include <iostream>
 #include <string>
 using namespace std;

 // whenever possible, do not use global variables. it's safer. it avoids bugs
 // put global variables at the top
 string professor = "Brian";        // global variable (will exist anywhere)
 int currentShirtSizeElement = 0;   // this keeps track of our shirtSize array

// declaring and defining a new function
// the function must be declared before it is used
// the function CAN be defined later in the code
// this function returns nothing, which is why it is void
// this function's name is "sayHello()"
 void sayHello() {
    cout << "Hello...\n";
 }
 
 void sayGoodbye() {
    cout << "Oh... bye I guess.\n";
 }

 // adding two numbers with (parameters)
 // parameters go inside the parenthesis
 // they are the INPUTS for our function
 // optionally, we can add default values for our input parameters
 void add(int number1 = 2, int number2 = 0) {
    // cout << "the sum of number1 and number2 is ";
    cout << "The sum of " << number1 << " and " << number2 << " is ";
    cout << number1 + number2 << endl;
 }

// overload thhe add function
// this add function can add two floats
// make sure to remember to call these functions in main
void add(float firstNum, float secondNum) {
    cout << firstNum << " plus " << secondNum << " equals ";
    cout << firstNum + secondNum << endl;
}

// overload add() to accept two strings
// using concatenation
// call with   add("fortnite", "skibidi",)
void add(string firstWord, string secondWord) {
    cout << firstWord << " plus " << secondWord << " equals ";
    cout << firstWord + secondWord << endl;
}



 // return types - the OUTPUT of the function
 bool askYN(string question = "y/n?") {
    // in a do while loop
        // ask the user a question
        // get input from the player
        // if y, return true
        // if n, return false
        // else, loop again
    do {
        cout << question << " (y/n)" << endl;
        string input;
        getline(cin, input);

        if (input == "y") {         // if y, return true
            return true;            // this quits the function
        }
        else if (input == "n") {    //if n, return false
            return false;
        }
        else {                      // else, loop again
            cout << "Please type 'y' or 'n'.\n";
        }
    } while (true);
 }

// show array elements function
// doesn't return anything 
// accepts one parameter as a pointer (we do not know about these yet)
void show(string* array, int arraySize) {
    cout << "Here are the contents of your array:\n";
    for(int i = 0; i < arraySize; i++) {
        cout << array[i] << endl;
    }
}

 // create a function that accepts a pointer to an array of strings
 // let it add another element, as long as there are spaces
 void addShirtSize(string* array) {
    string input;
    while(true){
        if(currentShirtSizeElement > 9) {
            cout << "Sorry, that is all of the shirt sizes that we can support.\n";
            break;
        }
        cout << "Please add a shirt size to the array.\n";
        cout << "or type 'done' to stop.\n";
        getline(cin, input);
    
        if(input == "done") {
            break;
        }
        // increment the global counter
        array[currentShirtSizeElement++] = input;
    }
    
 }

 // in-class assignment
 // 1. add a while loop to addShirtSize() that let's the user add sizes
    // until they say DONE or they fill up the array

 int main () {
    
    // SETUP
    string shirtSizes[10];                          //creating the array of shirtSizes
    // int currentSize = 0;
    addShirtSize(shirtSizes);
    show(shirtSizes, currentShirtSizeElement);      // show shirtSizes

    string playerName = "Anoki";    // local variable (only exists in main)
    
    // calling the sayHello() function
    sayHello();
    add();
    add(23);
    add(23, 2);                     // when you call the function, you send the two input parameters.
    add(22.2f, 23.5f);              // floats need an 'f' after the numbers 
    add("fourteen", "thirty-four");


    if(askYN("Do you like pizza?")) {
        cout << "Nice, yeah cool, cool. We should get pizza for lunch.\n";
    }
    else {
        cout << "Yeah, no, me neither. Haha. Hate that stuff for real.\n";
    }

    string names[3];                // create an array
                                    // add three names
    names[0] = "Robert";
    names[1] = "Jeremiah II";
    names[2] = "King Vladimarupen";

    show(names, 3);

    /* 
    int counter = 0;
    while (counter < 3) {
        cout << names[counter++] << endl;
    }
    This is a different way of getting the same results of the code below. Less efficient, but easier to remember.
    */
    
    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }
   
    // calling the sayGoodbye() function
    sayGoodbye();
 }

/* int main() {
    story ()
    while(health > 0) {
        if (askYesNo("Do you want to adventure?")) {
            adventure()
        }
        else {
            break;
        }
    }

    ending(); 
 }
 
 bool adventure() {
    if (askYesNo()) {
        //do the adventure
    }

    else {
        return false;
    }
 } */
