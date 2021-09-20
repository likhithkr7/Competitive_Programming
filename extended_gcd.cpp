tuple<int,int,int> ex_gcd(int a, int b) { 
  if (b == 0) {
    return {1,0,a}; 
  } 
  int x,y,g;
  tie(x,y,g) = ex_gcd(b,a%b); 
  return {y,x-(a/b)*y,g};
}
