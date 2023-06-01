#include <vector>
#include <algorithm>
#include <cstddef>

namespace ariel
{

    class MagicalContainer
    {

    private:
        std::vector<int> elements;

    public:
        MagicalContainer() = default;
        ;
        MagicalContainer(MagicalContainer &other) = default;
        ;
        ~MagicalContainer() = default;

        std::vector<int> &getElements();
        void addElement(int element);
        void removeElement(int element);
        int size();
        bool operator==(MagicalContainer &other);
        int at(int index);

        class AscendingIterator
        {
        private:
            MagicalContainer &mContainer;
            int index;

        public:
            AscendingIterator(MagicalContainer &mContainer) : mContainer(mContainer), index(0) {}
            AscendingIterator(AscendingIterator &iter) : mContainer(iter.mContainer), index(iter.index) {}
            ~AscendingIterator() = default;

            // assignment operator
            AscendingIterator &operator=(AscendingIterator &iter)
            {
                if (this != &iter)
                {
                    mContainer = iter.mContainer;
                    index = iter.index;
                }
                return *this;
            }

            // comparison operators 
            bool operator==(AscendingIterator &iter)
            {
                return this->mContainer == iter.mContainer && this->index == iter.index;
            }
            bool operator!=(AscendingIterator &iter)
            {
                return !(*this == iter);
            }
            bool operator<(const AscendingIterator &iter) const
            {
                return false;
            }
            bool operator>(const AscendingIterator &iter) const
            {
                return false;
            }

            // dereference operator
            int operator*()
            {
                return false;
            }

            // pre-increment operator
            AscendingIterator &operator++()
            {
                index++;
                return *this;
            }
            int begin()
            {
                return 0;
            }
            int end()
            {
                return 0;
            }

        }; // AscendingIterator

    }; // MagicalContainer

}