#include <stdio.h>
#include <string.h>

int ToGallons(int totVolume, char initUnits);
int ToQuarts(int totVolume, char initUnits);
int ToPints(int totVolume, char initUnits);
int ToCups(int totVolume, char initUnits);
int ToOunces(int totVolume, char initUnits);

int main(void) {

  int inputVolume = 0;
  char inputUnits = '\0';
  char outputUnits = '\0';
  char outputUnitsSring[8] = "";

  printf("Enter your current measurement and unit of volume: ");
  scanf("%d", &inputVolume);
  scanf(" %c", &inputUnits);

  if (inputVolume >= 0 && (inputUnits == 'g' || inputUnits == 'q' || inputUnits == 'p' || inputUnits == 'c' || inputUnits == 'o')) {
    scanf("%c", &outputUnits);

    switch (outputUnits) {
      case 'g':
        strcpy(outputUnitsSring, "gallons");
        printf("You have %d %s of liquid\n", ToGallons(inputVolume, inputUnits), outputUnitsSring);
        break;

      case 'q':
        strcpy(outputUnitsSring, "quarts");
        printf("You have %d %s of liquid\n", ToQuarts(inputVolume, inputUnits), outputUnitsSring);
        break;

      case 'p':
        strcpy(outputUnitsSring, "pints");
        printf("You have %d %s of liquid\n", ToPints(inputVolume, inputUnits), outputUnitsSring);
        break;

      case 'c':
        strcpy(outputUnitsSring, "cups");
        printf("You have %d %s of liquid\n", ToCups(inputVolume, inputUnits), outputUnitsSring);
        break;

      case 'o':
        strcpy(outputUnitsSring, "ounces");
        printf("You have %d %s of liquid\n", ToOunces(inputVolume, inputUnits), outputUnitsSring);
        break;

      default:
        printf("Error! Enter one of ’g’ for gallons, ’q’ for quarts, ’p’ for pints, ’c’ for cups, or ’o’ for ounces.\n");
        break;
    }
  }
  else {
    if (inputVolume < 0) {
      printf("Error! You entered a negative number.\n");
    }
    if (!(inputUnits == 'g' || inputUnits == 'q' || inputUnits == 'p' || inputUnits == 'c' || inputUnits == 'o')) {
      printf("Error! Enter one of ’g’ for gallons, ’q’ for quarts, ’p’ for pints, ’c’ for cups, or ’o’ for ounces.\n");
    }
  }

  return 0;
}

int ToGallons(int totVolume, char initUnits) {

  switch (initUnits) {

    case 'g':
      return totVolume;

    case 'q':
      return totVolume / 4;

    case 'p':
      return totVolume

    case 'c':
      strcpy(outputUnitsSring, "cups");
      printf("You have %d %s of liquid\n", ToCups(inputVolume, inputUnits), outputUnitsSring);
      break;

    case 'o':
      strcpy(outputUnitsSring, "ounces");
      printf("You have %d %s of liquid\n", ToOunces(inputVolume, inputUnits), outputUnitsSring);
      break;

    default:
      printf("Error! Enter one of ’g’ for gallons, ’q’ for quarts, ’p’ for pints, ’c’ for cups, or ’o’ for ounces.\n");
      break;
  }
}
