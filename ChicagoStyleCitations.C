#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main() {

  // declare variables
  char lastName[100] = "pass";
  char firstName[100] = "pass";
  char articleTitle[200] = "pass";
  char websiteName[200] = "pass";
  char publishingOrganization[200] = "pass";
  char publishingMonth[50] = "pass";
  int publishingDay = 0;
  int publishingYear = 0;
  char websiteurl[500] = "pass";
  bool stop = false;
  char continueStatus[2] = "x";
  
  
  while (stop != true) {
  
    // collect user input
    printf("\nWhat is the author's last name?\n");
    scanf(" %[^\n]s", lastName);
    printf("\nWhat is the author's first name?\n");
    scanf(" %[^\n]s", firstName);
    printf("\nWhat is the article's title?\n");
    scanf(" %[^\n]s", articleTitle);
    printf("\nWhat is the website's name?\n");
    scanf(" %[^\n]s", websiteName);
    printf("\nWhat is the publishing organization?\n");
    scanf(" %[^\n]s", publishingOrganization);
    printf("\nWhat is the month it was published?\n");
    scanf(" %[^\n]%*c", &publishingMonth);
    printf("\nWhat day was it published?\n");
    scanf(" %d", &publishingDay);
    printf("\nWhat year was it published?\n");
    scanf(" %d", &publishingYear);
    printf("\nPlease enter the website url.\n");
    scanf(" %[^\n]s", websiteurl);

    
    // display input in correct format if it was given
    printf("\n\n");
    if (strcmp(lastName, "pass") != 0) {
      printf("%s,", lastName);
    } // end if
    if (strcmp(firstName, "pass") != 0) {
      printf(" %s.", firstName);
    } // end if
    if (strcmp(articleTitle, "pass") != 0) {
      printf(" \"%s.\"", articleTitle);
    } // end if
    if (strcmp(websiteName, "pass") != 0) {
      printf(" %s.", websiteName);
    } // end if
    if (strcmp(publishingOrganization, "pass") != 0) {
      printf(" %s,", publishingOrganization);
    } // end if
    if (strcmp(publishingMonth, "pass") != 0) {
      printf(" %s ", publishingMonth);
    } // end if
    if (publishingDay != 0) {
      printf("%d, ", publishingDay);
    } // end if
    if (publishingYear != 0) {
      printf("%d.", publishingYear);
    } // end if
    else if (publishingYear == 0) {
      printf(" Accessed January 26, 2023. ");
    } // end if
    if (strcmp(websiteurl, "pass") != 0) {
      printf(" %s.", websiteurl);
    } // end if
    
    
    // option to loop and add another citation
    printf("\n\nWould you like to enter another?\n");
    scanf(" %c", continueStatus);
    if (strcmp(continueStatus, "Y") == 0 || strcmp(continueStatus, "y") == 0) {
      stop = false;
    } // end if
    else {
      stop = true;
    } // end else
    
    
  } // end while
} //end main
