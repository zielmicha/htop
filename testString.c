#include "String.c"


/**
  * Run this with 
  * 
  *    gcc -std=c99 -lpcre testString.c -o testString ; ./testString
  *
  * Not enough time to figure out the mess that is automake. So this test was not included there.
  *
  */




void testMatch(int expected,const char *s,const char *regex) {
  char matchChar =  (expected == 0 ? '=' : '!');

  if( String_matches_i(s,regex) != expected ) {
    printf("[NOT OK] %s %c~ /%s/\n",s,matchChar,regex);
  } else {
    printf("[    OK] %s %c~ /%s/\n",s,matchChar,regex);
  };
};



int main() {
  testMatch(1,"abcdefgh","cde");
  testMatch(0,"abcdefgh","cdf");
  testMatch(0,"gnome-session --default-session-key /desktop/gnome/session/openbox_session","cache");
};


