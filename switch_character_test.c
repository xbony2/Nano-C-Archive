// Author: Eric Schneider (xbony2)
// Licensed under MIT, 2014
// This is coded in Nano C; download the app to run it (for iOS, dunno about android).
void main(){
  char c = get("test");
  switch(c){
  case 'a': print("a"); break:
  case 'b': print("b"); break;
  default: print("default");
  }
}
