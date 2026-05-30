#include <stdio.h>

/*Read the temperatures of 7 days into a vector.

Then show:

The average temperature.
How many days were above the average.
The highest temperature.
The day/position where the highest temperature occurred.*/

//Declare variables

float temp[7];
float average;
float aboveAverage;
float highest=0;
int day;

//Program start

int main() {

    //Save the 7 day temperatures into a array, save the highest temperature, the day and add all the values to calculate the average

    for(int i=0; i<7; i++){
        printf("Insert the week's temperature: ");
        scanf("%f", &temp[i]);
        average = average + temp[i];
            if(temp[i] > highest){
            highest = temp[i];
            day = i;
            }
        }    

    //Calculate the average

    average = average / 7;

    //Calculate how many days above average

    for(int i=0; i<7; i++){
        if(temp[i] > average){
            aboveAverage++;
        }
    }

    //Tell the user the detailed report

    printf("This week's average temperature was %.1f. The highest temperature was %.1f and it was recorded on day %i", average, highest, day+1);

    return 0;
        
    }