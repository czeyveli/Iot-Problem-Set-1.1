
const int LEDdizisi[]= {5,6,7,8,9}; // tek tek tanımlama yerine diziye atarak tanımladık.
void setup() {
 
 for(int i=0;i<5;i++)
 {pinMode (LEDdizisi[i], OUTPUT); // led pinlerini dizi olarak çıkış ayarladık.
 } 

}

void loop() {
  for(int i=0;i<5;i++) {
    digitalWrite(LEDdizisi[i],HIGH);
    delay(500);
 
    }

   for(int k=5;k>0;k--){
    
    digitalWrite(LEDdizisi[k],LOW);
    delay(500);
    
    
    }

}
