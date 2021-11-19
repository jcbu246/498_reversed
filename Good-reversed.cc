#include <string>

using namespace std;

string reversed(const string &in)
{
  string out{};
  out.reserve(in.length());
  for(auto i = in.rbegin(); i != in.rend(); ++i){
    out += *i;
    
  }
  return out;
}
