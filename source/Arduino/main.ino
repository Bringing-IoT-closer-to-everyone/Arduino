boolean f = 0, f1 = 0, f2 = 0;
int pulse;
int ir_data_common[] = {3500, 1300, 350, 350, 350, 1300, 350, 1300, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 1300, 350, 1300, 350, 350, 350, 350, 350, 350, 350, 1300, 350, 350, 350, 1300, 350, 1300, 350, 1300, 350, 1300, 350, 1300, 350, 1300, 350, 1300, 350, 1300, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, NULL};
int ir_data_main[2][] = {
  {1300, 350, 1300, 350, 1300, 350, NULL},
  {350, 350, 350, 350, 1300, 350, NULL}
};

void setup() {
  pinMode(4, INPUT_PULLUP); // Power
  pinMode(5, INPUT_PULLUP); // Mode
  pinMode(10, OUTPUT);   // IR output
  
  pinMode(13, OUTPUT);  // debug LED

  TCCR1A = B00100011;
  TCCR1B = B00011010;
  pulse = F_CPU / 38000L / 8 - 1;
  OCR1AL = pulse;
  OCR1BL = OCR1AL / 3;
  OCR1AL = 0;
}

void loop() {
  //Power switch
  if ((digitalRead(4) == 0) && (f1 == 0)) {
    f1 = 1;
    delayIR(0);
  } else if ((digitalRead(4) == 1) && (f1 == 1)) {
    f1 = 0;
  }

  //Mode switch
  if ((digitalRead(5) == 0) && (f2 == 0)) {
    f2 = 1;
    delayIR(1);
  } else if ((digitalRead(5) == 1) && (f2 == 1)) {
    f2 = 0;
  }
}

void delayIR(int data_num) {
  int i = 0, f = 0;
  while (ir_data_common[i] != NULL) {
    if (f == 0) {
      f = 1;
      OCR1A = pulse;
      delayMicroseconds(ir_data_common[i]);
    } else {
      f = 0;
      OCR1A = 0;
      delayMicroseconds(ir_data_common[i]);
    }
    i++;
  }

  i = 0;
  while (ir_data_main[data_num][i] != NULL) {
    if (f == 0) {
      f = 1;
      OCR1A = pulse;
      delayMicroseconds(ir_data_main[data_num][i]);
    } else {
      f = 0;
      OCR1A = 0;
      delayMicroseconds(ir_data_main[data_num][i]);
    }
    i++;
  }
  OCR1A = 0;
}
