#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> vec)
{
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1 = {1};
    cout << "Vector: ";
    display(vec1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);
    cout << "Vector After Push: ";
    display(vec1);
    vec1.pop_back();
    cout << "Vector After pop: ";
    display(vec1);

    cout << "Front of vector is: " << vec1.front() << endl;
    cout << "Back of vector is: " << vec1.back() << endl;
    cout << "Size of vector is: " << vec1.size() << endl;
    cout << "Capacity of vector is: " << vec1.capacity() << endl;
    vec1.clear();
    cout << "Capacity After clear:" << vec1.capacity() << endl;

    return 0;
}