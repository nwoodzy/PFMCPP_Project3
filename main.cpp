/*
Project 3 - Part 1a / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps, all on the same branch
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) Look at the picture of the car interior (Part1a pic.jpg).  
    Fill in the blanks below which break this car interior down into sub-objects.

    Several sub-objects are listed below that make up this car's interior.
        you're going to name several things that you'll find on each subobject
        you're going to name several things that each subobject can do.
        If you've seen "Family Feud", we are going to do what they do in that show

        A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) grips
        4) horn
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) beep horn
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speedometer
        2) odometer
        3) gear selection indicator
        4) thermometer display
    Name 3 things you can do with the:   Instrument Cluster
        1) reset odometer
        2) select C or F for thermometer reading
        3) select KPH or MPH
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) temperature dial
        2) a/c button
        3) fan speed dial
    Name 3 things you can do with the:   Environment Controls
        1) turn on a/c
        2) set temperature
        3) set fan speed

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) On/off switch
        2) radio tuner
        3) volume control
    Name 3 things you can do with the:   Infotainment System
        1) turn on Infotainment System
        2) select a radio station 
        3) select a volume

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) recline knob
        2) forward or back knob
        3) headrest adjuster
    Name 2 things you can do with the:   Seat
        1) select angle of recline
        2) select distance to pedals
*/
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */
 /*

    Part 1b: you will write 4 un-related UDTs in plain english

    person named Nick
    their weight is 170 pounds
    height is 6'3"
    hand preference is right
    eye color is blue
    is tired is false

    guitar named telecaster
    body color is beige
    pickups style is humbuckers
    fretboard wood type is maple
    country of manufacture is Mexico
    is plugged in is true

    day named today
    percipitation type is snowing
    temperature high is 3c
    temperature low is -2c
    the date is 11/03/2021
    sunset time is 4:33pm

    screen named monitor1
    width is 1024
    height is 768
    brightness is 70%
    is on is true



    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects

    dog named woof
    has a tail
    has a collar 
    barks
    physique
    has a leash


    

    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c

    body part named tail
    color is brown
    hair length is long
    length is short

    accessory named collar
    color is black
    length is 15 inches 
    width is 1 inch
    decoration is spikes

    sound named bark
    volume is 85db
    pitch is high

    body modifier named physique
    weight is 25 lbs
    body type is scrawny
    has long hair

    accessory named leash
    color is yellow
    length is 96 inches 
    width is 1 inch
    decoration is clip

    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
 */

#include <iostream>

struct Person
{
    int weight;
    int height;
    bool handPreferenceRight;
    std::str eyeColor = blue;
    bool isTired;
};

struct guitar
{
    int color;
    bool isPluggedIn; 
    bool isElectric;

}


int main()
{
    std::cout << "good to go!" << std::endl;
}
