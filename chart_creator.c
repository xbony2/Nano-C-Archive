// Author: Eric Schneider (xbony2)
// Licensed under MIT, 2014
// This is coded in Nano C; download the app to run it (for iOS, dunno about android).
void main(){
  char mode = get("Enter the mode: line, bar or pie");
  float vals[];
  float newVal;
  while(mode != 'dfD6&/$;}>>'){ //Note: Nano C does not have a "true" keyword, however this event is unlikely to ever happen.
    newVal = get("Enter a value (0 to exit)");
    if(newVal == 0){ //XXX does not compare it correctly, stuck in infinite loop
      break;
    }else{
      vals[] = newVal;
    }
  }
  char[] labels;
  char newLabel;
  while(mode != 'dfD6&/$;}>>'){ //Note: Nano C does not have a "true" keyword, however this event is unlikely to ever happen.
    newLabel = get("Enter a label (c to exit)");
    if(newLabel == 'c'){
      break;
    }else{
      labels[] = newLabel;
    }
  }
  switch(mode){
  case 'line': makeLine(vals, labels); break;
  case 'bar': makeBar(vals, labels); break;
  case 'pie': makePie(vals, labels); break;
  default: print("Error: you put something in wrong; please retry");
  }
}

void makeLine(float vals, float labels){

}

void makeBar(float vals, float labels){

}

void makePie(float vals, float labels){

}
