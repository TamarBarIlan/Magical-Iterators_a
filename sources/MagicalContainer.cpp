#include "MagicalContainer.hpp"
using namespace std;
using namespace ariel;

MagicalContainer::MagicalContainer() = default;
MagicalContainer::MagicalContainer(MagicalContainer &other) = default;
MagicalContainer::~MagicalContainer() = default;

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
    return *this == other;
}
int MagicalContainer:: at(int index)
{
    return elements.at(index);
}