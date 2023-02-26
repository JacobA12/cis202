Toll roads have different fees at different times of the day and on weekends. Write a function CalcToll() that has three arguments: the current hour of time (int), whether the time is morning (bool), and whether the day is a weekend (bool). The function returns the correct toll fee (double), based on the chart below.

Weekday Tolls

Before 7:00 am ($1.15)
7:00 am to 9:59 am ($2.95)
10:00 am to 2:59 pm ($1.90)
3:00 pm to 7:59 pm ($3.95)
Starting 8:00 pm ($1.40)
Weekend Tolls

Before 7:00 am ($1.05)
7:00 am to 7:59 pm ($2.15)
Starting 8:00 pm ($1.10)
Ex: The function calls below, with the given arguments, will return the following toll fees:

CalcToll(8, true, false) returns 2.95
CalcToll(1, false, false) returns 1.90
CalcToll(3, false, true) returns 2.15
CalcToll(5, true, true) returns 1.05