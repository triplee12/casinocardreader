/**
* Program to evaluate face values.
* Released under the Vegas Public License.
* (c)2014 The College Blackjack Team.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int counter = 0;

    while (card_name[0] != 'X')
    {
        puts("Enter card name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if ((val < 1) || (val > 10))
                {
                    puts("I don't understand that value");
                    continue;
                }
        }
        printf("The card value is: %i\n", val);
        /* Check if the value is 3 to 6 */
        if (val <= 6 && val >= 3){
            puts("Count has gone up");
            counter++;
        } else if (card_name[0] == 'K' || card_name[0] == 'Q' || card_name[0] == 'J' || val == 10){
            puts("Count has gone down");
            counter--;
        }
        printf("Current count: %i\n", counter);
    }
    return 0;
}