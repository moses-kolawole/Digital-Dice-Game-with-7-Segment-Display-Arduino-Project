int led[] = {2, 3, 4, 5, 6, 7, 8};


int zero[] = {1, 1, 1, 1, 1, 1, 0};
int one[] = {0, 1, 1, 0, 0, 0, 0};
int two[] = {1, 1, 0, 1, 1, 0, 1};
int three[] = {1, 1, 1, 1, 0, 0, 1};
int four[] = {0, 1, 1, 0, 0, 1, 1};
int five[] = {1, 0, 1, 1, 0, 1, 1};
int six[] = {1, 0, 1, 1, 1, 1, 1};
int seven[] = {1, 1, 1, 0, 0, 0, 0};
int eight[] = {1, 1, 1, 1, 1, 1, 1};
int nine[] = {1, 1, 1, 0, 0, 1, 1};


void display_led(int n){
  switch(n){
    case 0:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], zero[i]);
    }
    break;

    case 1:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], one[i]);
    }
    break;

    case 2:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], two[i]);
    }
    break;

    case 3:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], three[i]);
    }
    break;

    case 4:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], four[i]);
    }
    break;

    case 5:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], five[i]);
    }
    break;

    case 6:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], six[i]);
    }
    break;

    case 7:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], seven[i]);
    }
    break;

    case 8:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], eight[i]);
    }
    break;

    case 9:
    for(int i = 0; i < 8; i++){
      digitalWrite(led[i], nine[i]);
    }
    break;
  }
}

int indicator1 = 9;
int indicator2 = 10;
int indicator3 = 11;
int indicator_delay = 500;
int button = A0;
int button_state;
int random_number;
  
  void setup() {
  // put your setup code here, to run once:
for(int i = 2; i < 12; i++){
  pinMode(i, OUTPUT);
}
pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
button_state = digitalRead(button);

if(button_state == 1){
  delay(indicator_delay);
  digitalWrite(indicator1, HIGH);
  delay(indicator_delay);
  digitalWrite(indicator1, LOW);
  digitalWrite(indicator2, HIGH);
  delay(indicator_delay);
  digitalWrite(indicator2, LOW);
  digitalWrite(indicator3, HIGH);
  delay(indicator_delay);
  digitalWrite(indicator3, LOW);s
  random_number = random(1, 7);
}

display_led(random_number);
}
