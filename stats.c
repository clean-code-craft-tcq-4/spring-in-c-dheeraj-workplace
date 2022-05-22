#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    if(setlength != 0)
    {
        if(setlength == 1)
        {
            s.average = numberset[0];
            s.min = numberset[0];
            s.max = numberset[0];
        }
        else
        {
            /* Finding the average, max and min value. */
            s.min = numberset[0];
            s.max = numberset[0];
            s.average = numberset[0];
            for(int index = 1; index < setlength; index++)
            {
                s.average += numberset[index];
                
                if(numberset[index] > s.max)
                {
                    s.max = numberset[index];
                }
                
                if(numberset[index] < s.min)
                {
                    s.min = numberset[index];
                }
            }
            s.average /= setlength;
        }
    }
    
    /* Returning the structure */
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
