#ifndef LinkedList_hpp
#define LinkedList_hpp

void PortWrite(String str){
  Serial.println(str);
  delay(100);
}

void ArrayPortWrite(String str[], int num){
  for(int i = 0; i < num; i++){
    Serial.println(str[i]);
    delay(100);
  }
}

template <class T>