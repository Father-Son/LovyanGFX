
// このサンプルの実行にはefontが必要です。
// need efont to run this example.
//
// URL : https://github.com/tanakamasayuki/efont
//

// 使用する文字セットに応じたヘッダをincludeします。
#include <efontEnableJa.h>
//#include <efontEnableAscii.h>
//#include <efontEnableAll.h>
//#include <efontEnableCJK.h>
//#include <efontEnableCn.h>
//#include <efontEnableJa.h>
//#include <efontEnableJaMini.h>
//#include <efontEnableKr.h>
//#include <efontEnableTw.h>
#include <efont.h>

// LovyanGFXより先に efontのincludeが必要です。
// need to include efont before LovyanGFX.
#include <LovyanGFX.hpp>

static LGFX lcd;

void setup()
{
  lcd.init();

  // setTextEFont関数を呼ぶと、printやdrawString等でefontを使用できます。
  lcd.setTextEFont();

  lcd.setTextWrap(true, true);
}

void loop()
{
  lcd.setTextColor(random(0x10000), random(0x10000));
  lcd.setTextSize(random(1,3), random(1,3));

  lcd.print("Hello");
  lcd.print("こんにちは");
  lcd.print("你好");
  lcd.print("안녕하세요");
  lcd.print("Доброе утро");
  lcd.print("Päivää");
  lcd.print("Здравствуйте");
  delay(1000);
}