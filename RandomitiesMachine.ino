#define BUTTON 2
#define LIST_SIZE 5

String list[LIST_SIZE] = {"Chocolate",
                          "Banana",
                          "Lasanha",
                          "Pizza",
                          "Goiabada"};

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);
}

void loop() {
  if(digitalRead(BUTTON)){
    Serial.println(list[random(0, LIST_SIZE)]);
    delay(100);
  }
}
