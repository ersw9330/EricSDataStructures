//Ryan Long and Eric Swanson
//Final Project

#include <iostream>
#include <vector>
using namespace std;


class HashTable {
private:
  int M;
  int* table;
  int h(int x);
  int hprime(int x);
public:
  int hash(int x);
  int

}

HashTable::HashTable() {
  M = 10009;
  table = new int[M];
  for (int i; i < M; i++) {
    table[i] = -1;
  }
}

HashTable::h(int x){
  return x % M;
}

HashTable::hprime(int x) {
  return floor(x/M) % M;
}
