/*!
 * MindPlus
 * uno
 *
 */
#include <DFRobot_NeoPixel.h>

// 动态变量
volatile float mind_n_Level, mind_n_OldLevel, mind_n_SOUND;
// 函数声明
void DF_Init();
void DF_Check();
// 创建对象
DFRobot_NeoPixel neoPixel_4;


// 主程序开始
void setup() {
  DF_Init();
}
void loop() {
  mind_n_OldLevel = mind_n_Level;
  DF_Check();
  if (((mind_n_Level<mind_n_OldLevel) || (mind_n_Level>mind_n_OldLevel))) {
    neoPixel_4.clear();
    neoPixel_4.setRangeColor(0, (mind_n_Level - 1), 0x0000FF);
  }
}


// 自定义函数
void DF_Init() {
  neoPixel_4.begin(4, 24);
  neoPixel_4.setBrightness(24);
  mind_n_Level = 0;
  mind_n_OldLevel = 0;
  mind_n_SOUND = 0;
}
void DF_Check() {
  mind_n_SOUND = analogRead(A1);
  if ((mind_n_SOUND<=10)) {
    mind_n_Level = 1;
  }
  if (((mind_n_SOUND>10) && (mind_n_SOUND<=20))) {
    mind_n_Level = 2;
  }
  if (((mind_n_SOUND>20) && (mind_n_SOUND<=30))) {
    mind_n_Level = 3;
  }
  if (((mind_n_SOUND>30) && (mind_n_SOUND<=40))) {
    mind_n_Level = 4;
  }
  if (((mind_n_SOUND>40) && (mind_n_SOUND<=50))) {
    mind_n_Level = 5;
  }
  if (((mind_n_SOUND>50) && (mind_n_SOUND<=60))) {
    mind_n_Level = 6;
  }
  if (((mind_n_SOUND>60) && (mind_n_SOUND<=70))) {
    mind_n_Level = 7;
  }
  if (((mind_n_SOUND>70) && (mind_n_SOUND<=80))) {
    mind_n_Level = 8;
  }
  if (((mind_n_SOUND>80) && (mind_n_SOUND<=90))) {
    mind_n_Level = 9;
  }
  if (((mind_n_SOUND>90) && (mind_n_SOUND<=100))) {
    mind_n_Level = 10;
  }
  if (((mind_n_SOUND>100) && (mind_n_SOUND<=110))) {
    mind_n_Level = 11;
  }
  if (((mind_n_SOUND>110) && (mind_n_SOUND<=120))) {
    mind_n_Level = 12;
  }
  if (((mind_n_SOUND>120) && (mind_n_SOUND<=130))) {
    mind_n_Level = 13;
  }
  if (((mind_n_SOUND>130) && (mind_n_SOUND<=140))) {
    mind_n_Level = 14;
  }
  if (((mind_n_SOUND>140) && (mind_n_SOUND<=150))) {
    mind_n_Level = 15;
  }
  if (((mind_n_SOUND>150) && (mind_n_SOUND<=160))) {
    mind_n_Level = 16;
  }
  if (((mind_n_SOUND>160) && (mind_n_SOUND<=170))) {
    mind_n_Level = 17;
  }
  if (((mind_n_SOUND>170) && (mind_n_SOUND<=190))) {
    mind_n_Level = 18;
  }
  if (((mind_n_SOUND>190) && (mind_n_SOUND<=210))) {
    mind_n_Level = 19;
  }
  if (((mind_n_SOUND>210) && (mind_n_SOUND<=230))) {
    mind_n_Level = 20;
  }
  if (((mind_n_SOUND>230) && (mind_n_SOUND<=250))) {
    mind_n_Level = 21;
  }
  if (((mind_n_SOUND>250) && (mind_n_SOUND<=270))) {
    mind_n_Level = 22;
  }
  if (((mind_n_SOUND>270) && (mind_n_SOUND<=290))) {
    mind_n_Level = 23;
  }
  if (((mind_n_SOUND>290) && (mind_n_SOUND<=310))) {
    mind_n_Level = 24;
  }
}
