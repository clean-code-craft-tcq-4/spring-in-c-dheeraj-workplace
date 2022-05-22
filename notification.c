#include "notification.h"

void emailAlerter(void)
{
  emailAlertCallCount++;
}

void ledAlerter(void)
{
  ledAlertCallCount++;
}

void check_and_alert(const float threshold, alerter_funcptr alerter, struct Stats stat)
{
  if(stat.max > threshold)
  {
     (*alerter[0]);
     (*alerter[1]);
  }
}
