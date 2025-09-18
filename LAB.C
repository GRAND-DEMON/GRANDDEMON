#include <stdio.h>
#include <string.h>
int main()
{
    while (1)
{
 char fn[100];
    printf("ENTER YOUR FULL NAME (IN CAPITAL LETTERS,ENTER 1 TO EXIT)\n");
    fgets(fn, sizeof(fn), stdin);
    fn[strcspn(fn, "\n")] = '\0'; 
    if (strcmp(fn, "1") == 0) {
        printf("YOU HAVE EXITED THE PROGRAM");
        break;
    }
    (strcmp(fn, "AAYUSH SAINI") == 0 ||
    strcmp(fn, "ABHAYRAJ SINGH") == 0 ||
    strcmp(fn, "ABHINAV") == 0 ||
    strcmp(fn, "ABHISHEK GURJAR") == 0 ||
    strcmp(fn, "ABHISHEK OJHA") == 0 ||
    strcmp(fn, "AJAY KUMAR TANK") == 0 ||
    strcmp(fn, "AJAY SAHU") == 0 ||
    strcmp(fn, "AJAY SHARMA") == 0 ||
    strcmp(fn, "ALFEZ KHAN") == 0 ||
    strcmp(fn, "ALIYA") == 0 ||
    strcmp(fn, "ALVEERA KHAN") == 0 ||
    strcmp(fn, "AMIT KUMAR SOUGARIA") == 0 ||
    strcmp(fn, "AMIT SUMAN") == 0 ||
    strcmp(fn, "ANAND KISHOR RATAN") == 0 ||
    strcmp(fn, "ANANYA MISHRA") == 0 ||
    strcmp(fn, "ANKIT KUMAR NAGAR") == 0 ||
    strcmp(fn, "ANJU SHARMA") == 0 ||
    strcmp(fn, "ANWAR AHMED") == 0 ||
    strcmp(fn, "ARJUN MALAV") == 0 ||
    strcmp(fn, "ARJUN RATHORE") == 0 ||
    strcmp(fn, "ARPITA SHARMA") == 0 ||
    strcmp(fn, "ARUSHI SAXENA") == 0 ||
    strcmp(fn, "ASAD") == 0 ||
    strcmp(fn, "ASHISH SINGH YADAV") == 0 ||
    strcmp(fn, "BHAVIKA PATIL") == 0 ||
    strcmp(fn, "BHUMIKA TANDON") == 0 ||
    strcmp(fn, "BHUVNESH MAHAWAR") == 0 ||
    strcmp(fn, "CHANDRA SHEKHAR") == 0 ||
    strcmp(fn, "CHITRAKSHI HADA") == 0 ||
    strcmp(fn, "DARSHIKA YADVENDU") == 0 ||
    strcmp(fn, "DEEKSHITA SEN") == 0 ||
    strcmp(fn, "DEEPAK SHARMA") == 0 ||
    strcmp(fn, "DEVKARAN") == 0 ||
    strcmp(fn, "DHEERAJ RATHORE") == 0 ||
    strcmp(fn, "DHRUVI KANWAR") == 0 ||
    strcmp(fn, "DILKASH JAHAN") == 0 ||
    strcmp(fn, "DIVYANSH BANSAL") == 0 ||
    strcmp(fn, "DIVYANSH SINGH RATHOD") == 0 ||
    strcmp(fn, "DOLLY SINGH") == 0 ||
    strcmp(fn, "GIRDHARI SAHITYA") == 0 ||
    strcmp(fn, "GIRISHA SHARMA") == 0 ||
    strcmp(fn, "HARISH PRAJAPATI") == 0 ||
    strcmp(fn, "HARIVANSH SHARMA") == 0 ||
    strcmp(fn, "HARSHIT SUMAN") == 0 ||
    strcmp(fn, "HARSHITA YOGI") == 0 ||
    strcmp(fn, "HEMANT BAGDI") == 0 ||
    strcmp(fn, "HIMANSHU KUMAR SAINI") == 0 ||
    strcmp(fn, "ISHAN SONI") == 0 ||
    strcmp(fn, "JAI SINGH") == 0 ||
    strcmp(fn, "JASPREET KAUR") == 0)?
    printf("YOUR LAB IS ON MONDAY AND THURSDAY\n\n"):
    (strcmp(fn, "JASVANT GUJJAR") == 0 ||
        strcmp(fn, "JATIN GOCHAR") == 0 ||
        strcmp(fn, "JIGYASA VYAS") == 0 ||
        strcmp(fn, "JYOTI RATHOR") == 0 ||
        strcmp(fn, "JYOTI SHARMA") == 0 ||
        strcmp(fn, "KAPIL NAGAR") == 0 ||
        strcmp(fn, "KARTIK SWAMI") == 0 ||
        strcmp(fn, "KARTIK VIJAYVARGIYA") == 0 ||
        strcmp(fn, "KASHISH GAUTAM") == 0 ||
        strcmp(fn, "KASHISH JAIN") == 0 ||
        strcmp(fn, "KAUSTUBH KUMAWAT") == 0 ||
        strcmp(fn, "KAVYANSHU SINGH") == 0 ||
        strcmp(fn, "KULDEEP") == 0 ||
        strcmp(fn, "KULDEEP NAMA") == 0 ||
        strcmp(fn, "KULDEEP PAL JADAUN") == 0 ||
        strcmp(fn, "KULDEEP SINGH") == 0 ||
        strcmp(fn, "LAKSHIKA NANDWANA") == 0 ||
        strcmp(fn, "LAVISH SHARMA") == 0 ||
        strcmp(fn, "MAHAKPREET KAUR") == 0 ||
        strcmp(fn, "MAHENDRA SAHU") == 0 ||
        strcmp(fn, "MANAS SHRINGI") == 0 ||
        strcmp(fn, "MANMOHAN") == 0 ||
        strcmp(fn, "MANPREET KAUR") == 0 ||
        strcmp(fn, "MANTHAN GUPTA") == 0 ||
        strcmp(fn, "MAYANK MEENA") == 0 ||
        strcmp(fn, "BHANU NAGAR") == 0 ||
        strcmp(fn, "MAYANK MEHRA") == 0 ||
        strcmp(fn, "MAYANK RATHORE") == 0 ||
        strcmp(fn, "MAYANK SINGH") == 0 ||
        strcmp(fn, "MAYANK UPADHYAY") == 0 ||
        strcmp(fn, "MOHAMMAD AARISH") == 0 ||
        strcmp(fn, "MOHAMMAD AZAL") == 0 ||
        strcmp(fn, "MOHD. ZENUL ABDIN") == 0 ||
        strcmp(fn, "MOHIT") == 0 ||
        strcmp(fn, "MUSKAN KUMARI") == 0 ||
        strcmp(fn, "NANDANI LOHAR") == 0 ||
        strcmp(fn, "NAVEEN PANKAJ") == 0 ||
        strcmp(fn, "NEEV RANJNI") == 0 ||
        strcmp(fn, "NIKHIL BHATKARIYA") == 0 ||
        strcmp(fn, "NIKHIL SUMAN") == 0 ||
        strcmp(fn, "NIMISHA SINGH") == 0 ||
        strcmp(fn, "NISHANT SUMAN") == 0 ||
        strcmp(fn, "NITISH MAKHIJA") == 0 ||
        strcmp(fn, "NOSHEJ KHAN") == 0 ||
        strcmp(fn, "PALLAVI JANGID") == 0 ||
        strcmp(fn, "PAWAN KUMAR") == 0 ||
        strcmp(fn, "PIYUSH KUMAR") == 0 ||
        strcmp(fn, "PIYUSH PAL") == 0 ||
        strcmp(fn, "PREM KUMAR MEENA") == 0 ||
        strcmp(fn, "PREM PRAKASH SUMAN") == 0)?printf("YOUR LAB IS ON TUESDAY AND FRIDAY\n\n"):
        printf("YOUR ARE NOT IN BCA, GO TO YOUR FLOOR\n\n");
   }
    return 0;
}