## 🚀 How to Run | نحوه اجرا

### 1️⃣ Hardware Setup | تنظیم سخت‌افزار:
- Connect each LED to one of the pins defined in the `LEDpin` array using a 220-ohm resistor.  
  هر LED را با استفاده از یک مقاومت 220 اهم به یکی از پایه‌های تعریف شده در آرایه `LEDpin` متصل کنید.  
- Connect the other end of the resistors to Arduino digital pins and the LED cathodes to GND.  
  انتهای دیگر مقاومت‌ها را به پایه‌های دیجیتال آردوینو و کاتد LEDها را به پایه GND متصل کنید.

### 2️⃣ Upload the Code | آپلود کد:
- Open the code in Arduino IDE.  
  کد را در Arduino IDE باز کنید.  
- Select the appropriate board and port.  
  برد و پورت مناسب را انتخاب کنید.  
- Upload the code to the board.  
  کد را به برد آردوینو آپلود کنید.

### 3️⃣ Test Functionality | تست عملکرد:
- Open the serial monitor and set the baud rate to **115200**.  
  مانیتور سریال را باز کرده و نرخ انتقال را روی **115200** تنظیم کنید.  
- Send a number between 0 and 255 via the serial monitor.  
  یک عدد بین 0 تا 255 از طریق مانیتور سریال ارسال کنید.  
- Each bit of the sent number will control the state of a corresponding LED (ON/OFF).  
  هر بیت از عدد ارسالی وضعیت روشن یا خاموش بودن LED متناظر را کنترل می‌کند.

---

## 🔧 Requirements | پیش‌نیازها

### Hardware | سخت‌افزار:
- Arduino board (e.g., Uno, Mega, or similar)  
  برد آردوینو (مانند Uno، Mega یا مشابه)  
- 8 LEDs  
  8 عدد LED  
- 8 resistors (220 ohms)  
  8 عدد مقاومت 220 اهم  
- Jumper wires  
  سیم‌های جامپر  

### Software | نرم‌افزار:
- Arduino IDE  
  آردوینو IDE  

---

## 📋 Features | ویژگی‌ها

- **Control 8 LEDs individually using a single input number.**  
  کنترل 8 LED به صورت مستقل با استفاده از یک عدد ورودی.  
- **Simplified LED pin management using an array.**  
  مدیریت ساده پایه‌های LED با استفاده از آرایه.  
- **Supports serial communication at a baud rate of 115200.**  
  پشتیبانی از ارتباط سریال با نرخ انتقال 115200.  
