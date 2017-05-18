
//First will create a decoder that handles only NEC, Sony and the hash
// decoder. If it is not NEC or Sony that it will return a 32 bit hash.
#include <IRLibDecodeBase.h> 
#include <IRLib_P01_NEC.h>   
#include <IRLib_P02_Sony.h>  
#include <IRLib_HashRaw.h>  //Must be last protocol
#include <IRLibCombo.h>     // After all protocols, include this
// All of the above automatically creates a universal decoder
// class called "IRdecode" containing only the protocols you want.
// Now declare an instance of that decoder.
IRdecode myDecoder;

// Include a receiver either this or IRLibRecvPCI or IRLibRecvLoop
#include <IRLibRecv.h> 
IRrecv myReceiver(2);    //create a receiver on pin number 2

void setup() {
  Serial.begin(9600);
  myReceiver.enableIRIn(); // Start the receiver
  Serial.println(F("Ready to receive IR signals"));
}

void loop() {
  if(myReceiver.getResults()) {
    myDecoder.decode();
    if(myDecoder.protocolNum==UNKNOWN) {
     // Serial.print(F("Unknown protocol. Hash value is: 0x"));

        Serial.println(myDecoder.value,HEX);
    } else {
      Serial.println(myDecoder.value);
 
    };
    myReceiver.enableIRIn(); 
  }
}
