/* 
 * File:   main.cpp
 * Author: GaneshKoripalli
 *
 * Created on September 2, 2017, 5:55 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <string.h>


using namespace std;

class Scene {
public:
    //function plot that delivers the narrative

    string plot() {

        cout << "The Lake is lit up. "
                "The Ice Skater begins her performance\n.
                "The Ice Skater slides up to the center of the lake.\n
                "The Ice Skater spins.\n
                "The Ice Skater jumps.\n
                "The Ice Skater slides up to the end of the lake\n
                "The Lake darkens";

    }

    //when the background was initialized ... 
    //Same with mountains, tree and little house (Same dialogue)


};
//
//
//string mountains() {
//
//    cout << "Mountains were just created!";
//
//    cout << "Mountains are about to be destroyed!";
//
//}
//
//string trees() {

//    cout << "Mountains were just created!";
//
//    cout << "Mountains are about to be destroyed!";
//
//}
//
//string little_house() {
//
//    cout << "Mountains were just created!";
//
//    cout << "Mountains are about to be destroyed!";
//
//}

int main() {

    int L, dist;
    cout << "Give the lake's length(L): " endl;
    cin >> L;
    cout << "Give the distance an ice skater does with one slide : " << endl;
    cin >> dist;

    Scene scene(L, dist); //need scene which is a constructor with ints
    scene.plot(); // make a plot function that narrates 

}


