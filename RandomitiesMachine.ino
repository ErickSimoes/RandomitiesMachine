#define BUTTON 2
#define LIST_SIZE 5

//TODO: Add SD Card to populate the list
String list[LIST_SIZE] = {"Chocolate",
                          "Banana",
                          "Lasanha",
                          "Pizza",
                          "Goiabada"};

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);
  //TODO: Implement non repeat algorithm
}

void loop() {
  if(digitalRead(BUTTON)){
    //TODO: Show the result in a LCD
    Serial.println(list[random(0, LIST_SIZE)]);
    delay(100);
  }
}
