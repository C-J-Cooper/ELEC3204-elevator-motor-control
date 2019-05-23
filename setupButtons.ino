void setupButtons(void){

	const byte upPin = 3;
	const byte downPin = 2;
	const byte modePin = 18;
	const byte stopPin = 19;
  const byte topPin = 20;
  const byte bottomPin = 21;

	pinMode(upPin, INPUT_PULLUP);
	attachInterrupt(digitalPinToInterrupt(upPin), upInterrupt, FALLING);
	
	pinMode(downPin, INPUT_PULLUP);
	attachInterrupt(digitalPinToInterrupt(downPin), downInterrupt, FALLING);
  
	pinMode(modePin, INPUT_PULLUP);
	attachInterrupt(digitalPinToInterrupt(modePin), modeInterrupt, FALLING);
	
	pinMode(stopPin, INPUT_PULLUP);
	attachInterrupt(digitalPinToInterrupt(stopPin), stopInterrupt, FALLING);

  pinMode(topPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(topPin), topInterrupt, FALLING);

  pinMode(bottomPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(bottomPin), bottomInterrupt, FALLING);

}
