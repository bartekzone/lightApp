Projekt **lightApp** to lekka aplikacja w języku C z kilkoma wartwami

lightApp/
├── APP/ # Logika aplikacji (SWC)
├── BSW/ # Basic Software: np. GPIO, konfiguracja
│ └── GPIO/
│ 	├── Gpio.c
│ 	├── Gpio.h
│ 	└── Gpio_Cfg.c
   └──  DET/ # Error Handler
├── MCAL/ # Warstwa abstrakcji sprzętowej (np. Dio)
├── RTE/ # RTE (pośrednik między SWC a MCAL)
├── UNITY/ # Framework testowy Unity
├── Testing/ # Twoje testy (Unity i ręczne)
├── main.c # Główna aplikacja
├── Makefile # Skrypt budujący
└── README.md # Dokumentacja projektu

📋 Wymagania
✅ GCC (kompilator C)

✅ Make (system budowania)

✅ Git (do wersjonowania)

✅ Ruby (jeśli chcesz korzystać z CMock – opcjonalnie)

✅ MSYS2 / Git Bash lub inny terminal dla Windows

## 🚀 Jak uruchomić

### 🔨 Budowanie aplikacji
```bash
make app
make test

Komenda make test uruchamia testy z Unity oraz opcjonalnie testy ręczne, jeśli są zdefiniowane w Makefile