unsigned int r_flag1 = 0;
uint8_t   RecievedTemp1[30]       = {0};
//uint8_t   *RecievedTemp1 = new uint8_t[30];
uint8_t   cout_i = 0;
unsigned int quan_hang1 = 0;
unsigned int quan_hang2 = 0;
unsigned int quan_hang3 = 0;
unsigned int quan_lie1 = 0;
unsigned int quan_lie2 = 0;
unsigned int quan_lie3 = 0;
unsigned int quan_zuoxia = 0;
unsigned int quan_youxia = 0;

//unsigned int quan[8]={0};
//
unsigned int cha_hang1 = 0;
unsigned int cha_hang2 = 0;
unsigned int cha_hang3 = 0;
unsigned int cha_lie1 = 0;
unsigned int cha_lie2 = 0;
unsigned int cha_lie3 = 0;
unsigned int cha_zuoxia = 0;
unsigned int cha_youxia = 0;
unsigned int cha[8]={0};
void setup()
{
   Serial.begin(115200);
   for(int i=3; i<=8; i++) 
   pinMode(i,OUTPUT);
}

void loop(){

  if(Serial.available() != 0)
  {
    Serial.readBytes(RecievedTemp1, 20);
    for(cout_i = 0; cout_i < 19; cout_i ++)
    {
    Serial.println(RecievedTemp1[cout_i]);
    }
    switch(RecievedTemp1[13])
  {
  case 49:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image2\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang1++;
        quan_lie1++;
        quan_youxia++;
//        quan[0]++;
//        quan[3]++;
//        quan[7]++;
        Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button1\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image2\",\"image\":\"x\"}>ET"));
         r_flag1 = 0;
            cha_hang1++;
            cha_lie1++;
            cha_youxia++;
//        cha[0]++;
//        cha[3]++;
//        cha[7]++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button1\",\"enable\":false}>ET"));
        }
        
        break;
  case 50:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image3\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang1++;
            quan_lie2++;
//        quan[0]++;
//        quan[4]++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button2\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image3\",\"image\":\"x\"}>ET"));
         r_flag1 = 0;
         cha_hang1++;
           cha_lie2++;
//        cha[0]++;
//        cha[4]++;
           Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button2\",\"enable\":false}>ET"));
        }
        break;
  case 51:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image4\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang1++;
            quan_lie3++;
            quan_zuoxia++;
//        quan[0]++;
//        quan[5]++;
//        quan[6]++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button3\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image4\",\"image\":\"x\"}>ET"));
         r_flag1 = 0;
         cha_hang1++;
           cha_lie3++;
            cha_zuoxia++;
//        cha[0]++;
//        cha[5]++;
//        cha[6]++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button3\",\"enable\":false}>ET"));
        }
        break;
  case 52:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image5\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang2++;
            quan_lie1++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button4\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image5\",\"image\":\"x\"}>ET"));
         r_flag1 = 0;
         cha_hang2++;
           cha_lie1++;
           Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button4\",\"enable\":false}>ET"));
        }
        break;
  case 53:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image6\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang2++;
            quan_lie2++;
            quan_zuoxia++;
            quan_youxia++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button5\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image6\",\"image\":\"x\"}>ET"));
          r_flag1 = 0;
          cha_hang2++;
            cha_lie2++;
            cha_zuoxia++;
            cha_youxia++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button5\",\"enable\":false}>ET"));
        }
        break;       
  case 54:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image7\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang2++;
            quan_lie3++;
//        quan[1]++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button6\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image7\",\"image\":\"x\"}>ET"));
         r_flag1 = 0;
         cha_hang2++;
           cha_lie3++;
           Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button6\",\"enable\":false}>ET"));
        }
        break;       
  case 55:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image8\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang3++;
            quan_lie1++;
            quan_zuoxia++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button7\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image8\",\"image\":\"x\"}>ET"));
         r_flag1 = 0;
         cha_hang3++;
           cha_lie1++;
            cha_zuoxia++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button7\",\"enable\":false}>ET"));
        }
        break;        
  case 56:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image9\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang3++;
            quan_lie2++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button8\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image9\",\"image\":\"x\"}>ET"));
         r_flag1 = 0;
         cha_hang3++;
           cha_lie2++;
           Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button8\",\"enable\":false}>ET"));
        }
        break;       
  case 57:
        if((r_flag1 == 0)&&(RecievedTemp1[14]==2))
        {
        Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image10\",\"image\":\"circle\"}>ET"));
        r_flag1 = 1;
        quan_hang3++;
            quan_lie3++;
            quan_youxia++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button9\",\"enable\":false}>ET"));
        }
        else if((r_flag1 == 1)&&(RecievedTemp1[14]==2))
        {
          Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image10\",\"image\":\"x\"}>ET"));
         r_flag1 = 0;
         cha_hang3++;
           cha_lie3++;
            cha_youxia++;
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button9\",\"enable\":false}>ET"));
        }
        break;
  case 48:
            r_flag1 = 0;
            quan_hang1=quan_hang2=quan_hang3=cha_hang1=cha_hang2=cha_hang3=0;
            quan_lie1=quan_lie2=quan_lie3=cha_lie1=cha_lie2=cha_lie3=0;
            quan_zuoxia=quan_youxia=cha_zuoxia=cha_youxia=0;
//            for(char count_i=50;count_i<58;count_i++)
//            {
//              Serial.println((("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image%c\",\"image\":\"bai\"}>ET"),count_i));
//              }
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image2\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image3\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image4\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image5\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image6\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image7\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image8\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image9\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_image\",\"type\":\"image\",\"widget\":\"image10\",\"image\":\"bai\"}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif4\",\"visible\":false}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif5\",\"visible\":false}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif6\",\"visible\":false}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif7\",\"visible\":false}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif8\",\"visible\":false}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif9\",\"visible\":false}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif10\",\"visible\":false}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif11\",\"visible\":false}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button9\",\"enable\":true}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button8\",\"enable\":true}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button7\",\"enable\":true}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button6\",\"enable\":true}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button5\",\"enable\":true}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button4\",\"enable\":true}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button3\",\"enable\":true}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button2\",\"enable\":true}>ET"));
            Serial.println(F("ST<{\"cmd_code\":\"set_enable\",\"type\":\"widget\",\"widget\":\"button1\",\"enable\":true}>ET"));
            
            break;
  }
  if((quan_hang1==3)||(cha_hang1==3))
      {
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif4\",\"visible\":true}>ET"));
      }
      else if((quan_hang2==3)||(cha_hang2==3))
      {
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif5\",\"visible\":true}>ET"));
      }
      else if((quan_hang3==3)||(cha_hang3==3))
      {
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif6\",\"visible\":true}>ET"));
      }
      else if((quan_lie1==3)||(cha_lie1==3))
      {
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif7\",\"visible\":true}>ET"));
      }
      else if((quan_lie2==3)||(cha_lie2==3))
      {
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif8\",\"visible\":true}>ET"));
      }
      else if((quan_lie3==3)||(cha_lie3==3))
      {
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif9\",\"visible\":true}>ET"));
      }
      else if((quan_zuoxia==3)||(cha_zuoxia==3))
      {
            Serial.println(F("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif11\",\"visible\":true}>ET"));
      }
      else if((quan_youxia==3)||(cha_youxia==3))
      {
            Serial.println(("ST<{\"cmd_code\":\"set_visible\",\"type\":\"widget\",\"widget\":\"gif10\",\"visible\":true}>ET"));
      }
  }
}
