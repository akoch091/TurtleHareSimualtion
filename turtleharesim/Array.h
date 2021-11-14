#include <iostream>
using namespace std;
#include <cstdlib>

#define MAX_NUM_ROW 7
#define MAX_NUM_COL 28

/*
Collection class generated to hold positions to build the Dragons hollow map (This class, however, can hold other objects --> templete class). 
Originally created by Dr Laurendeau, it was modified by me to become a template class and changed from a 1D to 2D array.
*/

template <class T>
class Array
{
  template <class V>
  friend ostream& operator<<(ostream&, const Array<V>&);

  public:
    Array();
    ~Array();
    T& operator()(int,int);

  private:
    int rowCount;
    int colCount;
    T**  elements;
};


template <class T>
Array<T>::Array()
{
  rowCount = MAX_NUM_ROW;
  colCount = MAX_NUM_COL;
  elements = new T*[rowCount];
  for(int i=0; i<rowCount; ++i)
     elements[i] = new T[colCount];
  
}

template <class T>
Array<T>::~Array()
{
  for(int i=0; i<rowCount; ++i)
     delete [] elements[i];
  delete [] elements;
}

template <class T>
T& Array<T>::operator()(int r, int c)
{
  if ((r<0 || r >= rowCount) || (c<0 || c >= colCount)) {
    cerr<<"Overflow"<<endl;
    exit(1);
  }
  return elements[r][c];
}

template <class T>
ostream& operator<<(ostream& output, const Array<T>& arr)
{ 
  for (int i=0; i<arr.rowCount; ++i){
    for (int j=0; j<=arr.colCount; ++j){
       output<<arr.elements[i][j];
    }
    cout<<endl;
  }
  return output;
}

