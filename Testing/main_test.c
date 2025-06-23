#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// ----------------------
// Ustawienie: włącz/wyłącz testy
#define ENABLE_TESTS 1
// ----------------------

// Makro uruchamiające test i wypisujące wynik
#define RUN_TEST(test_fn) \
    do { \
        printf("[RUNNING] %s...\n", #test_fn); \
        test_fn(); \
        printf("[PASSED ] %s\n", #test_fn); \
    } while (0)
// ----------------------

// Deklaracje funkcji testowych
void test_gpio_set_valid_led(void);
void test_gpio_set_invalid(void);
void test_gpio_set_valid_relay(void);
void test_gpio_set_valid_fullsize(void);
void test_gpio_set_invalid_fullsize(void);
void test_gpio_set_invalid_fullsizeone(void);
void test_gpio_set_invalid_dummmy(void);
void test_gpio_clear_valid(void);
void test_gpio_clear_invalid(void);
// ----------------------

// Entry point dla testów
void run_all_tests(void) {
    RUN_TEST(test_gpio_set_valid_led);
    RUN_TEST(test_gpio_clear_invalid);
    RUN_TEST(test_gpio_set_valid_relay);
    RUN_TEST(test_gpio_set_valid_fullsize);
    RUN_TEST(test_gpio_set_invalid_fullsize);
    RUN_TEST(test_gpio_set_invalid_fullsizeone);
    RUN_TEST(test_gpio_set_invalid_dummmy);
    RUN_TEST(test_gpio_clear_valid);
    RUN_TEST(test_gpio_clear_invalid);
    // Dodaj tu kolejne testy
}

int main(void) {
#if ENABLE_TESTS
    printf("=== RUNNING UNIT TESTS ===\n");
    run_all_tests();
    printf("=== ALL TESTS PASSED ===\n");
#else
    printf("Testy są wyłączone. Przejdź do kodu aplikacji.\n");
    // Tutaj możesz uruchomić aplikację zamiast testów
    // e.g. App_Lights_TurnOnLed();
#endif
    return 0;
}