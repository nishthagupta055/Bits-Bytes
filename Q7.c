
/* bang - Compute !x without using !
*  Examples: bang(3)=0, bang(0)=1
*  Legal ops: ~ & ^ | + << >>
*  Max ops: 12
*/ 

int bang(int x) {
  return (((~x + 1) | x) >> 31) + 1;
}