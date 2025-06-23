# Kompilator
CC = gcc

# Flagi kompilatora
CFLAGS = -Wall -Wextra -std=c99 -IAPP -IBSW/GPIO -IBSW/DET -IMCAL -IRTE -IProjectConfig -ITesting -IUNITY

# Pliki źródłowe - aplikacja produkcyjna
SRC_APP = \
    main.c \
    APP/Swc_LightsControl.c \
    BSW/GPIO/Gpio.c \
    BSW/GPIO/Gpio_Cfg.c \
    BSW/DET/ErrorHandler.c \
    MCAL/Dio.c \
    RTE/Rte_LightsControl.c

# Pliki źródłowe - testy Unity
SRC_TEST_UNITY = \
    UNITY/unity.c \
    Testing/unity_main_test.c \
    Testing/unity_test_gpio.c

# Pliki źródłowe - testy ręczne (bez Unity)
SRC_TEST_MANUAL = \
    Testing/main_test.c \
    Testing/test_gpio.c

# Nazwy plików wynikowych
TARGET_APP = app_main
TARGET_TEST_UNITY = app_test_unity
TARGET_TEST_MANUAL = app_test_manual

.PHONY: all clean test app

all: $(TARGET_APP)

app: $(TARGET_APP)

test: test_unity test_manual

test_unity: $(TARGET_TEST_UNITY)

test_manual: $(TARGET_TEST_MANUAL)

$(TARGET_APP): $(SRC_APP)
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_TEST_UNITY): $(SRC_TEST_UNITY) BSW/GPIO/Gpio.c BSW/GPIO/Gpio_Cfg.c BSW/DET/ErrorHandler.c MCAL/Dio.c
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_TEST_MANUAL): $(SRC_TEST_MANUAL) BSW/GPIO/Gpio.c BSW/GPIO/Gpio_Cfg.c BSW/DET/ErrorHandler.c MCAL/Dio.c RTE/Rte_LightsControl.c APP/Swc_LightsControl.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET_APP) $(TARGET_TEST_UNITY) $(TARGET_TEST_MANUAL)
