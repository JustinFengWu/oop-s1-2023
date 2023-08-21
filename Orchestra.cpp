#include <string>
#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra() {
    current_size = 0;
    size = 0;

};          // default constructor
Orchestra::Orchestra(int size) {
    this->size = size;
    members = new Musician[size];
    current_size = 0;
};  // constructor for an orchestra of given size

  // returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return current_size;
};

  // returns true if any musician in the orchestra plays the specified
  // instrument otherwise returns false
bool Orchestra::has_instrument(std::string instrument){
    for (int i = 0; i < current_size; i++) {
        if (members[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
};

Musician* Orchestra::get_members(){
    return members;
};  // returns the array of members of the orchestra

  // returns true and adds new musician to the orchestra if the orchestra is not
  // full otherwise returns false
bool Orchestra::add_musician(Musician new_musician) {
    if (Orchestra::current_size >= Orchestra::size) {
        return false;
    } else {
        members[current_size] = new_musician;
        current_size++;
        return true;
    }
};

Orchestra::~Orchestra() {
    delete[] members;
};