# 498_reversed
README
Implement the function:

    int count_vowels(const char *str);

to return the number of (ASCII-only) vowels in a C string.

The vowels are (lowercase and uppercase) a, e, i, o, u, and sometimes y.  More
specifically, y is a vowel if and only if it is not followed by another vowel:

    count_vowels("you") == 2
    count_vowels("ypres") == 2
    count_vowels("y") == 1
    count_vowels("play") == 2
    count_vowels("froyo") == 2
    count_vowels("playyard") == 3


There is a slight infelicity in the above definition:

    count_vowels("player") == 2

Arguably the "y" here should count as a vowel (as it was in "play") even though
it is followed by a vowel.  But distinguishing such cases from "froyo" above
(where y is not a vowel) would require more in-depth language analysis, and a
list of English morphemes, so we should follow the above definition and treat
it as a consonant.
