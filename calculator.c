// Author: Eric Schneider (xbony2)
// Licensed under MIT, 2014
// This is coded in Nano C; download the app to run it (for iOS, dunno about android).
void main(){
  int operation = get("Operation: 1: add, 2: subtract, 3: multiply, 4: divide, 5: remainder, 6: absolute value, 7: ACOS, 8: ASIN, 9: ATAN");
  switch(operation){
  case 1: add();
  case 2: subtract();
  case 3: multiply();
  case 4: divide();
  case 5: findRemainder();
  case 6: findAbsoluteValue();
  case 7: findAcos();
  case 8: findAsin();
  case 9: findAtan();
  default: screwUp();
  }
}

void add(){
  float firstNum = get("Enter your first number");
  float secondNum = get("Enter your second number");
  float result = firstNum + secondNum;
  printf("Result: %f", result);
}

void subtract(){
  float firstNum = get("Enter your first number");
  float secondNum = get("Enter your second number");
  float result = firstNum - secondNum;
  printf("Result: %f", result);
}

void multiply(){
  float firstNum = get("Enter your first number");
  float secondNum = get("Enter your second number");
  float result = firstNum * secondNum;
  printf("Result: %f", result);
}

void divide(){
  float firstNum = get("Enter your first number");
  float secondNum = get("Enter your second number (not 0)");
  if(secondNum == 0){
    screwUp();
    return;
  }
  float result = firstNum / secondNum;
  printf("Result: %f", result);
}

void findRemainder(){
  float firstNum = get("Enter your first number");
  float secondNum = get("Enter your second number (not 0)");
  if(secondNum == 0){
    screwUp();
    return;
  }
  float result = firstNum % secondNum;
  printf("Result: %f", result);
}

void findAbsoluteValue(){
  float num = get("Enter your number");
  float result = abs(num);
  printf("Result: %f", result);
}

void findAcos(){
  float num = get("Enter your number");
  float result = acos(num);
  printf("Result: %f", result);
}

void findAsin(){
  float num = get("Enter your number");
  float result = asin(num);
  printf("Result: %f", result);
}

void findAtan(){
  float num = get("Enter your number");
  float result = atan(num);
  printf("Result: %f", result);
}

void screwUp(){
  print("You made a mistake entering something; try again!");
}
