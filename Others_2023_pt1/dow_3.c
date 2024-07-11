#include<stdio.h>
  
int main()  
{  
    int ref_year = 1900, year, leap = 0, diff, diff_back, total_days = 0, day = 0;  
  
    printf("Enter a year\n");  
    scanf("%d", &year);  
  
    diff = year - ref_year;  
    diff_back = ref_year-year;
  
    if (year>ref_year)
    {
        for(ref_year;ref_year < year;ref_year++)  
        {  
            if(ref_year % 100 == 0)  
            {  
                if(ref_year % 400 == 0)  
                {  
                    leap++;  
                }  
            }  
            else  
            {  
                if(ref_year % 4 == 0)  
                {  
                    leap++;  
                }  
            }  
            
        }  
    
        total_days = (diff - leap) * 365 + leap * 366;  
        day        = total_days % 7;  
    
        printf("\nThe day on 01 January was ");  
    
        switch(day)  
        {  
            case 0: printf("Monday.\n");  
                    break;  
            case 1: printf("Tuesday.\n");  
                    break;  
            case 2: printf("Wednesday.\n");  
                    break;  
            case 3: printf("Thursday.\n");  
                    break;  
            case 4: printf("Friday.\n");  
                    break;  
            case 5: printf("Saturday.\n");  
                    break;  
            case 6: printf("Sunday.\n");  
                    break;  
        }  
    }
  
    else if (ref_year>year)
    {
        for(year;year < ref_year;year++)  
        {  
            if(year % 100 == 0)  
            {  
                if(year % 400 == 0)  
                {  
                    leap++;  
                }  
            }  
            else  
            {  
                if(year % 4 == 0)  
                {  
                    leap++;  
                }  
            }  
            
        }  
    
        total_days = (diff_back - leap) * 365 + leap * 366;  
        day        = total_days % 7;  
    
        printf("\nThe day on 01 January was ");  
    
        switch(day)  
        {  
            case 0: printf("Monday.\n");  
                    break;  
            case 1: printf("Tuesday.\n");  
                    break;  
            case 2: printf("Wednesday.\n");  
                    break;  
            case 3: printf("Thursday.\n");  
                    break;  
            case 4: printf("Friday.\n");  
                    break;  
            case 5: printf("Saturday.\n");  
                    break;  
            case 6: printf("Sunday.\n");  
                    break;  
        }  
    }
  
    return 0;  
}  
