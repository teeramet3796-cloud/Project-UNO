/* โปรแกรมคำนวน V.2 */
int x, y;
int sum_, sub_, mul_;
float div_;

void setup() {
  Serial.begin(9600);

  x = 10;
  y = 20;

  sum_ = x + y;
  sub_ = x - y;
  mul_ = x * y;
  div_ = (float)x / y;

  Serial.print("บวก = "); Serial.println(sum_);
  Serial.print("ลบ = "); Serial.println(sub_);
  Serial.print("คูณ = "); Serial.println(mul_);
  Serial.print("หาร = "); Serial.println(div_);
}

void loop() {
}
