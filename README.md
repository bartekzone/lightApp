Projekt **lightApp** to aplikacja w języku C z kilkoma wartwami.

Projekt zorganizowany jest w warstwy: MCAL, BSW, RTE, APP oraz ProjectConfig, aby zachować warstwowy układ architektury i umożliwić dalszy rozwój.

Projekt powstał jako pomoc naukowa do kursu "C dla zaawasowanych" by UCEGOSU: https://cdlazaawansowanych.pl/

Konfiguracje płytki zaczerpnięte z kursu youtube "STM32 na Resjestrach" by msalamon: https://www.youtube.com/@msalamon/playlists

Koncepcja wartsw aplikacji na podstawie strony: https://yoginsavani.com/understanding-autosar-architecture-a-guide-to-automotive-software-integration/

<pre lang="markdown"> <code> ``` 
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
``` </code> </pre>

Wymagania

- GCC (kompilator C)

- Make (system budowania)

- Git (do wersjonowania)

- MSYS2 / Git Bash lub inny terminal dla Windows

Jak uruchomić
make app
make test

Komenda make test uruchamia testy z Unity oraz opcjonalnie testy ręczne, jeśli są zdefiniowane w Makefile
