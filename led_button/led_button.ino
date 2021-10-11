#define pin_led 13
#define pin_button 8

bool last_state = true;
bool state_led = false;

void setup (){
	pinMode(pin_led, OUTPUT);
	pinMode(pin_button, INPUT_PULLUP);
}

void loop (){

// botão apertado  = LOW
// botão solto = HIGH

// HIGH = true = 1
// LOW = false = 0

  if(!digitalRead(pin_button)){ // Botão pressionado
    last_state = false;
    delay(100);
  }

  if (digitalRead(pin_button) && !last_state){
     state_led = !state_led;
     last_state = true;
  }

	digitalWrite(pin_led, state_led);

}
