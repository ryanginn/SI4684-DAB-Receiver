#ifndef GUI_H
#define GUI_H

#include <Arduino.h>
#include <TFT_eSPI.h>
#include "WiFiConnect.h"
#include "WiFiConnectParam.h"

#define CONTRASTPIN     2

#define ITEM_GAP		20
#define ITEM1			30
#define ITEM2			50
#define ITEM3			70
#define ITEM4			90
#define ITEM5			110
#define ITEM6			130
#define ITEM7			150
#define ITEM8			170
#define ITEM9			190
#define ITEM10			210

enum menupage {INDEX, MAINSETTINGS, AUDIOSETTINGS, DISPLAYSETTINGS, RDSSETTINGS, FMSETTINGS, AMSETTINGS, CONNECTIVITY};

extern byte menuitem;
extern byte items[8];

extern bool change;
extern bool SlideShowView;
extern bool wifi;
extern byte ContrastSet;
extern byte language;
extern byte unit;
extern int ActiveColor;
extern int ActiveColorSmooth;
extern int BackgroundColor;
extern int8_t CNRold;
extern uint16_t BitrateOld;
extern String EIDold;
extern String SIDold;
extern String PLold;
extern String PSold;
extern int BarInsignificantColor;
extern int BarSignificantColor;
extern int BitrateAutoColor;
extern int BitrateAutoColorSmooth;
extern int FrameColor;
extern int GreyoutColor;
extern int InsignificantColor;
extern int InsignificantColorSmooth;
extern int menuoption;
extern int PrimaryColor;
extern int PrimaryColorSmooth;
extern int rssiold;
extern int SecondaryColor;
extern int SecondaryColorSmooth;
extern int SignificantColor;
extern int SignificantColorSmooth;
extern int SignalLevelold;
extern int16_t SignalLevel;

extern TFT_eSPI tft;
extern WiFiConnect wc;
extern TFT_eSprite MenuInfobox;

void BuildMenu();
void BuildDisplay();
void MenuUp();
void MenuDown();
void DoMenu();
void doTheme();
void Infoboxprint(const char* input);

extern void ShowFreq();
extern void ShowTuneMode();
extern void tryWiFi();
extern void tftPrint(int8_t offset, const String & text, int16_t x, int16_t y, int color, int smoothcolor, uint8_t fontsize);

#endif