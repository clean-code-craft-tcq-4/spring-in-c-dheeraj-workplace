/* This header file includes the functions required to run TEST3 */

unsigned int emailAlertCallCount = 0, ledAlertCallCount = 0;

typedef void (*alerter_funcptr)(void);

/* alert using email */
void emailAlerter(void);

/* function to alert using led */
void ledAlerter(void);

/* check for the value and calls the alerters */
void check_and_alert(const float threshold, alerter_funcptr alerter, struct Stats stat);
