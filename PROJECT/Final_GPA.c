#include<stdio.h>
int main()
{
    FILE *gfp;
    gfp=fopen("second semister result.txt","w");//File is open for Writing.
    int i=0,j=0,k=0,l=0,m=0; //Use str subject.
    int n=0,o=0,p=0,q=0,r=0;//Use physic subject.
    int a=0,b=0,c=0,d=0,e=0;//Use Math subject.
    int ae=0,be=0,ce=0,de=0,ee=0;//Use English subject.

    //declared Gread point average .
    double str_grp;
    double phy_grp;
    double math_grp;
    double eng_grp;
    double total_grp;

    double str_midterm[1],str_final_exam[1],str_class_test[1],str_assignment[1],str_all_behavior[1],str_total_marks;
    double phy_midterm[1],phy_final_exam[1],phy_class_test[1],phy_assignment[1],phy_all_behavior[1],phy_total_marks;
    double math_midterm[1],math_final_exam[1],math_class_test[1],math_assignment[1],math_all_behavior[1],math_total_marks;
    double eng_midterm[1],eng_final_exam[1],eng_class_test[1],eng_assignment[1],eng_all_behavior[1],eng_total_marks;
    double total_marks;

    //Structred_Programming.
    //scanf_all_str_value.

    while(i<1){
        printf("Enter the value of Stractured programming midterm: ");
        scanf("%lf",&str_midterm[i]);                  //Input_Midterm_value.
        if(str_midterm[i]>=0 && str_midterm[i]<=20)  //checking condition.

            {

            i++;                                  //If the program is true then increment by 1.
        }
        else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-20).Try again\n");

        }
    }
    while(j<1){
        printf("Enter the value of Stractured programming final exam: ");
        scanf("%lf",&str_final_exam[j]);               //Input_final_value.
        if(str_final_exam[j]>=0 && str_final_exam[j]<=50) //checking condition.
        {
           j++;                                   //If the program is true then increment by 1.
        }
        else                                   //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
           printf("Incorrect value(It limit is 0-50).Try again\n");
        }
    }
       while(k<1){
        printf("Enter the value of Stractured programming class test: ");
        scanf("%lf",&str_class_test[k]);                //Input_class_test_value.
        if(str_class_test[k]>=0 && str_class_test[k]<=10){ //checking condition.

            k++;                                    //If the program is true then increment by 1.
        }else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }
       while(l<1){
        printf("Enter the value of Stractured programming assignment: ");
        scanf("%lf",&str_assignment[l]);                 //Input_assignment_value.
        if(str_assignment[l]>=0 && str_assignment[l]<=10){  //checking condition.

            l++;                                //If the program is true then increment by 1.
        }else                                 //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }

       while(m<1){
        printf("Enter the value of Stractured programming All_behavior: ");
        scanf("%lf",&str_all_behavior[m]);                   //Input_All_behavior_value.
        if(str_all_behavior[m]>=0 && str_all_behavior[m]<=10){  //checking condition.

            m++;                                        //If the program is true then increment by 1.
        }else                                           //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }
        printf("\n");
    //Physic
    //Scan all_phy_Value.
    while(n<1){
        printf("Enter the value of physic midterm: ");
        scanf("%lf",&phy_midterm[n]);                  //Input_Physic_Midterm_value.
        if(phy_midterm[n]>=0 && phy_midterm[n]<=20){      //checking condition.

            n++;                                  //If the program is true then increment by 1.
        }else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-20).Try again\n");

        }
    }
    while(o<1){
        printf("Enter the value of physic final exam: ");
        scanf("%lf",&phy_final_exam[o]);               //Input_physic_final_value.
        if(phy_final_exam[o]>=0 && phy_final_exam[o]<=50) //checking condition.
        {
           o++;                                   //If the program is true then increment by 1.
        }
        else                                   //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
           printf("Incorrect value(It limit is 0-50).Try again\n");
        }
    }
       while(p<1){
        printf("Enter the value of physic class test: ");
        scanf("%lf",&phy_class_test[p]);                //Input_physic_class_test_value.
        if(phy_class_test[p]>=0 && phy_class_test[p]<=10){ //checking condition.

            p++;                                    //If the program is true then increment by 1.
        }
        else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }
       while(q<1){
        printf("Enter the value of physic assignment: ");
        scanf("%lf",&phy_assignment[q]);                 //Input_physic_assignment_value.
        if(phy_assignment[q]>=0 && phy_assignment[q]<=10){  //checking condition.

            q++;                                //If the program is true then increment by 1.
        }
        else                                 //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }

       while(r<1){
        printf("Enter the value of Physic All_behavior: ");
        scanf("%lf",&phy_all_behavior[r]);                   //Input_All behavior_value.
        if(phy_all_behavior[r]>=0 && phy_all_behavior[r]<=10){  //checking condition.

            r++;                                        //If the program is true then increment by 1.
        }else                                           //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }
        printf("\n");
    //Math subject.
    //scan all math value.

    while(a<1){
        printf("Enter the value of math midterm: ");
        scanf("%lf",&math_midterm[a]);                  //Input_Math_Midterm_value.
        if(math_midterm[a]>=0 && math_midterm[a]<=20){      //checking condition.

            a++;                                  //If the program is true then increment by 1.
        }else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-20).Try again\n");

        }
    }

    while(b<1){
        printf("Enter the value of Math Final exam: ");
        scanf("%lf",&math_final_exam[b]);                  //Input_Math final exam_value.
        if(math_final_exam[b]>=0 && math_final_exam[b]<=50){      //checking condition.

            b++;                                  //If the program is true then increment by 1.
        }else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-50).Try again\n");

        }
    }

    while(c<1){
        printf("Enter the value of Math class test: ");
        scanf("%lf",&math_class_test[c]);                  //Input_Math_Class test_value.
        if(math_class_test[c]>=0 && math_class_test[c]<=10){      //checking condition.

            c++;                                  //If the program is true then increment by 1.
        }
        else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }

    while(d<1){
        printf("Enter the value of Math Assignment: ");
        scanf("%lf",&math_assignment[d]);                  //Input_Math_Midterm_value.
        if(math_assignment[d]>=0 && math_assignment[d]<=10){      //checking condition.

            d++;                                  //If the program is true then increment by 1.
        }
        else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }

    while(e<1){
        printf("Enter the value of Math All_behavior: ");
        scanf("%lf",&math_all_behavior[e]);                   //Input math_All_behavior_value.
        if(math_all_behavior[e]>=0 && math_all_behavior[e]<=10){  //checking condition.

            e++;                                        //If the program is true then increment by 1.
        }
        else                                           //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }
        printf("\n");
    //English subject
    //scan all English value.

    while(ae<1){
        printf("Enter the value of English midterm: ");
        scanf("%lf",&eng_midterm[ae]);                  //Input_English_Midterm_value.
        if(eng_midterm[ae]>=0 && eng_midterm[ae]<=20){      //checking condition.

            ae++;                                  //If the program is true then increment by 1.
        }
        else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-20).Try again\n");

        }
    }
    while(be<1){
        printf("Enter the value of English final exam: ");
        scanf("%lf",&eng_final_exam[be]);               //Input_English final_value.
        if(eng_final_exam[be]>=0 && eng_final_exam[be]<=50) //checking condition.
        {
           be++;                                   //If the program is true then increment by 1.
        }
        else                                   //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
           printf("Incorrect value(It limit is 0-50).Try again\n");
        }
    }
       while(ce<1){
        printf("Enter the value of English class test: ");
        scanf("%lf",&eng_class_test[ce]);                //Input_English_class_test_value.
        if(eng_class_test[ce]>=0 && eng_class_test[ce]<=10){ //checking condition.

            ce++;                                    //If the program is true then increment by 1.
        }
        else                                     //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }
       while(de<1){
        printf("Enter the value of English assignment: ");
        scanf("%lf",&eng_assignment[de]);                 //Input_English assignment_value.
        if(eng_assignment[de]>=0 && eng_assignment[de]<=10){  //checking condition.

            de++;                                //If the program is true then increment by 1.
        }
        else                                 //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }

       while(ee<1){
        printf("Enter the value of English All_behavior: ");
        scanf("%lf",&eng_all_behavior[ee]);                   //Input_English class_test_value.
        if(eng_all_behavior[ee]>=0 && eng_all_behavior[ee]<=10){  //checking condition.

            ee++;                                        //If the program is true then increment by 1.
        }
        else                                           //If the program is false then still work the else statement,Otherwise Not work else statement.
        {
         printf("Incorrect value(It limit is 0-10).Try again\n");

        }
    }



    //Calculate_Str_ total_value.
    printf("\n\nStructured Programming Result:\n");
    str_total_marks=str_midterm[0]+str_final_exam[0]+str_class_test[0]+str_assignment[0]+str_all_behavior[0];//Structured_Programming_Total_marks.
    if(str_total_marks>=80 && str_total_marks<=100)
    {
        printf("Letter Grade : A+\n");
        printf("Grade Point  : 4.00\n");
        str_grp=4.00;
    }
    else if(str_total_marks>=75 && str_total_marks<=79)
    {
        printf("Letter Grade : A\n");
        printf("Grade Point  : 3.75\n");
        str_grp=3.75;
    }
    else if(str_total_marks>=70 && str_total_marks<=74)
    {
        printf("Letter Grade : A-\n");
        printf("Grade Point  : 3.50\n");
        str_grp=3.50;
    }
    else if(str_total_marks>=65 && str_total_marks<=69)
    {
        printf("Letter Grade : B+\n");
        printf("Grade Point  : 3.25\n");
        str_grp=3.25;
    }
    else if(str_total_marks>=60 && str_total_marks<=64)
    {
        printf("Letter Grade : B\n");
        printf("Grade Point  : 3.00");
        str_grp=3.00;
    }
    else if(str_total_marks>=55 && str_total_marks<=59)
    {
        printf("Letter Grade : B-\n");
        printf("Grade Point  : 2.75\n");
        str_grp=2.75;
    }
    else if(str_total_marks>=50 && str_total_marks<=54)
    {
        printf("Letter Grade : C+\n");
        printf("Grade Point  : 2.50\n");
        str_grp=2.50;
    }
    else if(str_total_marks>=45 && str_total_marks<=49)
    {
        printf("Letter Grade : C\n");
        printf("Grade Point  : 2.25\n");
        str_grp=2.25;
    }
    else if(str_total_marks>=40 && str_total_marks<=44)
    {
        printf("Letter Grade : D\n");
        printf("Grade Point  : 2.00\n");
        str_grp=2.00;
    }
    else if(str_total_marks>=0 && str_total_marks<=39)
    {
        printf("Letter Grade : F\n");
        printf("Grade Point  : 0.00\n");
        str_grp=0.00;
    }


    //Calcute_Phy_total_value
    printf("\n\nPhysic Result:\n");
    phy_total_marks=phy_midterm[0]+phy_final_exam[0]+phy_class_test[0]+phy_assignment[0]+phy_all_behavior[0];//Phy_total_marks.
    if(phy_total_marks>=80 && phy_total_marks<=100)
    {
        printf("Letter Grade : A+\n");
        printf("Grade Point  : 4.00\n");
        phy_grp=4.00;
    }
    else if(phy_total_marks>=75 && phy_total_marks<=79)
    {
        printf("Letter Grade : A\n");
        printf("Grade Point  : 3.75\n");
        phy_grp=3.75;
    }
    else if(phy_total_marks>=70 && phy_total_marks<=74)
    {
        printf("Letter Grade : A-\n");
        printf("Grade Point  : 3.50\n");
        phy_grp=3.50;
    }
    else if(phy_total_marks>=65 && phy_total_marks<=69)
    {
        printf("Letter Grade : B+\n");
        printf("Grade Point  : 3.25\n");
        phy_grp=3.25;
    }
    else if(phy_total_marks>=60 && phy_total_marks<=64)
    {
        printf("Letter Grade : B\n");
        printf("Grade Point  : 3.00");
        phy_grp=3.00;
    }
    else if(phy_total_marks>=55 && phy_total_marks<=59)
    {
        printf("Letter Grade : B-\n");
        printf("Grade Point  : 2.75\n");
        phy_grp=2.75;
    }
    else if(phy_total_marks>=50 && phy_total_marks<=54)
    {
        printf("Letter Grade : C+\n");
        printf("Grade Point  : 2.50\n");
        phy_grp=2.50;
    }
    else if(phy_total_marks>=45 && phy_total_marks<=49)
    {
        printf("Letter Grade : C\n");
        printf("Grade Point  : 2.25\n");
        phy_grp=2.25;
    }
    else if(phy_total_marks>=40 && phy_total_marks<=44)
    {
        printf("Letter Grade : D\n");
        printf("Grade Point  : 2.00\n");
        phy_grp=2.00;
    }
    else if(phy_total_marks>=0 && phy_total_marks<=39)
    {
        printf("Letter Grade : F\n");
        printf("Grade Point  : 0.00\n");
        phy_grp=0.00;
    }

    //Calculate Math total value:
    printf("\n\nMath Result:\n");
    math_total_marks=math_midterm[0]+math_final_exam[0]+math_class_test[0]+math_assignment[0]+math_all_behavior[0];
    if(math_total_marks>=80 && math_total_marks<=100)
    {
        printf("Letter Grade : A+\n");
        printf("Grade Point  : 4.00\n");
        math_grp=4.00;
    }
    else if(math_total_marks>=75 && math_total_marks<=79)
    {
        printf("Letter Grade : A\n");
        printf("Grade Point  : 3.75\n");
        math_grp=3.75;
    }
    else if(math_total_marks>=70 && math_total_marks<=74)
    {
        printf("Letter Grade : A-\n");
        printf("Grade Point  : 3.50\n");
        math_grp=3.50;
    }
    else if(math_total_marks>=65 && math_total_marks<=69)
    {
        printf("Letter Grade : B+\n");
        printf("Grade Point  : 3.25\n");
        math_grp=3.25;
    }
    else if(math_total_marks>=60 && math_total_marks<=64)
    {
        printf("Letter Grade : B\n");
        printf("Grade Point  : 3.00");
        math_grp=3.00;
    }
    else if(math_total_marks>=55 && math_total_marks<=59)
    {
        printf("Letter Grade : B-\n");
        printf("Grade Point  : 2.75\n");
        math_grp=2.75;
    }
    else if(math_total_marks>=50 && math_total_marks<=54)
    {
        printf("Letter Grade : C+\n");
        printf("Grade Point  : 2.50\n");
        math_grp=2.50;
    }
    else if(math_total_marks>=45 && math_total_marks<=49)
    {
        printf("Letter Grade : C\n");
        printf("Grade Point  : 2.25\n");
        math_grp=2.25;
    }
    else if(math_total_marks>=40 && math_total_marks<=44)
    {
        printf("Letter Grade : D\n");
        printf("Grade Point  : 2.00\n");
        math_grp=2.00;
    }
    else
    {
        printf("Letter Grade : F\n");
        printf("Grade Point  : 0.00\n");
        math_grp=0.00;
    }

    //Calculate all English value
    printf("\n\nEnglish Result:\n");
    eng_total_marks=eng_midterm[0]+eng_final_exam[0]+eng_class_test[0]+eng_assignment[0]+eng_all_behavior[0];
    if(eng_total_marks>=80 && eng_total_marks<=100)
    {
        printf("Letter Grade : A+\n");
        printf("Grade Point  : 4.00\n");
        eng_grp=4.00;
    }
    else if(eng_total_marks>=75 && eng_total_marks<=79)
    {
        printf("Letter Grade : A\n");
        printf("Grade Point  : 3.75\n");
        eng_grp=3.75;
    }
    else if(eng_total_marks>=70 && eng_total_marks<=74)
    {
        printf("Letter Grade : A-\n");
        printf("Grade Point  : 3.50\n");
        eng_grp=3.50;
    }
    else if(eng_total_marks>=65 && eng_total_marks<=69)
    {
        printf("Letter Grade : B+\n");
        printf("Grade Point  : 3.25\n");
        eng_grp=3.25;
    }
    else if(eng_total_marks>=60 && eng_total_marks<=64)
    {
        printf("Letter Grade : B\n");
        printf("Grade Point  : 3.00");
        eng_grp=3.00;
    }
    else if(eng_total_marks>=55 && eng_total_marks<=59)
    {
        printf("Letter Grade : B-\n");
        printf("Grade Point  : 2.75\n");
        eng_grp=2.75;
    }
    else if(eng_total_marks>=50 && eng_total_marks<=54)
    {
        printf("Letter Grade : C+\n");
        printf("Grade Point  : 2.50\n");
        eng_grp=2.50;
    }
    else if(eng_total_marks>=45 && eng_total_marks<=49)
    {
        printf("Letter Grade : C\n");
        printf("Grade Point  : 2.25\n");
        eng_grp=2.25;
    }
    else if(eng_total_marks>=40 && eng_total_marks<=44)
    {
        printf("Letter Grade : D\n");
        printf("Grade Point  : 2.00\n");
        eng_grp=2.00;
    }
    else
    {
        printf("Letter Grade : F\n");
        printf("Grade Point  : 0.00\n");
        eng_grp=0.00;
    }

    //Calculate Total Result
    printf("\n\nFinal Result:\n");
    //Calculate total marks

    if(str_total_marks>=39 && phy_total_marks>=39 && math_total_marks>=39 && eng_total_marks>=39)//This statement use for checking fail subject.
    {

            total_grp=(str_grp+phy_grp+math_grp+eng_grp)/4.00;//calculate grade point..
            printf("Grade Point: %0.2lf\n",total_grp);
    }
    else
    {
        printf("Letter Grade: F\n");
        printf("Grade Point : 0.00\n");
        fprintf(gfp,"Letter Grade : F\nGrade Point: 0.00\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }
    if(total_grp>=4.00 && total_grp<=5.00)
    {
        printf("Letter Grade : A+\n");
        fprintf(gfp,"Letter Grade : A\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }


    else if(total_grp>=3.75 && total_grp<=3.99)
    {
        printf("Letter Grade : A\n");
        fprintf(gfp,"Letter Grade : A\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }
    else if(total_grp>=3.50 && total_grp<=3.74)
    {
        printf("Letter Grade : A-\n");
        fprintf(gfp,"Letter Grade : A-\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }
    else if(total_grp>=3.25 && total_grp<=3.49)
    {
        printf("Letter Grade : B+\n");
        fprintf(gfp,"Letter Grade : B+\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }
    else if(total_grp>=3.00 && total_grp<=3.24)
    {
        printf("Letter Grade : B\n");
        fprintf(gfp,"Letter Grade : B\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }
    else if(total_grp>=2.75 && total_grp<=2.99)
    {
        printf("Letter Grade : B-\n");
        fprintf(gfp,"Letter Grade : B-\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }
    else if(total_grp>=2.50 && total_grp<=2.74)
    {
        printf("Letter Grade : C+\n");
        fprintf(gfp,"Letter Grade : C+\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }
    else if(total_grp>=2.25 && total_grp<=2.49)
    {
        printf("Letter Grade : C\n");
        fprintf(gfp,"Letter Grade : C\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }
    else if(total_grp>=2.00 && total_grp<=2.24)
    {
        printf("Letter Grade : D\n");
        fprintf(gfp,"Letter Grade : D\nGrade Point : %0.2lf\n\nStructured Programming : %0.2lf\nPhysic : %0.2lf\nMath : %0.2lf\nEnglish : %0.2lf\n",total_grp,str_total_marks,phy_total_marks,math_total_marks,eng_total_marks);
        fclose(gfp);
    }


    return 0;
}


