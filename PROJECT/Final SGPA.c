#include<stdio.h>
#include<ctype.h>

void main()
{
 int cse,cse_lab,phy,phy_lab,math,eng;
 float sgpa,cp,clp,mp,ep,pp,plp;
 int t_credit=14;
 float t_sub_credit;
 int t_persub_credit;
    float cse_spc;
    float cse_l_spc;
    float phy_spc;
    float phy_l_spc;
    float math_spc;
    float eng_spc;
 int cse_credit,cse_lab_credit,phy_credit,phy_lab_credit,math_credit,eng_credit;
printf("Enter the marks of Cse\t: ");

  scanf("%d/n",&cse);
  printf("Enter CSE Credit\t:: ");
  scanf("%d", &cse_credit);

 if(cse>=80)
 {
     printf("cse:Grade is\t\t= A+\n");
     printf("cse:_grade_point is\t= 4.00\n\n");
     cp=4.0;
{
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point\t::%f\n",cse_spc);
}
 }
else if(cse>=75)
{
printf("cse:Grade is\t\t: A\n");
printf("cse:_grade_point is\t: 3.75\n\n");
cp=3.75;
{
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point\t::%f\n",cse_spc);
}
}
else if(cse>=70)
{
   printf("cse:Grade is\t\t: A-\n");
   printf("cse:_grade_point is\t: 3.50\n\n");
   cp=3.50;
   {
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point\t::%f\n",cse_spc);
}
}
else if(cse>=65)
{
   printf("cse:Grade is\t\t: B+\n");
   printf("cse:_grade_point is\t: 3.25\n\n");
   cp=3.25;
   {
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point::%f\n",cse_spc);
}
}
else if(cse>=60)
{
   printf("cse:Grade is\t\t: B\n");
   printf("cse:_grade_point is\t: 3.00\n\n");
   cp=3.00;
   {
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point::%f\n",cse_spc);
}
}
else if(cse>=55)
{
   printf("cse:Grade is\t\t: B-\n");
   printf("cse:_grade_point is\t: 2.75\n\n");
   cp=2.75;
   {
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point::%f\n",cse_spc);
}
}
else if(cse>=50)
{
   printf("cse:Grade is\t\t: C+\n\n");
   printf("cse:_grade_point is\t: 2.50\n");
   cp=2.50;
   {
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point::%f\n",cse_spc);
}
}
else if(cse>=45)
{
   printf("cse:Grade is\t\t: C\n\n");
   printf("cse:_grade_point is\t: 2.25\n");
   cp=2.25;
   {
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point::%f\n",cse_spc);
}
}
else if(cse>=40)
{
   printf("cse:Grade is\t\t: D\n\n");
   printf("cse:_grade_point is\t: 2.00\n");
   cp=2.00;
   {
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point::%f\n",cse_spc);
}
}
else
   {
    printf("Grade is\t\t\t: F\n\n");
   printf(":_grade_point is\t: 0.00");
   cp=0.00;
   {
    cse_spc=(cse_credit*cp);
    printf("\nCSE Credit X Sub Grade Point::%f\n",cse_spc);
}
   }
printf("===============================================================================\n");
printf("\nEnter the marks of Cse_lab\t:");
scanf("%d",&cse_lab);
printf("Enter CSE_Lab_Credit\t\t::");
  scanf("%d", &cse_lab_credit);

 if(cse_lab>=40)
 {
     printf("cse_lab:Grade is\t\t=A+\n");
     printf("cse_lab:_grade_point is\t\t:4.00\n");
    clp=4.00;
    {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
 }
else if(cse_lab>=38)
{
printf("cse_lab:Grade is\t\t: A\n");
printf("cse_lab:_grade_point is\t\t: 3.75\n");
clp=3.75;
{
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
}
else if(cse_lab>=35)
{
   printf("cse_lab:Grade is\t\t: A-\n");
   printf("cse_lab:_grade_point is\t\t: 3.50\n");
   clp=3.50;
   {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
}
else if(cse_lab>=33)
{
   printf("cse_lab:Grade is\t\t: B+\n");
   printf("cse_lab:_grade_point is\t\t: 3.25\n");
   clp=3.25;
   {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
}
else if(cse_lab>=30)
{
   printf("cse_lab:Grade is\t\t: B\n");
   printf("cse_lab:_grade_point is\t\t: 3.00\n");
   clp=3.00;
   {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
}
else if(cse_lab>=28)
{
   printf("Grade is\t\t\t: B-\n");
   printf("cse_lab:_grade_point is\t\t: 2.75\n");
   clp=2.75;
   {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
}
else if(cse_lab>=25)
{
   printf("cse_lab:Grade is\t\t: C+\n");
   printf("cse_lab:_grade_point is\t\t: 2.50\n");
   clp=2.50;
   {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
}
else if(cse_lab>=22)
{
   printf("cse_lab:Grade is\t\t: C\n");
   printf("cse_lab:_grade_point is\t\t: 2.25\n");
   clp=2.25;
   {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
}
else if(cse_lab>=20)
{
   printf("cse_lab:Grade is\t\t: D\n");
   printf("cse_lab_point is\t\t: 2.00\n");
   clp=2.00;
   {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
}
else
   {
    printf("Grade is\t\t\t: F\n");
   printf(":_grade_point is\t\t: 0.00");
   clp=0.00;
   {
    cse_l_spc=(cse_lab_credit*clp);
    printf("\nCSE Lab Credit X Sub Grade Point::%f\n",cse_l_spc);
    }
   }
printf("===============================================================================\n");
printf("\nEnter the marks of phy \t:");
 scanf("%d/n",&phy);
 printf("Enter PHY_Credit\t\t:: ");
  scanf("%d", &phy_credit);
 if(phy>=80)
 {
     printf("phy:Grade is\t\t=A+\n");
     printf("phy:_grade_point is\t=4.00\n");
     pp=4.00;
     {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
 }

else if(phy>=75)
{
printf("phy:Grade is\t\t: A\n");
printf("phy:_grade_point is\t: 3.75\n");
pp=3.75;
{
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
}
else if(phy>=70)
{
   printf("phy:Grade is\t\t: A-\n");
   printf("phy:_grade_point is\t: 3.50\n");
   pp=3.50;
   {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
}
else if(phy>=65)
{
   printf("phy:Grade is\t\t: B+\n");
   printf("phy:_grade_point is\t: 3.25\n");
   pp=3.25;
   {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
}
else if(phy>=60)
{
   printf("phy:Grade is\t\t: B\n");
   printf("phy:_grade_point is\t: 3.00\n");
   pp=3.00;
   {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
}
else if(phy>=55)
{
   printf("phy:Grade is\t\t: B-\n");
   printf("phy:_grade_point is\t: 2.75\n");
   pp=2.75;
   {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
}
else if(phy>=50)
{
   printf("phy:Grade is\t\t: C+\n");
   printf("phy:_grade_point is\t: 2.50\n");
   pp=2.50;
   {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
}
else if(phy>=45)
{
   printf("phy:Grade is\t\t: C\n");
   printf("phy:_grade_point is\t: 2.25\n");
   pp=2.25;
   {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
}
else if(phy>=40)
{
   printf("phy:Grade is\t\t: D\n");
   printf("phy:_grade_point is\t: 2.00\n");
   pp=2.00;
   {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
}
else
   {
    printf("Grade is\t\t\t: F\n");
   printf(":_grade_point is\t\t: 0.00");
   pp=0.00;
   {
    phy_spc=(phy_credit*pp);
    printf("\nPhysics Credit X Sub Grade Point::%f\n",phy_spc);
    }
   }
printf("===============================================================================\n");
printf("\nEnter the marks of phy_lab \t:");
scanf("%d/n",&phy_lab);
printf("\nEnter PHY_Lab_Credit\t\t::");
  scanf("%d", &phy_lab_credit);
 if(phy_lab>=40)
 {
     printf("phy_lab:Grade is\t\t=A+\n");
     printf("phy_lab:_grade_point is\t=4.00\n");
     plp=4.00;
     {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
 }

else if(phy_lab>=38)
{
printf("phy_lab:Grade is\t\t: A\n");
printf("phy_lab_point is\t: 3.75\n");
plp=3.75;
{
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
}
else if(phy_lab>=35)
{
   printf("phy_lab:Grade is\t: A-\n");
   printf("phy_lab_point is\t: 3.50\n");
   plp=3.50;
   {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
}
else if(phy_lab>=33)
{
   printf("phy_lab:Grade is\t: B+\n");
   printf("phy_lab_point is\t: 3.25\n");
   plp=3.25;
   {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
}
else if(phy_lab>=30)
{
   printf("phy_lab:Grade is\t: B\n");
   printf("phy_lab_point is\t: 3.00\n");
   plp=3.00;
   {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
}
else if(phy_lab>=28)
{
   printf("phy_lab:Grade is\t: B-\n");
   printf("phy_lab_point is\t: 2.75\n");
   plp=2.75;
   {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
}
else if(phy_lab>=25)
{
   printf("phy_lab:Grade is\t: C+\n");
   printf("phy_lab_point is\t: 2.50\n");
   plp=2.50;
   {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
}

else if(phy_lab>=23)
{
   printf("phy_lab:Grade is\t: C\n");
   printf("phy_lab_point is\t: 2.25\n");
   plp=2.25;
   {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
}
else if(phy_lab>=20)
{
   printf("phy_lab:Grade is\t: D\n");
   printf("phy_lab_point is\t: 2.00\n");
   plp=2.00;
   {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
}

else

   {
    printf("Grade is\t\t\t: F\n");
   printf(":_grade_point is\t\t: 0.00");
   plp=0.00;
   {
    phy_l_spc=(phy_lab_credit*plp);
    printf("\nPhysics Lab Credit X Sub Grade Point::%f\n",phy_l_spc);
    }
   }
printf("===============================================================================\n");
printf("\nEnter the marks of math \t:");
scanf("%d/n",&math);
printf("\nEnter Math_Credit\t\t::");
  scanf("%d", &math_credit);
if(math>=80)
 {
     printf("math:Grade is\t\t=A+\n");
     printf("math:_grade_point is\t=4.00\n");
     mp=4.00;
     {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }

 }
else if(math>=75)
{
printf("math:Grade is\t\t: A\n");
printf("math:_grade_point is\t: 3.75\n");
mp=3.75;
 {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
}
else if(math>=70)
{
   printf("math:Grade is\t\t: A-\n");
   printf("math:_grade_point is\t: 3.50\n");
   mp=3.50;
    {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
}
else if(math>=65)
{
   printf("math:Grade is\t\t: B+\n");
   printf("math:_grade_point is\t: 3.25\n");
   mp=3.25;
    {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
}
else if(math>=60)
{
   printf("math:Grade is\t\t: B\n");
   printf("math:_grade_point is\t: 3.00\n");
   mp=3.00;
    {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
}
else if(math>=55)
{
   printf("math:Grade is\t\t: B-\n");
   printf("math:_grade_point is\t: 2.75\n");
   mp=2.75;
    {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
}
else if(math>=50)
{
   printf("math:Grade is\t\t: C+\n");
   printf("math:_grade_point is\t: 2.50\n");
   mp=2.50;
    {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
}
else if(math>=45)
{
   printf("math:Grade is\t\t: C\n");
   printf("math:_grade_point is\t: 2.25\n");
   mp=2.25;
    {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
}
else if(math>=40)
{
   printf("math:Grade is\t\t: D\n");
   printf("math:_grade_point is\t: 2.00\n");
   mp=2.00;
    {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
}
else
   {
    printf("Grade is\t\t\t: F\n");
    printf(":_grade_point is\t: 0.00");
    mp=0.00;
     {
    math_spc=(math_credit*mp);
    printf("\nMath Credit X Sub Grade Point::%f\n",math_spc);
    }
   }
    printf("===============================================================================\n");
    printf("\nEnter the marks of Eng \t:");
    scanf("%d/n",&eng);
    printf("Enter English_Credit\t\t:: ");
  scanf("%d", &eng_credit);
if(eng>=80)
 {
     printf("eng:Grade is\t\t= A+\n");
     printf("eng:_grade_point is\t= 4.00\n");
     ep=4.00;
      {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
 }
else if(eng>=75)
{
    printf("eng:Grade is\t\t: A\n");
    printf("eng:_grade_point is\t: 3.75\n");
    ep=3.75;
    {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
}
else if(eng>=70)
{
   printf("eng:Grade is\t\t: A-\n");
   printf("eng:_grade_point is\t: 3.50\n");
   ep=3.50;
   {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
}
else if(eng>=65)
{
   printf("eng:Grade is\t\t: B+\n");
   printf("eng:_grade_point is\t: 3.25\n");
   ep=3.25;
   {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
}
else if(eng>=60)
{
   printf("eng:Grade is\t\t: B\n");
   printf("eng:_grade_point is\t: 3.00\n");
   ep=3.00;
   {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
}
else if(eng>=55)
{
   printf("eng:Grade is\t\t: B-\n");
   printf("eng:_grade_point is\t: 2.75\n");
   ep=2.75;
   {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
}
else if(eng>=50)
{
   printf("eng:Grade is\t\t: C+\n");
   printf("eng:_grade_point is\t: 2.50\n");
   ep=2.50;
   {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
}

else if(eng>=45)
{
   printf("eng:Grade is\t\t: C\n");
   printf("eng:_grade_point is\t: 2.25\n");
   ep=2.25;
   {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
}
else if(eng>=40)
{
   printf("eng:Grade is\t\t: D\n");
   printf("eng:_grade_point is\t: 2.00\n");
   ep=2.00;
   {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point::%f\n",eng_spc);
    }
}
else
  {
    printf("Grade is\t\t\t: F\n");
    printf(":_grade_point is\t: 0.00");
    ep=0.00;
    {
    eng_spc=(eng_credit*ep);
    printf("\nEnglish Credit X Sub Grade Point\t::%f\n",eng_spc);
    }
   }
    t_persub_credit=(cse_credit*cp)+(cse_lab_credit*clp)+(phy_credit*pp)+(phy_lab_credit*plp);

    printf("\nTotal Subject Credit\t\t: %d\n", t_persub_credit);

    t_sub_credit=(cse_spc+cse_l_spc+phy_spc+phy_l_spc+math_spc+eng_spc);
    printf("\nTotal all of Subject Credit\t::%.2f ", t_sub_credit);

   sgpa=(t_sub_credit/t_credit);

   printf("\n\n\tSGPA\t\t:%.2f\n",sgpa);
    printf("\n\n\t\t\tTHANK YOU FOR USING THIS CALCULATOR...");

   getch();
}
