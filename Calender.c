#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_first_weekDay(int year)
{
    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}

void print_calendar(int year)
{
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    int days_in_month[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        days_in_month[1] = 29;
    }
    else
    {
        days_in_month[1] = 28;
    }

    int starting_day = get_first_weekDay(year);

    for (int month = 0; month < 12; month++)
    {
        printf("\n\n---------------%s---------------\n\n", months[month]);
        printf("\n Sun Mon Tue Wed Thu Fri Sat\n");

        int week_day = starting_day;
        for (int i = 0; i < starting_day; i++)
        {
            printf("    ");
        }

        for (int day = 1; day <= days_in_month[month]; day++)
        {

            printf("%5d", day);
            if (++week_day > 6)
            {
                printf("\n");
                week_day = 0;
            }
        }
        starting_day = week_day;
    }
    printf("\n\n----------------THANK YOU----------------\n\n");
}

void jayantis_particular_month(int month)
{
    char m[20];
    printf("ENTER A MONTH TO SEE THE JAYANTI's IN THE MONTH:\n");
    scanf(" %s", m);
    printf("THE JAYANTI's IN THE MONTH ARE:\n");
    if (strcmp(m, "January") == 0)
    {
        printf("\nJAN 12 (SWAMI VIVEKANANDA JAYANTI)\n");
        printf("\nJAN 20 (GURU GOBIND SINGH JAYANTI)\n");
        printf("\nJAN 23 (NETAJI SUBASH CHANDRA BOSE JAYANTI)\n");
    }
    else if (strcmp(m, "February") == 0)
    {

        printf("\nFEB 19 (CHATRAPATI SHIVAJI JAYANTI)\n");
        printf("\nFEB 27 (GURU RAVIDAS JAYANTI)\n");
    }
    else if (strcmp(m, "March") == 0)
    {
        printf("\nMAR 9 (JANAKI JAYANTI)\n");
        printf("\nMAR 15 (RAMAKRISHNA JAYANTI)\n");
        printf("\nMAR 28 (LAKSHMI JAYANTI)\n");
    }
    else if (strcmp(m, "April") == 0)
    {
        printf("\nAPR 5 (BABU JAGJIVAN RAM JAYANTI)\n");

        printf("\nAPR 14 (DR.AMBEDKAR JAYANTI)\n");
        printf("\nAPR 25 (MAHAVIR JAYANTI)\n");
    }
    else if (strcmp(m, "May") == 0)
    {

        printf("\nMAY 7 (RABINDRANATH TAGORE JAYANTI)\n");

        printf("\nMAY 26 (BUDDHA JAYANTI)\n");
    }
    else if (strcmp(m, "June") == 0)
    {
        printf("\nJUN 13 (MAHARANA PRATAP JAYANTI)\n");
        printf("\nJUN 24 (SANT GURU KABIR JAYANTI)\n");
    }
    else if (strcmp(m, "July") == 0)
    {
        printf("\nJULY 5 (GURU HARGOBIND JAYANTI)\n");
    }
    else if (strcmp(m, "August") == 0)
    {
        printf("\nNO JAYANTI IN THIS MONTH\n");
    }
    else if (strcmp(m, "September") == 0)
    {
        printf("\nSEP 6 (RAMDEV JAYANTI)\n");
        printf("\nSEP 10 (SRI NARAYANA GURU JAYANTI)\n");
        printf("\nSEP 26 (MAHARAJA AGRASEN JAYANTI)\n");
        printf("\nSEP 28 (BHAGHAT SINGH JAYANTI)\n");
    }
    else if (strcmp(m, "October") == 0)
    {
        printf("\nOCT 2 (GANDHI JAYANTI)\n");
        printf("\nOCT 31 (SARDAR VALLABHAI PATEL JAYANTI)\n");
    }
    else if (strcmp(m, "November") == 0)
    {
        printf("\nNOV 14 (NEHRU JAYANTI)\n");
        printf("\nNOV 19 (GURU NANAK JAYANTI)\n");
    }
    else if (strcmp(m, "December") == 0)
    {
        printf("\nNO JAYANTI IN THIS MONTH\n");
    }
    else
    {
        printf("\nInvalid month. Please try again.\n");
    }
}

void printAllJayantis()
{
    printf("\nJAN 12 (SWAMI VIVEKANANDA JAYANTI)\n");
    printf("\nJAN 20 (GURU GOBIND SINGH JAYANTI)\n");
    printf("\nJAN 23 (NETAJI SUBASH CHANDRA BOSE JAYANTI)\n");
    printf("\nFEB 19 (CHATRAPATI SHIVAJI JAYANTI)\n");
    printf("\nFEB 27 (GURU RAVIDAS JAYANTI)\n");
    printf("\nMAR 9 (JANAKI JAYANTI)\n");
    printf("\nMAR 15 (RAMAKRISHNA JAYANTI)\n");
    printf("\nMAR 28 (LAKSHMI JAYANTI)\n");
    printf("\nAPR 5 (BABU JAGJIVAN RAM JAYANTI)\n");
    printf("\nAPR 14 (DR.AMBEDKAR JAYANTI)\n");
    printf("\nAPR 25 (MAHAVIR JAYANTI)\n");
    printf("\nMAY 7 (RABINDRANATH TAGORE JAYANTI)\n");
    printf("\nMAY 26 (BUDDHA JAYANTI)\n");
    printf("\nJUN 13 (MAHARANA PRATAP JAYANTI)\n");
    printf("\nJUN 24 (SANT GURU KABIR JAYANTI)\n");
    printf("\nJULY 5 (GURU HARGOBIND JAYANTI)\n");
    printf("\nNO JAYANTI IN AUGUST\n");
    printf("\nSEP 6 (RAMDEV JAYANTI)\n");
    printf("\nSEP 10 (SRI NARAYANA GURU JAYANTI)\n");
    printf("\nSEP 26 (MAHARAJA AGRASEN JAYANTI)\n");
    printf("\nSEP 28 (BHAGHAT SINGH JAYANTI)\n");
    printf("\nOCT 2 (GANDHI JAYANTI)\n");
    printf("\nOCT 31 (SARDAR VALLABHAI PATEL JAYANTI)\n");
    printf("\nNOV 14 (NEHRU JAYANTI)\n");
    printf("\nNOV 19 (GURU NANAK JAYANTI)\n");
    printf("\nNO JAYANTI IN DECEMBER\n");
}

void printPublicHolidaysOfMonth(char *month)
{
    printf("THE PUBLIC HOLIDAYS IN THE MONTH ARE:\n");
    if (strcmp(month, "January") == 0)
    {
        printf("\nJAN 14 (BHOGI)\n");
        printf("\nJAN 15 (MAKARA SANKRANTI)\n");
        printf("\nJAN 16 (KANUMA)\n");
        printf("\nJAN 26 (REPUBLIC DAY)\n");
    }
    else if (strcmp(month, "February") == 0)
    {
        printf("\nNO PUBLIC HOLIDAYS IN THIS MONTH\n");
    }
    else if (strcmp(month, "March") == 0)
    {
        printf("\nMAR 1 (MAHA SHIVARATRI)\n");
        printf("\nMAR 18 (HOLI)\n");
    }
    else if (strcmp(month, "April") == 0)
    {
        printf("\nAPR 2 (UGADI)\n");
        printf("\nAPR 10 (SRI RAMA NAVAMI)\n");
        printf("\nAPR 15 (GOOD FRIDAY)\n");
    }
    else if (strcmp(month, "May") == 0)
    {
        printf("\nMAY 3 (RAMZAN)\n");
    }
    else if (strcmp(month, "June") == 0)
    {
        printf("\nNO PUBLIC HOLIDAYS IN THIS MONTH\n");
    }
    else if (strcmp(month, "July") == 0)
    {
        printf("\nJUL 10 (BAKRID)\n");
    }
    else if (strcmp(month, "August") == 0)
    {
        printf("\nAUG 9 (MOHARRUM)\n");
        printf("\nAUG 15 (INDEPENDENCE DAY)\n");
        printf("\nAUG 19 (SRI KRISHNASTAMI)\n");
        printf("\nAUG 31 (VINAYAKA CHATURDI)\n");
    }
    else if (strcmp(month, "September") == 0)
    {
        printf("\nNO PUBLIC HOLIDAYS IN THIS MONTH\n");
    }
    else if (strcmp(month, "October") == 0)
    {
        printf("\nOCT 3 (DURGASTAMI)\n");
        printf("\nOCT 5 (VIJAYADASAMI)\n");
        printf("\nOCT 9 (EID-MILAD-UNNABI)\n");
        printf("\nOCT 24 (DIWALI)\n");
    }
    else if (strcmp(month, "November") == 0)
    {
        printf("\nNO PUBLIC HOLIDAYS IN THIS MONTH\n");
    }
    else if (strcmp(month, "December") == 0)
    {
        printf("\nDEC 25 (CHRISTMAS)\n");
    }
    else
    {
        printf("\nInvalid month. Please try again.\n");
    }
}

void printAllPublicHolidays()
{
    printf("\nJAN 14 (BHOGI)\n");
    printf("\nJAN 15 (MAKARA SANKRANTI)\n");
    printf("\nJAN 16 (KANUMA)\n");
    printf("\nJAN 26 (REPUBLIC DAY)\n");
    printf("\nNO PUBLIC HOLIDAYS IN FEBRUARY\n");
    printf("\nMAR 1 (MAHA SHIVARATRI)\n");
    printf("\nMAR 18 (HOLI)\n");
    printf("\nAPR 2 (UGADI)\n");
    printf("\nAPR 10 (SRI RAMA NAVAMI)\n");
    printf("\nAPR 15 (GOOD FRIDAY)\n");
    printf("\nMAY 3 (RAMZAN)\n");
    printf("\nNO PUBLIC HOLIDAYS IN JUNE\n");
    printf("\nJUL 10 (BAKRID)\n");
    printf("\nAUG 9 (MOHARRUM)\n");
    printf("\nAUG 15 (INDEPENDENCE DAY)\n");
    printf("\nAUG 19 (SRI KRISHNASTAMI)\n");
    printf("\nAUG 31 (VINAYAKA CHATURDI)\n");
    printf("\nNO PUBLIC HOLIDAYS IN SEPTEMBER\n");
    printf("\nOCT 3 (DURGASTAMI)\n");
    printf("\nOCT 5 (VIJAYADASAMI)\n");
    printf("\nOCT 9 (EID-MILAD-UNNABI)\n");
    printf("\nOCT 24 (DIWALI)\n");
    printf("\nNO PUBLIC HOLIDAYS IN NOVEMBER\n");
    printf("\nDEC 25 (CHRISTMAS)\n");
}

int main()
{
    int year;
    char option;
    printf("Enter the year: ");
    scanf("%d", &year);

    printf("\n1. Print Calendar\n");
    printf("2. View Jayantis of a Particular Month\n");
    printf("3. View Jayantis of All Months\n");
    printf("4. View Public Holidays of a Particular Month\n");
    printf("5. View Public Holidays of All Months\n");
    printf("Enter your option: ");
    scanf(" %c", &option);

    switch (option)
    {
    case '1':
        print_calendar(year);
        break;
    case '2':
        jayantis_particular_month(year);
        break;
    case '3':
        printAllJayantis();
        break;
    case '4':
    {
        char month[20];
        printf("Enter a month: ");
        scanf(" %s", month);
        printPublicHolidaysOfMonth(month);
        break;
    }
    case '5':
        printAllPublicHolidays();
        break;
    default:
        printf("\nInvalid option. Please try again.\n");
        break;
    }

    return 0;
}
