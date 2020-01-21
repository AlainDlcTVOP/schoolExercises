#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_NAMNLANGD 10
#define MAX_ANTAL_MONSTER_PER_RUM 5
#define MAX_ANTAL_RUM 100

struct Monster {
    int nummer;
    char namn[MAX_NAMNLANGD + 1]; // + 1 för '\0'
    double storlek;
};

struct Monster gluggo = { 17, "Gluggo", 2000 };

struct Rum {
    int nummer;
    struct Monster monster[MAX_ANTAL_MONSTER_PER_RUM];
    int antal_monster;
};

struct Rum rum[MAX_ANTAL_RUM];
int antal_rum = 0;

int totalt_antal_monster(struct Rum rum[], int antal_rum) {
    int summa = 0;
    for (int i = 0; i < antal_rum; ++i)
        summa += rum[i].antal_monster;
    return summa;
}

int main_6(void) {
    int antalet = totalt_antal_monster(rum, antal_rum);
    printf("Det totala antalet monster är %d.\n", antalet);
}








void visa_monster(struct Monster m) {
    printf("Nummer: %d\n", m.nummer);
    printf("Namn: %s\n", m.namn);
    printf("Storlek: %f\n", m.storlek);
}

void visa_rum(struct Rum r) {
    printf("Rumsnummer: %d\n", r.nummer);
    printf("Rummet innehåller %d monster:\n", r.antal_monster);
    for (int i = 0; i < r.antal_monster; ++i)
        visa_monster(r.monster[i]);
}

struct Monster las_monster(void) {
    struct Monster m;
    printf("Ange monstrets nummer: ");
    scanf("%d", &m.nummer);
    printf("Ange monstrets namn: ");
       // Vi antar att namn inte kan innehålla blanktecken
    // Vi kollar inte maxlängden heller
    scanf("%s", m.namn);
    printf("Ange monstrets storlek: ");
    scanf("%lf", &m.storlek);
    return m;
}

struct Rum las_rum(void) {
    struct Rum r;
    printf("Ange rummets nummer: ");
    scanf("%d", &r.nummer);
    printf("Ange antalet monster som finns i rummet (max 5): ");
    scanf("%d", &r.antal_monster);
    for (int i = 0; i < r.antal_monster; ++i) {
        printf("Ange data för monster nummer %d!\n", i + 1);        
        r.monster[i] = las_monster();
    }
    return r;
}

int main(void) {
    struct Rum rum1 = las_rum();
    struct Rum rum2 = las_rum();
    double maxstorlek = 0;
    for (int i = 0; i < rum1.antal_monster; ++i) {
        if (rum1.monster[i].storlek > maxstorlek)
            maxstorlek = rum1.monster[i].storlek;
    }
    for (int i = 0; i < rum2.antal_monster; ++i) {
        if (rum2.monster[i].storlek > maxstorlek)
            maxstorlek = rum2.monster[i].storlek;
    }
    // Vi antar att det finns minst ett monster,
    // och att det bara är ett som är störst
    for (int i = 0; i < rum1.antal_monster; ++i) {
        if (rum1.monster[i].storlek == maxstorlek)
            visa_monster(rum1.monster[i]);
    }
    for (int i = 0; i < rum2.antal_monster; ++i) {
        if (rum2.monster[i].storlek == maxstorlek)
            visa_monster(rum2.monster[i]);
    }
    return 0;
}


