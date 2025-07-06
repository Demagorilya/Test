#include <bits/stdc++.h>
using namespace std;

struct Movie
{
    string name;
    string Rel_date;
    float Rating;
};
int main() {
Movie movie1;
movie1.name = "Insidious";
movie1.Rating = 87;
movie1.Rel_date = "21.04.2011";
cout << movie1.name << " " << movie1.Rating << " " << movie1.Rel_date << " " ;
return 0;
}
