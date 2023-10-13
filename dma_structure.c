#include <stdio.h>

struct student
{
    char name[30];
    double fees;
    double recFees;
};

int main()
{

    // struct student meet; //{name,fees}
    // struct student lam;  //{name,fees}
    // struct student as;   //{name,fees}

    // struct student st[5000];
    // st[0].fees = 123;

    // meet.fees = 10000;
    // lam.fees = 2500;

    // first->2000
    // {
    //    prev{NULL}, name, fees, recFees, next { 3000 }
    // }
    // 3000
    // {
    //     prev{2000},name, fees, recFees, next { 9000 }
    // }
    // 9000
    // {
    //     prev{3000},name, fees, recFees, next { NULL }
    // }

    return 0;
}