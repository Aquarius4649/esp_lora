#include "./resource.h"
#include "ArxTypeTraits.h"

int RX_PIN = 16;
int TX_PIN = 17;

void setup()
{
  Serial.begin(115200);                            // シリアルモニター＆Loraへの送信用
  Serial2.begin(9600, SERIAL_8N1, RX_PIN, TX_PIN); // Loraからの受信用
  // Lora_Serial2のポートレートはデフォルトで9600
}

int count = 0;

void PortWrite(String str)
{
  Serial.println(str);
  delay(100);
}

void ArrayPortWrite(const char *str[], int num)
{
  for (int i = 0; i < num; i++)
  {
    PortWrite(String(str[i]));
  }
}

int data;

void loop()
{
  // ArrayPortWrite(ReceiveProgram, 2);
  // while (Serial2.available())
  // {
  //   data = Serial2.read();
  //   Serial.write(data);
  // }
  delay(1000);
}