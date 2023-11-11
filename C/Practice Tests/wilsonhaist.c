#include <stdio.h>

int main() {
    int numTreats, numAWants, numBWants;
    
    scanf("%d %d %d", &numTreats, &numAWants, &numBWants);

    int aTreatWants[numAWants];
    int bTreatWants[numBWants];

    for (int i = 0; i < numAWants; i++) {
        scanf("%d", &aTreatWants[i]);
    }

    for (int i = 0; i < numBWants; i++) {
        scanf("%d", &bTreatWants[i]);
    }

    int giveATreats[numTreats];
    int giveBTreats[numTreats];

    for (int i = 0; i < numTreats; i++) {
        giveATreats[i] = 0;
        giveBTreats[i] = 0;
    }

    for (int i = 0; i < numAWants; i++) {
        for (int j = 0; j < numTreats; j++) {
            if (aTreatWants[i] == giveATreats[j]) {
                break;
            }
            if (giveATreats[j] == 0) {
                giveATreats[j] = aTreatWants[i];
                break;
            }
        }
    }

    for (int i = 0; i < numBWants; i++) {
        int treatGiven = 0;
        for (int j = 0; j < numTreats; j++) {
            if (bTreatWants[i] == giveATreats[j]) {
                treatGiven = 1;
                break;
            }
        }
        if (!treatGiven) {
            for (int j = 0; j < numTreats; j++) {
                if (giveBTreats[j] == 0) {
                    giveBTreats[j] = bTreatWants[i];
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= numTreats; i++) {
        for (int j = 0; j < numTreats; j++) {
            if (giveATreats[j] == i) {
                printf("1 ");
            } else if (giveBTreats[j] == i) {
                printf("2 ");
            }
        }
    }
    
    printf("\n");

    return 0;
}
