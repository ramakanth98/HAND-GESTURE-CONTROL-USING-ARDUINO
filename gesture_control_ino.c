//gesture control
#include <Keyboard.h>
int up_right = 9;
int up_left = 11;
int down_right = 10;
int down_left = 12;

bool up_right_state;
bool down_right_state;
bool down_left_state;
bool up_left_state;
void setup()
{
  Keyboard.begin();
  Serial.begin(9600);
  pinMode(up_right, INPUT);
  pinMode(up_left, INPUT);
  pinMode(down_right, INPUT);
  pinMode(down_left, INPUT);


}

void loop()
{
  up_right_state = digitalRead(up_right);
  up_left_state = digitalRead(up_left);
  down_right_state = digitalRead(down_right);
  down_left_state = digitalRead(down_left);
  Serial.print(up_right_state);
  Serial.print(up_left_state);
  Serial.print(down_right_state);
  Serial.println(down_left_state);

  
  if (digitalRead(up_left) == 0 && digitalRead(up_right) == 0)
    while ((digitalRead(up_left) == 0 && digitalRead(up_right) == 0))
    {
      Serial.println("move up");
      Keyboard.press(KEY_UP_ARROW);
      delay(100);
      Keyboard.releaseAll();
      Keyboard.end();
    }
  
  if (digitalRead(down_left) == 0 && digitalRead(down_right) == 0 )
    while ((digitalRead(down_left) == 0 && digitalRead(down_right) == 0 ) )

    {
      Serial.println("move down");
      Keyboard.press(KEY_DOWN_ARROW);
      delay(100);
      Keyboard.releaseAll();
      Keyboard.end();
    }

  if (digitalRead(down_left) == 0 && digitalRead(up_left) == 0 )
    while (digitalRead(down_left) == 0 && digitalRead(up_left) == 0 )

    {
      Serial.println("move left");
      Keyboard.press(KEY_LEFT_ARROW);
      delay(100);
      Keyboard.releaseAll();
      Keyboard.end();
    }

  if (digitalRead(up_right) == 0 && digitalRead(down_right) == 0)
    while (digitalRead(up_right) == 0 && digitalRead(down_right) == 0)

    {
      Serial.println("move right");
      Keyboard.press(KEY_RIGHT_ARROW);
      delay(100);
      Keyboard.releaseAll();
      Keyboard.end();
    }


  if (digitalRead(up_right) == 0 && digitalRead(down_right) == 1 && digitalRead(down_left) == 1 && digitalRead(up_left) == 1)
    while (digitalRead(up_right) == 0 && digitalRead(down_right) == 1 && digitalRead(down_left) == 1 && digitalRead(up_left) == 1)

    {
      Serial.println("move right up corner");
      Keyboard.press(KEY_RIGHT_ARROW);
      Keyboard.press(KEY_UP_ARROW);
      delay(100);
      Keyboard.releaseAll();
      Keyboard.end();
    }

  if (digitalRead(up_left) == 0 && digitalRead(down_right) == 1 && digitalRead(up_right) == 1 && digitalRead(down_left) == 1)
    while (digitalRead(up_left) == 0  && digitalRead(down_right) == 1 && digitalRead(up_right) == 1 && digitalRead(down_left) == 1)

    {
      Serial.println("move left up corner");
      Keyboard.press(KEY_LEFT_ARROW);
      Keyboard.press(KEY_UP_ARROW);
      delay(100);
      Keyboard.releaseAll();
      Keyboard.end();
    }

  if (digitalRead(down_left) == 0 && digitalRead(up_right) == 1 && digitalRead(up_left) == 1 && digitalRead(down_right) == 1 )
    while (digitalRead(down_left) == 0 && digitalRead(up_right) == 1 && digitalRead(up_left) == 1 && digitalRead(down_right) == 1 )

    {
      Serial.println("move left down corner");
      Keyboard.press(KEY_LEFT_ARROW);
      Keyboard.press(KEY_DOWN_ARROW);
      delay(100);
      Keyboard.releaseAll();
      Keyboard.end();
    }

  if (digitalRead(down_right) == 0 && digitalRead(up_right) == 1 && digitalRead(up_left) == 1 && digitalRead(down_left) == 1)
    while (digitalRead(down_right) == 0 && digitalRead(up_right) == 1 && digitalRead(up_left) == 1 && digitalRead(down_left) == 1)

    {
      Serial.println("move right down corner");
      Keyboard.press(KEY_RIGHT_ARROW);
      Keyboard.press(KEY_DOWN_ARROW);
      delay(100);
      Keyboard.releaseAll();
      Keyboard.end();
    }



}