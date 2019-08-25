#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Temperature()
{
    int choice1;
    double input,temperature,temp;
    printf("\n----------------------------------------------");
    printf("\nTemperature converter\n");
    printf("----------------------------------------------\n\n");
    printf("01.Celcius to Kelvin                              Press [1]\n");
    printf("02.Celcius to Fahrenheit                          Press [2]\n");
    printf("03.Kelvin to Celcius                              Press [3]\n");
    printf("04.Kelvin to Fahrenheit                           Press [4]\n");
    printf("05.Fahrenheit to Celcius                          Press [5]\n");
    printf("06.Fahrenheit to Kelvin                           Press [6]\n");
    printf("To Exit                                           Press [0]\n");

    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>6)
    {
        printf("\nInvalid entry,please enter any number between 0 to 6\n");
        goto list1;
    }

    printf("Enter the temperature : ");
    scanf("%lf",&input);
    temp=input;
    switch(choice1)
    {
        case 1: temperature=(temp+273.15);  break;
        case 2: temperature=(temp*9+160)/5;  break;
        case 3: temperature=(temp-273.15);  break;
        case 4: temperature=((temp-273.15)*9/5)+32;  break;
        case 5: temperature=((5*temp)-160)/9;  break;
        case 6: temperature=(temp*5-160)/9+273.15;  break;
    }
    printf("\n**********************************\n");
    printf("%lf",temperature);
    printf("\n**********************************\n");
}
void Volume()
{
    int choice1,choice2;
    double input,volume,vol;
    printf("\n----------------------------------------------");
    printf("\nVolume converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.Millimeters                                    Press [1]\n");
    printf("02.Cubic Centimeters                              Press [2]\n");
    printf("03.Litres                                         Press [3]\n");
    printf("04.Cubic meters                                   Press [4]\n");
    printf("05.Teaspoons (US)                                 Press [5]\n");
    printf("06.Tablespoons (US)                               Press [6]\n");
    printf("07.Fluid ounces (US)                              Press [7]\n");
    printf("08.Cups (US)                                      Press [8]\n");
    printf("09.Pints (US)                                     Press [9]\n");
    printf("10.Quarts (US)                                    Press [10]\n");
    printf("11.Gallons (US)                                   Press [11]\n");
    printf("12.Cubic inches                                   Press [12]\n");
    printf("13.Cubic feet                                     Press [13]\n");
    printf("14.Cubic yards                                    Press [14]\n");
    printf("15.Teaspoons (UK)                                 Press [15]\n");
    printf("16.Tablespoons (UK)                               Press [16]\n");
    printf("17.Fluid ounces (UK)                              Press [17]\n");
    printf("18.Pints (UK)                                     Press [18]\n");
    printf("19.Quarts (UK)                                    Press [19]\n");
    printf("20.Gallons (UK)                                   Press [20]\n");
    printf("To Exit                                           Press [0]\n");

    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0|choice1>20)
    {
        printf("\nInvalid entry,please enter any number between 0 to 20\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.Millimeters                                    Press [1]\n");
    printf("02.Cubic Centimeters                              Press [2]\n");
    printf("03.Litres                                         Press [3]\n");
    printf("04.Cubic meters                                   Press [4]\n");
    printf("05.Teaspoons (US)                                 Press [5]\n");
    printf("06.Tablespoons (US)                               Press [6]\n");
    printf("07.Fluid ounces (US)                              Press [7]\n");
    printf("08.Cups (US)                                      Press [8]\n");
    printf("09.Pints (US)                                     Press [9]\n");
    printf("10.Quarts (US)                                    Press [10]\n");
    printf("11.Gallons (US)                                   Press [11]\n");
    printf("12.Cubic inches                                   Press [12]\n");
    printf("13.Cubic feet                                     Press [13]\n");
    printf("14.Cubic yards                                    Press [14]\n");
    printf("15.Teaspoons (UK)                                 Press [15]\n");
    printf("16.Tablespoons (UK)                               Press [16]\n");
    printf("17.Fluid ounces (UK)                              Press [17]\n");
    printf("18.Pints (UK)                                     Press [18]\n");
    printf("19.Quarts (UK)                                    Press [19]\n");
    printf("20.Gallons (UK)                                   Press [20]\n");
    printf("To Exit                                           Press [0]\n");

    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>20)
    {
        printf("\nInvalid entry,please enter any number between 0 to 20\n");
        goto list2;
    }
    printf("Enter the volume : ");
    scanf("%lf",&input);
    volume=input;
    switch(choice1)
    {
        case 1: vol=volume*0.001;  break;
        case 2: vol=volume*0.001;  break;
        case 3: vol=volume;  break;
        case 4: vol=volume*1000;  break;
        case 5: vol=volume*0.004929;  break;
        case 6: vol=volume*0.014787;  break;
        case 7: vol=volume*0.029574;  break;
        case 8: vol=volume*0.236588;  break;
        case 9: vol=volume*0.473176;  break;
        case 10:vol=volume*0.946353;  break;
        case 11:vol=volume*3.785412;  break;
        case 12:vol=volume*0.016387;  break;
        case 13:vol=volume*28.31685;  break;
        case 14:vol=volume*764.5549;  break;
        case 15:vol=volume*0.005919;  break;
        case 16:vol=volume*0.017758;  break;
        case 17:vol=volume*0.028413;  break;
        case 18:vol=volume*0.568261;  break;
        case 19:vol=volume*1.136523;  break;
        case 20:vol=volume*4.54609;  break;
    }
    switch(choice2)
    {
        case 1: volume=vol/0.001;  break;
        case 2: volume=vol/0.001;  break;
        case 3: volume=vol;  break;
        case 4: volume=vol/1000;  break;
        case 5: volume=vol/0.004929;  break;
        case 6: volume=vol/0.014787;  break;
        case 7: volume=vol/0.029574;  break;
        case 8: volume=vol/0.236588;  break;
        case 9: volume=vol/0.473176;  break;
        case 10:volume=vol/0.946353;  break;
        case 11:volume=vol/3.785412;  break;
        case 12:volume=vol/0.016387;  break;
        case 13:volume=vol/28.31685;  break;
        case 14:volume=vol/764.5549;  break;
        case 15:volume=vol/0.005919;  break;
        case 16:volume=vol/0.017758;  break;
        case 17:volume=vol/0.028413;  break;
        case 18:volume=vol/0.568261;  break;
        case 19:volume=vol/1.136523;  break;
        case 20:volume=vol/4.54609;  break;
    }
    if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",volume);
        printf("\n**********************************\n");
    }
}
void Power()
{
    int choice1,choice2;
    double input,power,pw;
    printf("\n----------------------------------------------");
    printf("\nPower converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.Watts                                    Press [1]\n");
    printf("02.Kilowatts                                Press [2]\n");
    printf("03.Horsepower(US)                           Press [3]\n");
    printf("04.Foot-pounds/minute                       Press [4]\n");
    printf("05.BTUs/minute                              Press [5]\n");
    printf("To Exit                                     Press [0]\n");

    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>5)
    {
        printf("\nInvalid entry,please enter any number between 0 to 5\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.Watts                                    Press [1]\n");
    printf("02.Kilowatts                                Press [2]\n");
    printf("03.Horsepower(US)                           Press [3]\n");
    printf("04.Foot-pounds/minute                       Press [4]\n");
    printf("05.BTUs/minute                              Press [5]\n");
    printf("To Exit                                     Press [0]\n");


    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>5)
    {
        printf("\nInvalid entry,please enter any number between 0 to 5\n");
        goto list2;
    }
    printf("Enter the power : ");
    scanf("%lf",&input);
    power=input;
    switch(choice1)
    {
        case 1: pw=power;  break;
        case 2: pw=power*1000;  break;
        case 3: pw=power*745.6999;  break;
        case 4: pw=power*0.022597;  break;
        case 5: pw=power*17.58427;  break;
    }
    switch(choice2)
    {
        case 1: power=pw;  break;
        case 2: power=pw/1000;  break;
        case 3: power=pw/745.6999;  break;
        case 4: power=pw/0.022597;  break;
        case 5: power=pw/17.58427;  break;
    }
    if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",power);
        printf("\n**********************************\n");
    }
}
void Pressure()
{
    int choice1,choice2;
    double input,pressure,pr;
    printf("\n----------------------------------------------");
    printf("\npressure converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.Atmosphere                               Press [1]\n");
    printf("02.Bars                                     Press [2]\n");
    printf("03.Kilopascals                              Press [3]\n");
    printf("04.Millimetres of mercury                   Press [4]\n");
    printf("05.Pascals                                  Press [5]\n");
    printf("06.Pounds per square inch                   Press [6]\n");
    printf("To Exit                                     Press [0]\n");

    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>6)
    {
        printf("\nInvalid entry,please enter any number between 0 to 6\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.Atmosphere                               Press [1]\n");
    printf("02.Bars                                     Press [2]\n");
    printf("03.Kilopascals                              Press [3]\n");
    printf("04.Millimetres of mercury                   Press [4]\n");
    printf("05.Pascals                                  Press [5]\n");
    printf("06.Pounds per square inch                   Press [6]\n");
    printf("To Exit                                     Press [0]\n");


    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>6)
    {
        printf("\nInvalid entry,please enter any number between 0 to 6\n");
        goto list2;
    }
    printf("Enter the pressure : ");
    scanf("%lf",&input);
    pressure=input;
    switch(choice1)
    {
        case 1: pr=pressure;  break;
        case 2: pr=pressure*0.986923;  break;
        case 3: pr=pressure*0.009869;  break;
        case 4: pr=pressure*0.001316;  break;
        case 5: pr=pressure*0.00001;  break;
        case 6: pr=pressure*0.068046;  break;
    }
    switch(choice2)
    {
        case 1: pressure=pr;  break;
        case 2: pressure=pr/0.986923;  break;
        case 3: pressure=pr/0.009869;  break;
        case 4: pressure=pr/0.001316;  break;
        case 5: pressure=pr/0.00001;  break;
        case 6: pressure=pr/0.068046;  break;
    }
     if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",pressure);
        printf("\n**********************************\n");
    }
}
void Time()
{
    int choice1,choice2;
    double input,time,tm;
    printf("\n----------------------------------------------");
    printf("\nTime converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.Microseconds                           Press [1]\n");
    printf("02.Milliseconds                           Press [2]\n");
    printf("03.Seconds                                Press [3]\n");
    printf("04.Minutes                                Press [4]\n");
    printf("05.Hours                                  Press [5]\n");
    printf("06.Days                                   Press [6]\n");
    printf("07.Weeks                                  Press [7]\n");
    printf("08.Years                                  Press [8]\n");
    printf("To Exit                                   Press [0]\n");

    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>8)
    {
        printf("\nInvalid entry,please enter any number between 0 to 8\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.Microseconds                           Press [1]\n");
    printf("02.Milliseconds                           Press [2]\n");
    printf("03.Seconds                                Press [3]\n");
    printf("04.Minutes                                Press [4]\n");
    printf("05.Hours                                  Press [5]\n");
    printf("06.Days                                   Press [6]\n");
    printf("07.Weeks                                  Press [7]\n");
    printf("08.Years                                  Press [8]\n");
    printf("To Exit                                   Press [0]\n");


    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>8)
    {
        printf("\nInvalid entry,please enter any number between 0 to 8\n");
        goto list2;
    }
    printf("Enter the time : ");
    scanf("%lf",&input);
    time=input;
    switch(choice1)
    {
        case 1: tm=time*0.000001;  break;
        case 2: tm=time*0.001;  break;
        case 3: tm=time;  break;
        case 4: tm=time*60;  break;
        case 5: tm=time*3600;  break;
        case 6: tm=time*86400;  break;
        case 7: tm=time*604800;  break;
        case 8: tm=time*31557600;  break;
    }
    switch(choice2)
    {
        case 1: time=tm/0.000001;  break;
        case 2: time=tm/0.001;  break;
        case 3: time=tm;  break;
        case 4: time=tm/60;  break;
        case 5: time=tm/3600;  break;
        case 6: time=tm/86400;  break;
        case 7: time=tm/604800;  break;
        case 8: time=tm/31557600;  break;
    }
     if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",time);
        printf("\n**********************************\n");
    }
}
void Fuel()
{
    int choice1,choice2;
    double input,fuel,fc;
    printf("\n----------------------------------------------");
    printf("\nFuel Consumption converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.liters/100 km                            Press [1]\n");
    printf("02.miles/gallon(US)                         Press [2]\n");
    printf("03.km/gallon(US)                            Press [3]\n");
    printf("04.miles/gallon(UK)                         Press [4]\n");
    printf("05.km/gallon(UK)                            Press [5]\n");
    printf("06.miles/liter                              Press [6]\n");
    printf("07.km/liter                                 Press [7]\n");
    printf("08.gallons(US)/100 miles                    Press [8]\n");
    printf("09.gallons(US)/100 km                       Press [9]\n");
    printf("10.gallons(UK)/100 miles                    Press [10]\n");
    printf("11.gallons(UK)/100 km                       Press [11]\n");
    printf("12.liters/100 miles                         Press [12]\n");
    printf("To Exit                                     Press [0]\n");

    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>12)
    {
        printf("\nInvalid entry,please enter any number between 0 to 12\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.liters/100 km                            Press [1]\n");
    printf("02.miles/gallon(US)                         Press [2]\n");
    printf("03.km/gallon(US)                            Press [3]\n");
    printf("04.miles/gallon(UK)                         Press [4]\n");
    printf("05.km/gallon(UK)                            Press [5]\n");
    printf("06.miles/liter                              Press [6]\n");
    printf("07.km/liter                                 Press [7]\n");
    printf("08.gallons(US)/100 miles                    Press [8]\n");
    printf("09.gallons(US)/100 km                       Press [9]\n");
    printf("10.gallons(UK)/100 miles                    Press [10]\n");
    printf("11.gallons(UK)/100 km                       Press [11]\n");
    printf("12.liters/100 miles                         Press [12]\n");
    printf("To Exit                                     Press [0]\n");

    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>12)
    {
        printf("\nInvalid entry,please enter any number between 0 to 12\n");
        goto list2;
    }
    printf("Enter the fuel consumption rate : ");
    scanf("%lf",&input);
    fuel=input;
    switch(choice1)
    {
        case 1: fc=fuel;  break;
        case 2: fc=fuel*235.2145833;  break;
        case 3: fc=fuel*378.5411784;  break;
        case 4: fc=fuel*282.4809363;  break;
        case 5: fc=fuel*454.609;  break;
        case 6: fc=fuel*62.1371192;  break;
        case 7: fc=fuel*100;  break;
        case 8: fc=fuel*2.3521458;  break;
        case 9: fc=fuel*3.7854118;  break;
        case 10:fc=fuel*2.8248094;  break;
        case 11:fc=fuel*4.54609;  break;
        case 12:fc=fuel*0.6213712;  break;
    }
    switch(choice2)
    {
        case 1: fuel=fc;  break;
        case 2: fuel=fc/235.2145833;  break;
        case 3: fuel=fc/378.5411784;  break;
        case 4: fuel=fc/282.4809363;  break;
        case 5: fuel=fc/454.609;  break;
        case 6: fuel=fc/62.1371192;  break;
        case 7: fuel=fc/100;  break;
        case 8: fuel=fc/2.3521458;  break;
        case 9: fuel=fc/3.7854118;  break;
        case 10:fuel=fc/2.8248094;  break;
        case 11:fuel=fc/4.54609;  break;
        case 12:fuel=fc/0.6213712;  break;
    }
     if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",fuel);
        printf("\n**********************************\n");
    }
}
void Area()
{
    int choice1,choice2;
    double input,area,msqr;
    printf("\n----------------------------------------------");
    printf("\nArea converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.Square metre                            Press [1]\n");
    printf("02.Square kilometre                        Press [2]\n");
    printf("03.Square mile                             Press [3]\n");
    printf("04.Square yard                             Press [4]\n");
    printf("05.Square foot                             Press [5]\n");
    printf("06.Square inch                             Press [6]\n");
    printf("07.Hectare                                 Press [7]\n");
    printf("08.Acre                                    Press [8]\n");
    printf("To Exit                                    Press [0]\n");

    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>8)
    {
        printf("\nInvalid entry,please enter any number between 0 to 8\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.Square metre                            Press [1]\n");
    printf("02.Square kilometre                        Press [2]\n");
    printf("03.Square mile                             Press [3]\n");
    printf("04.Square yard                             Press [4]\n");
    printf("05.Square foot                             Press [5]\n");
    printf("06.Square inch                             Press [6]\n");
    printf("07.Hectare                                 Press [7]\n");
    printf("08.Acre                                    Press [8]\n");
    printf("To Exit                                    Press [0]\n");

    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>8)
    {
        printf("\nInvalid entry,please enter any number between 0 to 8\n");
        goto list2;
    }
    printf("Enter the area : ");
    scanf("%lf",&input);
    area=input;
    switch(choice1)
    {
        case 1: msqr=area;  break;
        case 2: msqr=area*1000000;  break;
        case 3: msqr=area*2590000;  break;
        case 4: msqr=area*0.836127;  break;
        case 5: msqr=area*0.092903;  break;
        case 6: msqr=area*0.00064516;  break;
        case 7: msqr=area*10000;  break;
        case 8: msqr=area*4046.86;  break;
    }
    switch(choice2)
    {
        case 1: area=msqr;  break;
        case 2: area=msqr/1000000;  break;
        case 3: area=msqr/2590000;  break;
        case 4: area=msqr/0.836127;  break;
        case 5: area=msqr/0.092903;  break;
        case 6: area=msqr/0.00064516;  break;
        case 7: area=msqr/10000;  break;
        case 8: area=msqr/4046.86;  break;
    }
     if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",area);
        printf("\n**********************************\n");
    }
}
void Weight()
{
    int choice1,choice2;
    double input,weight,kilograms;
    printf("\n----------------------------------------------");
    printf("\nWeight converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.Kilograms                           Press [1]\n");
    printf("02.Pounds                              Press [2]\n");
    printf("03.Stones                              Press [3]\n");
    printf("04.Ounces                              Press [4]\n");
    printf("05.Grams                               Press [5]\n");
    printf("To Exit                                Press [0]\n");


    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>5)
    {
        printf("\nInvalid entry,please enter any number between 0 to 5\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.Kilograms                           Press [1]\n");
    printf("02.Pounds                              Press [2]\n");
    printf("03.Stones                              Press [3]\n");
    printf("04.Ounces                              Press [4]\n");
    printf("05.Grams                               Press [5]\n");
    printf("To Exit                                Press [0]\n");

    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>5)
    {
        printf("\nInvalid entry,please enter any number between 0 to 5\n");
        goto list2;
    }
    printf("Enter the weight : ");
    scanf("%lf",&input);
    weight=input;
    switch(choice1)
    {
        case 1: kilograms=weight;  break;
        case 2: kilograms=weight*0.45;  break;
        case 3: kilograms=weight*6.35;  break;
        case 4: kilograms=weight*0.02835;  break;
        case 5: kilograms=weight*0.001;  break;

    }
    switch(choice2)
    {
        case 1: weight=kilograms;  break;
        case 2: weight=kilograms/0.45;  break;
        case 3: weight=kilograms/6.35;  break;
        case 4: weight=kilograms/0.02835;  break;
        case 5: weight=kilograms/0.001;  break;
    }
     if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",weight);
        printf("\n**********************************\n");
    }
}
void Length()
{
    int choice1,choice2;
    double input,length,meter;
    printf("\n----------------------------------------------");
    printf("\nLength converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.Meter                            Press [1]\n");
    printf("02.Kilometer                        Press [2]\n");
    printf("03.Centimeter                       Press [3]\n");
    printf("04.Millimeter                       Press [4]\n");
    printf("05.Micrometer                       Press [5]\n");
    printf("06.Nanometer                        Press [6]\n");
    printf("07.Mile                             Press [7]\n");
    printf("08.Yard                             Press [8]\n");
    printf("09.Foot                             Press [9]\n");
    printf("10.Inch                             Press [10]\n");
    printf("To Exit                             Press [0]\n");

    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>10)
    {
        printf("\nInvalid entry,please enter any number between 0 to 10\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.Meter                            Press [1]\n");
    printf("02.Kilometer                        Press [2]\n");
    printf("03.Centimeter                       Press [3]\n");
    printf("04.Millimeter                       Press [4]\n");
    printf("05.Micrometer                       Press [5]\n");
    printf("06.Nanometer                        Press [6]\n");
    printf("07.Mile                             Press [7]\n");
    printf("08.Yard                             Press [8]\n");
    printf("09.Foot                             Press [9]\n");
    printf("10.Inch                             Press [10]\n");
    printf("To Exit                             Press [0]\n");

    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>10)
    {
        printf("\nInvalid entry,please enter any number between 0 to 10\n");
        goto list2;
    }
    printf("Enter the length : ");
    scanf("%lf",&input);
    length=input;
    switch(choice1)
    {
        case 1: meter=length;  break;
        case 2: meter=length*1000;  break;
        case 3: meter=length*0.01;  break;
        case 4: meter=length*0.001;  break;
        case 5: meter=length*0.000001;  break;
        case 6: meter=length*0.000000001;  break;
        case 7: meter=length*1609.35;  break;
        case 8: meter=length*0.9144;  break;
        case 9: meter=length*0.3048;  break;
        case 10:meter=length*0.0254;  break;
    }
    switch(choice2)
    {
        case 1: length=meter;  break;
        case 2: length=meter/1000;  break;
        case 3: length=meter/0.01;  break;
        case 4: length=meter/0.001;  break;
        case 5: length=meter/0.000001;  break;
        case 6: length=meter/0.000000001;  break;
        case 7: length=meter/1609.35;  break;
        case 8: length=meter/0.9144;  break;
        case 9: length=meter/0.3048;  break;
        case 10: length=meter/0.0254;  break;
    }
     if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",length);
        printf("\n**********************************\n");
    }
}
void Currency()
{
    int choice1,choice2;
    double input,amount,usd;
    printf("\n----------------------------------------------");
    printf("\nCurrency converter\n");
    printf("----------------------------------------------\n");
    printf("\nFrom:-\n\n");
    printf("01.Australian Dollar                     Press [1]\n");
    printf("02.Brazilian Real                        Press [2]\n");
    printf("03.British Pound                         Press [3]\n");
    printf("04.Canadian Dollar                       Press [4]\n");
    printf("05.Chinese Yuan                          Press [5]\n");
    printf("06.Danish Krone                          Press [6]\n");
    printf("07.Euro                                  Press [7]\n");
    printf("08.Hong Kong Dollar                      Press [8]\n");
    printf("09.Hungarian Forint                      Press [9]\n");
    printf("10.Indian Rupee                          Press [10]\n");
    printf("11.Indonesian Rupiah                     Press [11]\n");
    printf("12.Japanese Yen                          Press [12]\n");
    printf("13.Mexican Peso                          Press [13]\n");
    printf("14.New Zealand Dollar                    Press [14]\n");
    printf("15.Norwegian Kroner                      Press [15]\n");
    printf("16.Polish Zloty                          Press [16]\n");
    printf("17.Russian Rouble                        Press [17]\n");
    printf("18.Saudi Riyal                           Press [18]\n");
    printf("19.Singapore Dollar                      Press [19]\n");
    printf("20.South African Rand                    Press [20]\n");
    printf("21.Swedish Krona                         Press [21]\n");
    printf("22.Swiss Frank                           Press [22]\n");
    printf("23.Taiwan Dollar                         Press [23]\n");
    printf("24.Thai Bhat                             Press [24]\n");
    printf("25.Turkish Lira                          Press [25]\n");
    printf("26.US Dollar                             Press [26]\n");
    printf("To Exit                                  Press [0]\n");
    list1:
    scanf("%d",&choice1);
    if(choice1==0)exit(0);
    if(choice1<0||choice1>26)
    {
        printf("\nInvalid entry,please enter any number between 0 to 26\n");
        goto list1;
    }
    printf("\nTo:-\n\n");
    printf("01.Australian Dollar                     Press [1]\n");
    printf("02.Brazilian Real                        Press [2]\n");
    printf("03.British Pound                         Press [3]\n");
    printf("04.Canadian Dollar                       Press [4]\n");
    printf("05.Chinese Yuan                          Press [5]\n");
    printf("06.Danish Krone                          Press [6]\n");
    printf("07.Euro                                  Press [7]\n");
    printf("08.Hong Kong Dollar                      Press [8]\n");
    printf("09.Hungarian Forint                      Press [9]\n");
    printf("10.Indian Rupee                          Press [10]\n");
    printf("11.Indonesian Rupiah                     Press [11]\n");
    printf("12.Japanese Yen                          Press [12]\n");
    printf("13.Mexican Peso                          Press [13]\n");
    printf("14.New Zealand Dollar                    Press [14]\n");
    printf("15.Norwegian Kroner                      Press [15]\n");
    printf("16.Polish Zloty                          Press [16]\n");
    printf("17.Russian Rouble                        Press [17]\n");
    printf("18.Saudi Riyal                           Press [18]\n");
    printf("19.Singapore Dollar                      Press [19]\n");
    printf("20.South African Rand                    Press [20]\n");
    printf("21.Swedish Krona                         Press [21]\n");
    printf("22.Swiss Frank                           Press [22]\n");
    printf("23.Taiwan Dollar                         Press [23]\n");
    printf("24.Thai Bhat                             Press [24]\n");
    printf("25.Turkish Lira                          Press [25]\n");
    printf("26.US Dollar                             Press [26]\n");
    printf("To Exit                                  Press [0]\n");

    list2:
    scanf("%d",&choice2);
    if(choice2==0)exit(0);
    if(choice2<0||choice2>26)
    {
        printf("\nInvalid entry,please enter any number between 0 to 26\n");
        goto list2;
    }
    printf("Enter the amount : ");
    scanf("%lf",&input);
    amount=input;
    switch(choice1)
    {
        case 1: usd=amount*0.71084;  break;
        case 2: usd=amount*0.24254;  break;
        case 3: usd=amount*1.30235;  break;
        case 4: usd=amount*0.76135;  break;
        case 5: usd=amount*0.14554;  break;
        case 6: usd=amount*0.15545;  break;
        case 7: usd=amount*1.15953;  break;
        case 8: usd=amount*0.12739;  break;
        case 9: usd=amount*0.00357;  break;
        case 10:usd=amount*0.01376;  break;
        case 11:usd=amount*0.00007;  break;
        case 12:usd=amount*0.00897;  break;
        case 13:usd=amount*0.05194;  break;
        case 14:usd=amount*0.65185;  break;
        case 15:usd=amount*0.11963;  break;
        case 16:usd=amount*0.26906;  break;
        case 17:usd=amount*0.01428;  break;
        case 18:usd=amount*0.26652;  break;
        case 19:usd=amount*0.72610;  break;
        case 20:usd=amount*0.06608;  break;
        case 21:usd=amount*0.11039;  break;
        case 22:usd=amount*1.02651;  break;
        case 23:usd=amount*0.03243;  break;
        case 24:usd=amount*0.03044;  break;
        case 25:usd=amount*0.15464;  break;
        case 26:usd=amount;          break;
    }
    switch(choice2)
    {
        case 1: amount=usd/0.71084;  break;
        case 2: amount=usd/0.24254;  break;
        case 3: amount=usd/1.30235;  break;
        case 4: amount=usd/0.76135;  break;
        case 5: amount=usd/0.14554;  break;
        case 6: amount=usd/0.15545;  break;
        case 7: amount=usd/1.15953;  break;
        case 8: amount=usd/0.12739;  break;
        case 9: amount=usd/0.00357;  break;
        case 10:amount=usd/0.01376;  break;
        case 11:amount=usd/0.00007;  break;
        case 12:amount=usd/0.00897;  break;
        case 13:amount=usd/0.05194;  break;
        case 14:amount=usd/0.65185;  break;
        case 15:amount=usd/0.11963;  break;
        case 16:amount=usd/0.26906;  break;
        case 17:amount=usd/0.01428;  break;
        case 18:amount=usd/0.26652;  break;
        case 19:amount=usd/0.72610;  break;
        case 20:amount=usd/0.06608;  break;
        case 21:amount=usd/0.11039;  break;
        case 22:amount=usd/1.02651;  break;
        case 23:amount=usd/0.03243;  break;
        case 24:amount=usd/0.03044;  break;
        case 25:amount=usd/0.15464;  break;
        case 26:amount=usd;          break;
    }
    if(choice1==choice2)
    {
        printf("\n**********************************\n");
        printf("%lf",input);
        printf("\n**********************************\n");
    }
    else
    {
        printf("\n**********************************\n");
        printf("%lf",amount);
        printf("\n**********************************\n");
    }
}
int main()
{
    int choice;
    while(1){
    system("cls");
    printf("\n----------------------------------------------");
    printf("\nWelcome to Unit & Currency converter\n");
    printf("----------------------------------------------\n");
    printf("\nEnter your choice:-\n\n");
    printf("01.Currency                     Press [1]\n");
    printf("02.Weight                       Press [2]\n");
    printf("03.Length                       Press [3]\n");
    printf("04.Area                         Press [4]\n");
    printf("05.Fuel consumption             Press [5]\n");
    printf("06.Time                         Press [6]\n");
    printf("07.Volume                       Press [7]\n");
    printf("08.Temperature                  Press [8]\n");
    printf("09.Pressure                     Press [9]\n");
    printf("10.Power                        Press [10]\n");
    printf("11.Exit                         Press [11]\n");
    list:
    scanf("%d",&choice);
    if(choice<1||choice>11)
    {
        printf("\nInvalid entry,please enter any number between 1 to 11\n");
        goto list;
    }
    switch(choice)
    {
    case 1:
        Currency();
        break;
    case 2:
        Weight();
        break;
    case 3:
        Length();
        break;
    case 4:
        Area();
        break;
    case 5:
        Fuel();
        break;
    case 6:
        Time();
        break;
    case 7:
        Volume();
        break;
    case 8:
        Temperature();
        break;
    case 9:
        Pressure();
        break;
    case 10:
        Power();
        break;
    case 11:
        exit(0);
    }
    printf("\nPress any key to continue \n");
    getch();
    }
    return 0;
}
