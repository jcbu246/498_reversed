#include "vowel_count.h

static bool always_vowel(char h)
{
      return(h == 'a' || h == 'e' || h == 'i' || h == 'o' || h == 'u');
}

static bool maybe_vowel(char h)
{
      return h == 'y' || always_vowel(h);
}


int vowel_count(const char *str)
{
      int n_vowels = 0;
      for (const char *curr = str; *curr != '\0'; ++curr){
        if(always_vowel(*curr)){
          ++n_vowels;
        }else if(maybe_vowel(*curr)){
          //FIXME: This needs to check whether the next char
          // is actually a vowel in this word, not just whether
          // it is always a vowel
          if(!always_vowel(curr[1])){
            ++n_vowels;
          }
        }
      }
  return n_vowels;
}
