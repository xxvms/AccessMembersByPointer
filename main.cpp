#include <iostream>

class Distance                          // English distance class
{
        int feet;
        double inches;
public:
        void getDist()                  // get length from
        {
            std::cout << "\nEnter feet: ";
            std::cin >> feet;
            std::cout << "\nEnter inches: ";
            std::cin >> inches;
        }
    void showDist()                     // display distance
    {
        std::cout << feet << "\'-" << inches << "\"";
    }
};
int main()
{
   Distance dist;                       // defines a named Distance object
    dist.getDist();                     // access object member
    dist.showDist();                    // display distance with dot operator
    
    Distance* distPtr;                  // pointer to Distance
    distPtr = new Distance;             // points to new Distance object
    distPtr->getDist();                 // access object members
    distPtr->showDist();                // with -> operator
    
    system("pause");
    return 0;
}