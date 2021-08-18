/* 
/* Return x with the n bits that begin at position p inverted (i.e. turn 0 /* into 1 and vice versa)
/* and the rest left unchanged. Consider the indices of x to begin with the /* lower -order bit   numbered
/* Legal ops: ~ & ^ | << >>
/* as zero
*/


invert(unsigned x, int p, int n)
{
    return   x ^ (~(~0 << n) << (p + 1 - n));
}