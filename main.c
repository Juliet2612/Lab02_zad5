#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    int wybor;
    double pole;
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);

    printf("Wybierz figurę geometryczną:\n");
    printf("1. Kwadrat\n");
    printf("2. Trójkąt\n");
    printf("3. Okrąg\n");

    printf("Podaj numer wybranej figury: ");
    scanf("%d", &wybor);

    if (wybor == 1) {
        double bok;
        printf("Podaj długość boku kwadratu: ");
        scanf("%lf", &bok);
        pole = bok * bok;
        printf("Pole kwadratu wynosi: %lf\n", pole);
    } else if (wybor == 2) {
        double podstawa, wysokosc;
        printf("Podaj długość podstawy trójkąta: ");
        scanf("%lf", &podstawa);
        printf("Podaj wysokość trójkąta: ");
        scanf("%lf", &wysokosc);
        pole = 0.5 * podstawa * wysokosc;
        printf("Pole trójkąta wynosi: %lf\n", pole);
    } else if (wybor == 3) {
        double promien;
        printf("Podaj promień okręgu: ");
        scanf("%lf", &promien);
        pole = M_PI * promien * promien; // Używamy wartości π z biblioteki math.h
        printf("Pole okręgu wynosi: %lf\n", pole);
    } else {
        printf("Niepoprawny wybór figury. Wybierz 1, 2 lub 3.\n");
    }

    return 0;
}
