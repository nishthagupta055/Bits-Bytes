/*
/*  bitAnd - x & y using only ~ and |
/* Example bitAnd(6, 5) = 4
/* Legal ops:  ~ |  
/*Max ops: 8
*/
int bitAnd (int x, int y) {
      
  return ~(~x | ~y);
     return 0;
}

