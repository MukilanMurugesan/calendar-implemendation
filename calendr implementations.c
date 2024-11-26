//write your code here..
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EVENTS 100

// Structure to store an event
typedef struct {
    int day;
    int month;
    int year;
    char description[100];
} Event;

Event eventList[MAX_EVENTS];
int eventCount = 0;

// Array to hold the names of the months
const char *monthNames[] = {
    "Invalid", "January", "February", "March", "April", "May", "June", 
    "July", "August", "September", "October", "November", "December"
};

// Function to check if the given year is a leap year
int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
}