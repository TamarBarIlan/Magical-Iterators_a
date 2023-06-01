#include "MagicalContainer.hpp"
using namespace std;
using namespace ariel;

// MagicalContainer::MagicalContainer();


MagicalContainer::MagicalContainer(MagicalContainer& other) : elements(other.elements) {}

MagicalContainer& MagicalContainer::operator=(const MagicalContainer& other) {
    if (&other != this) {
        elements = other.elements;
    }
    return *this;
}


std::vector<int>& MagicalContainer:: getElements()
{
    return this->elements;
}

void MagicalContainer:: addElement(int element)
{
    this->elements.push_back(element);
}
void MagicalContainer:: removeElement(int element)
{
    auto it = std::find(elements.begin(), elements.end(), element);
    if (it != elements.end()) {
        elements.erase(it);
    }
}
int MagicalContainer:: size()
{
    return this->elements.size();
}

bool MagicalContainer::operator==(MagicalContainer &other){
    return this->elements == other.elements;
}
int MagicalContainer::at(int index) {
    if (index < 0) {
        __throw_out_of_range("Index cannot be negative.");
    }
    return elements.at(static_cast<std::vector<int>::size_type>(index));
}