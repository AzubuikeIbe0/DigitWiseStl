#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Binary predicate: Compare integers based on their first digit
bool digitWiseLessThan(int i, int j) {
    // Convert i and j to strings
   string strI = to_string(i);
   string strJ = to_string(j);

    // Compare the first characters

   bool compared = strI.front() < strJ.front();

   return compared;
}

void printElement(int element)
{
    cout << element << endl;
}

void square(int& element)
{
    element = element * element;
    cout << element << endl;
}

bool isEven(int elem)
{
    bool Even = elem % 2 == 0;

    return Even;
}




int main() {
    vector<int> v = { 100, 9, 42, 7, 123, 8 };
    // Print the sorted vector
    cout << "Unsorted vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the vector using digitWiseLessThan as the sorting criteria
    sort(v.begin(), v.end(), digitWiseLessThan);

    // Print the sorted vector
    cout << "Sorted vector: ";
    //for (int num = 0; num < v.size(); num++) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Print Elements: " << endl;
    for_each(v.begin(), v.end(), printElement);

    cout << "Print Squares: " << endl;
    for_each(v.begin(), v.end(), square);

    int   num;
  
    num = count(v.begin(), v.end(), 4);
    cout << "no.of elements equal to 4 is " << num << endl;

    num = count(v.begin(), v.end(), isEven);
    cout << "no.of even elements is  " << num << endl;


    return 0;
}
