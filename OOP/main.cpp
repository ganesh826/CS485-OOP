/* 
 * File:   main.cpp
 * Author: GaneshKoripalli
 *
 * Created on September 2, 2017, 5:55 PM
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

class Scene {
public:
    //function plot that delivers the narrative
    int L, dist; //Variables given

    Scene(double, double); //constructor

    ~Scene(); //destructor

    void plot();
};

//Create the Ice Skater and make the skater skate, rotate, and jump

class Ice_Skater {
public:
    
    int distance_left;

    Ice_Skater(int, int);
    
    ~Ice_Skater();

    void start();

    void skate(int);

    void rotate(int, int);

    void jump(int, int);

};

//Constructor and Destructor for building and destroying the Background

class Background {
public:

    Background();

    ~Background();

};

//Constructor and Destructor for building and destroying the Mountains

class Mountains {
public:

    Mountains();

    ~Mountains();

};

//Constructor and Destructor for building and destroying the Trees

class Trees {
public:

    Trees();

    ~Trees();

};

//Constructor and Destructor for building and destroying the Little House

class Little_House {
public:

    Little_House();

    ~Little_House();

};

//Constructor and Destructor for building and destroying the Lake

class Lake {
public:
    //variable for controlling from light to dark
    string shade; 

    Lake();

    ~Lake();

    void light_up(); //function for turning on the lights
    
    void darken(); //function for turning off the lights
};

////////////////////////////////////////////////////////////////

//Scene

Scene::Scene(double L, double dist) {

    cout << "Scene was just created!\n";

    this -> L = L;
    this-> dist = dist;

}

Scene::~Scene() {

    cout << "Scene was just destroyed\n";

}

////////////////////////////////////////////////////////////////

//Background

Background::Background() {

    cout << "The background was just created\n";

}

Background::~Background() {

    cout << "The background was just destroyed\n";

}

////////////////////////////////////////////////////////////////

//Mountains

Mountains::Mountains() {

    cout << "The Mountains was just created\n";

}

Mountains::~Mountains() {

    cout << "The Mountains was just destroyed\n";

}

////////////////////////////////////////////////////////////////

//Trees

Trees::Trees() {

    cout << "The Trees was just created\n";

}

Trees::~Trees() {

    cout << "The Trees was just destroyed\n";

}

////////////////////////////////////////////////////////////////

//Little House

Little_House::Little_House() {

    cout << "The Little House was just created\n";

}

Little_House::~Little_House() {

    cout << "The Little House was just destroyed\n";

}

////////////////////////////////////////////////////////////////

//Lake

Lake::Lake() {

    cout << "The Lake was created\n";

    light_up();
    
}

Lake::~Lake() {

    cout << "The Lake was destroyed\n";
    
    darken();

}

//Turn the lights on
void Lake::light_up() {
    
    shade = "light";
    
    cout << "Lights on!\n";
    
}

//Turn the lights off
void Lake::darken() {
    
    shade = "dark";
    
    cout << "Lights off!\n";
    
}

//Create the plot
void Scene::plot() {
    
    Background background;
    
    Mountains mountains;
    
    Trees trees;
    
    Lake lake;
    
    Little_House little_house;
    
    Ice_Skater ice_skater(L, dist);
    
}

Ice_Skater::Ice_Skater(int L, int dist) {
    
    int distance_left;
    
    cout << "An Ice Skater participates\n";
    
    start();
    
    skate(dist);
    
    rotate(L, dist);
    
    jump(L, dist);
    
}

//This is where all the actions of the skater are defined:

void Ice_Skater::start() {
    
    cout << "Here I am...\n";
    
}

//
void Ice_Skater::skate(int dist) {
    
    cout << "An Ice Skater skates " << dist << " slides\n";
    
}

void Ice_Skater::rotate(int L, int dist) {
    
    cout << "An Ice Skater spins on position " << L - (2 * dist) << "\n";
    
}

void Ice_Skater::jump(int L, int dist) {
    
    cout << "An Ice Skater jumps on position " << L - (2 * dist) << "\n";
    
    distance_left = L - (2 * dist);
    
}

//Ice Skater destructor
Ice_Skater::~Ice_Skater(){
    
    cout << "The ice skater leaves\n";
    
}

//Main: 

int main() {

    int L, dist;
    cout << "Give the lake's length(L): ";
    cin >> L;
    cout << "Give the distance an ice skater does with one slide: ";
    cin >> dist;

    Scene scene(L, dist); //need scene which is a constructor with int variables
    scene.plot(); // make a plot function that narrates 

}

