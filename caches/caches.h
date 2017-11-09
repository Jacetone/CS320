#ifndef CACHES_H
#define CACHES_H

#include <vector>
#include <utility>
#include <string>
#include <iostream>

#define String std::string

using namespace std;

class Caches
{
	public:
        Caches(vector< pair<char, int> > aooInputs);
        int getCountEntries();
        int directMapped(int anCacheEntries);
        int setAssociative(int anCacheEntries);


    private:
        vector< pair<char, int> > gooInputs;
};

#endif