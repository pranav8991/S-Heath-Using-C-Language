#include<stdio.h>
int main()
{
	int i,a,b,c,d,cal,req;
	int age,grams_of_fat,Carbohydrates, Protein,Fats; 
	float weight, height, Z,FEETTOMETER = 0.3048;
	char M,m,Gender,F,f;
	char N[50];
	int  p[50];
	char x[50];
	printf("\n                                                                   ");
	printf("\n                                                                   ");
	printf("\n                                                                   ");
	printf("\n                                                                   ");
	printf("\n                                                                   ");
	printf("\n****************                                              ****************");
	printf("\n **************      ****WELCOME TO THE FITNESS CLUB****       **************");
	printf("\n  ************       ===================================        ************");
	printf("\n   **********                                                    **********");
	printf("\n    ********                                                      ********");
	printf("\n     ******                                                        ******");
	printf("\n      ****        e                e       ***  *     * *     *     ****");
	printf("\n       **       e e                e e    *      *   *  * * * *      **");
	printf("\n       __      e  e================e  e  * ***    * *   *  *  *      __ ");
	printf("\n      _||_      e e                e e    *   *    *    *     *     _||_");
	printf("\n   __|____|__     e                e       ***    *     *     *  __|____|__");
	printf("\n                                                                   ");
    printf("\n                                                                               ");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n                                                                               ");
	printf("\n                    ***CHOOSE ANY 1 COMMAND GIVEN BELOW***                   ");
	printf("\n                    ======================================                   ");
	printf("\n                                                                             ");
	printf("\n                                                                             ");
	printf("\n      ********************************************************************   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *  >>PRESS <0>  to Know How much of Nutrient your food have ??     *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                         OR                                       *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *  >>PRESS <1> to Know How much of Calories your food have ??      *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                         OR                                       *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *  >>PRESS <2> to See Your Diet Plan ??                            *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                         OR                                       *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *  >>PRESS <3> to Know your 'BODY MASS INDEX (BMI)' ??             *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                         OR                                       *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *  >>PRESS <4> to See DIET CHART ??                                *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                         OR                                       *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *  >>PRESS <5> if you want some Fitness Tips ??                    *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *                         OR                                       *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      *  >>PRESS <6> if you want to know everything about your 'DIET'??  *   ");
	printf("\n      *                                                                  *   ");
	printf("\n      ********************************************************************   ");
	printf("\n                                                                             ");
	printf("\n                                                                             ");
	printf("\n  Q.what you want please enter =  ");
	scanf("%d",&a);
	printf("                                                                               ");
   if(a==0)
{
    printf("\n                                                                             ");
	printf("\n  ****This program will tell you how much of the Nutrient in food****        ");
	printf("\n  ===================================================================        ");
    printf("\n                                                                             ");
    printf("\n  Q.How many grams of food in one serving = ");
    scanf("%d",&grams_of_fat);
        Carbohydrates = grams_of_fat *4;
        Protein = grams_of_fat *4;
        Fats =  grams_of_fat *9;
    printf("\n                                                                   "); 
	printf("\n  <<Carbohydrates that you consume = %d gram",Carbohydrates);
    printf("\n                                                                              ");
	printf("\n  <<Protein that you consume = %d gram",Protein);
    printf("\n                                                                              ");
	printf("\n  <<Fats that you consume = %d gram",Fats);
	printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
}
else if(a==1)
{
    printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n         **************************************************************");
    printf("\n         *                                                            *");
    printf("\n         *            ***DETAILED LIST OF FOOD***                     *");
    printf("\n         *            ===========================                     *");
    printf("\n         *                                                            *");
    printf("\n         **************************************************************");
    printf("\n         *                       *                      *             *");
    printf("\n         *       Protein         *    Carbohydrates     *  Calcium    *");
    printf("\n         *                       *                      *             *");
    printf("\n         **************************************************************");
    printf("\n         * S.no *     Items      * S.no* Iteams   * S.no *    Items   *");
    printf("\n         **************************************************************");
    printf("\n         * (1)  * Eggs           * (5) * Breads   *  (9) *  Milk      *");
    printf("\n         * (2)  * Nuts           * (6) * Cereals  * (10) *  Cheeses   *");
    printf("\n         * (3)  * Beans          * (7) * Rice     * (11) *  Egg yolks *");
    printf("\n         * (4)  * Dairy products * (8) * Potatoes * (12) *  Bananas   *");  
    printf("\n         **************************************************************");
	printf("\n                                                                   ");
	printf("\n                                                                   ");
	printf("\n\n  >>Enter the number of iteam consumed  :");
	scanf("%d",&c);
	cal=0;
	for(i=1;i<=c;i++)
	{
	printf("\n\n  >>Enter the serial number of an items. %d",i);
	printf(":");
	scanf("%d",&p[i]);
	d=p[i];	
	switch(d) 
	{ 
	case 1:
		cal+=130;
		break;
	case 2:
		cal+=180;
		break;
	case 3:
		cal+=200;
		break;
	case 4:
		cal+=130;
		break;
	case 5:
		cal+=180;
		break;
	case 6:
		cal+=200;
		break;
	case 7:
		cal+=130;
		break;
	case 8:
		cal+=180;
		break;
	case 9:
		cal+=200;
		break;
	case 10:
		cal+=130;
		break;
	case 11:
		cal+=180;
		break;
	case 12:
		cal+=105;
		break;
	default :
		printf("\n                                                                   ");
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n********** ITEM IS NOT PRESENT IN THE TABLE ***********!");
		printf("\n                                                                   ");
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		return 0;
		break;
		}
	}
	printf("\n          _____________________________");
	printf("\n         |     NUTRIENT CONSUMED       |");
	printf("\n         |       (IN CALORIES)         | ");
	printf("\n         |_____________________________|");
	printf("\n         |                             |");
	printf("\n         |           %d",cal);printf("               |");  
	printf("\n         |                             |");
	printf("\n         |_____________________________|");
		printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");	
}
 else if(a==2)
{
	printf("\n\n  ****This program will show your food diet plan that you have to follow****");
    printf("\n  ==========================================================================                       ");
	printf("\n                                                                             ");
	printf("\n                   ***************************************");
	printf("\n                   *                                     *");
	printf("\n                   *   >>PRESS <0> if you are 'MALE'!!   *");
	printf("\n                   *                                     *");
	printf("\n                   *                 OR                  *");
	printf("\n                   *                                     *");
	printf("\n                   *   >>PRESS <1> if you are 'FEMALE'!! *");   
	printf("\n                   *                                     *");
	printf("\n                   ***************************************");
	printf("\n                                                                            ");
	printf("\n  Q.Enter your Gender = ");
	scanf("%d",&Gender);
 if(Gender==0)
{	
    printf("\n  Q.Enter your Name = ");
    scanf("%s",&N);
	printf("\n  Q.Enter your age = ");
	scanf("%d",&age);
  if(age==2||age==3)
{     
    printf("\n\n  >>PROTEIN PER DAY = 16.7(g)");
    printf("\n\n  >>FAT PER DAY = 27(g)");
    printf("\n\n  >>CALORIES PER DAY = 1060(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
    printf("\n\n  >>IRON PER DAY = 9(mg)");
} 
else if(age==4||age==5||age==6)
{	 
    printf("\n\n  >>PROTEIN PER DAY = 20.1(g)");
    printf("\n\n  >>FAT PER DAY = 25(g)");
    printf("\n\n  >>CALORIES PER DAY = 1350(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
    printf("\n\n  >>IRON PER DAY = 13(mg)");
}
else if(age==7||age==8||age==9)
{	 
    printf("\n\n  >>PROTEIN PER DAY = 29.5(g)");
    printf("\n\n  >>FAT PER DAY = 30(g)");
    printf("\n\n  >>CALORIES PER DAY = 1690(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
    printf("\n\n  >>IRON PER DAY = 16(mg)");
}
else if(age==10||age==11||age==12)
{
	printf("\n\n  >>PROTEIN PER DAY = 39.9(g)");
    printf("\n\n  >>FAT PER DAY = 35(g)");
    printf("\n\n  >>CALORIES PER DAY = 2190(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
    printf("\n\n  >>IRON PER DAY = 21(mg)");
}
else if(age==13||age==14||age==15)
{	 
    printf("\n\n  >>PROTEIN PER DAY = 54.3(g)");
    printf("\n\n  >>FAT PER DAY = 45(g)");
    printf("\n\n  >>CALORIES PER DAY = 2750(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
    printf("\n\n  >>IRON PER DAY = 32(mg)");
}
else if(age==16||age==17||age==18)
{	 
    printf("\n\n  >>PROTEIN PER DAY = 61.5(g)");
    printf("\n\n  >>FAT PER DAY = 50(g)");
    printf("\n\n  >>CALORIES PER DAY = 3020(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
    printf("\n\n  >>IRON PER DAY = 28(mg)");
}
else  
{	 
    printf("\n\n  >>PROTEIN PER DAY = 25(g)");
    printf("\n\n  >>FAT PER DAY = 60(g)");
    printf("\n\n  >>CALORIES PER DAY = 2320(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
    printf("\n\n  >>IRON PER DAY = 17(mg)");
}
    printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                                ");
	printf("\n                                                             ");
	printf("\n                                                             ");
}	 
	 
   if(Gender==1)
{	
    printf("\n  Q.Enter your age = ");
	scanf("%d",&age);  
	 if(age==2||age==3)
 
 {
     	printf("\n\n  >>PROTEIN PER DAY = 16.7(g)");
     	printf("\n\n  >>FAT PER DAY = 27(g)");
     	printf("\n\n  >>CALORIES PER DAY = 1060(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 9(mg)");
}
	 else if(age==4||age==5||age==6)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 20.1(g)");
     	printf("\n\n  >>FAT PER DAY = 25(g)");
     	printf("\n\n  >>CALORIES PER DAY = 1350(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 13(mg)");
}

     else if(age==7||age==8||age==9)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 26.5(g)");
     	printf("\n\n  >>FAT PER DAY = 25(g)");
     	printf("\n\n  >>CALORIES PER DAY = 1490(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 15(mg)");
}
	 else if(age==10||age==11||age==12)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 35.9(g)");
     	printf("\n\n  >>FAT PER DAY = 32(g)");
     	printf("\n\n  >>CALORIES PER DAY = 1790(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
     	printf("\n\n  >>IRON PER DAY = 18(mg)");
}
	 else if(age==13||age==14||age==15)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 54.3(g)");
     	printf("\n\n  >>FAT PER DAY = 37(g)");
     	printf("\n\n  >>CALORIES PER DAY = 2750(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
     	printf("\n\n  >>IRON PER DAY = 30(mg)");
}
	 else if(age==16||age==17||age==18)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 41.5(g)");
     	printf("\n\n  >>FAT PER DAY = 42(g)");
     	printf("\n\n  >>CALORIES PER DAY = 3020(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 24(mg)");
}
	 else 
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 25(g)");
     	printf("\n\n  >>FAT PER DAY = 60(g)");
     	printf("\n\n  >>CALORIES PER DAY = 2320(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 17(mg)");
}
    printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
}
else
{
printf("\n                                                             ");
printf("\n                                                                   ");
printf("\n\n  >>I'm sorry, you entered something wrong please check !!");
printf("\n                                                             ");
printf("\n                                                                   ");
}
}
else if(a==3)
	{
	printf("\n                                                                             ");
	printf("\n     ****This program will tell you about BODY MASS INDEX (BMI)****             ");
	printf("\n     ==============================================================             ");
    printf("\n                                                                             ");
    printf("\n  Q.Enter your Name = ");
    scanf("%s",&N);
    	printf("\n                                                                             ");
	printf("\n                   ***************************************");
	printf("\n                   *                                     *");
	printf("\n                   *   >>PRESS <0> if you are 'MALE'!!   *");
	printf("\n                   *                                     *");
	printf("\n                   *                 OR                  *");
	printf("\n                   *                                     *");
	printf("\n                   *   >>PRESS <1> if you are 'FEMALE'!! *");   
	printf("\n                   *                                     *");
	printf("\n                   ***************************************");
	printf("\n                                                                            ");
	printf("\n  Q.Enter your Gender = ");
	scanf("%d",&Gender);
 if(Gender==0)
 {
    printf("\n  Q.Enter your weight(in kgs):");
    scanf("%f", &weight);
	printf("\n  Q.Enter your height(in feet):");
    scanf("%f", &height);
    height = height * FEETTOMETER;
    Z = (weight)/(height * height);
  	printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n  >>Your Body Mass Index: %f\n", Z);
    printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n                                                                             ");
	printf("\n            **************************************************");
	printf("\n            *                                                *");
	printf("\n            *   >>PRESS <0> if you do 'NORMAL EXERCISES'!!   *");
	printf("\n            *                                                *");
	printf("\n            *                 OR                             *");
	printf("\n            *                                                *");
	printf("\n            *   >>PRESS <1> if you are 'GYMER'!!             *");   
	printf("\n            *                                                *");
	printf("\n            **************************************************");
	printf("\n                                                                            ");
    printf("\n  Q.Enter your Plan = ");
	scanf("%d",&Gender);
 if(Gender==0)
{ 
    if(Z<18.9)
    {
    	printf("\n                                                                   ");
	    printf("\n                                                                   ");
    	printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is underweight !!   *");
	    printf("\n      *     --------------------------------------------   *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
	    printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>19 && Z<25.4)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is normal !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>25.5 && Z<30.4)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is overweight !!    *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>30.5)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition  is obese !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
    }
	else if(Gender==1)
	{
	if(Z<29.9)
    {
    	printf("\n                                                                   ");
	    printf("\n                                                                   ");
    	printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is underweight !!   *");
	    printf("\n      *     --------------------------------------------   *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
	    printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>30 && Z<39.9)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is normal !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>40 && Z<49.9)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is overweight !!    *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>50)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition  is obese !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}	
	}
    printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
  }
  if (Gender==1)
  {
  	    printf("\n  Q.Enter your weight(in kgs):");
    scanf("%f", &weight);
	printf("\n  Q.Enter your height(in feet):");
    scanf("%f", &height);
    height = height * FEETTOMETER;
    Z = (weight)/(height * height);
  	printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n  >>Your Body Mass Index: %f\n", Z);
    printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n                                                                             ");
	printf("\n            **************************************************");
	printf("\n            *                                                *");
	printf("\n            *   >>PRESS <0> if you do 'NORMAL EXERCISES'!!   *");
	printf("\n            *                                                *");
	printf("\n            *                 OR                             *");
	printf("\n            *                                                *");
	printf("\n            *   >>PRESS <1> if you are 'GYMER'!!             *");   
	printf("\n            *                                                *");
	printf("\n            **************************************************");
	printf("\n                                                                            ");
    printf("\n  Q.Enter your Plan = ");
	scanf("%d",&Gender);
 if(Gender==0)
{ 
    if(Z<18.5)
    {
    	printf("\n                                                                   ");
	    printf("\n                                                                   ");
    	printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is underweight !!   *");
	    printf("\n      *     --------------------------------------------   *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
	    printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>18.6 && Z<24.9)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is normal !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>25 && Z<29.9)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is overweight !!    *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>30)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition  is obese !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
    }
	else if(Gender==1)
	{
	if(Z<18.9)
    {
    	printf("\n                                                                   ");
	    printf("\n                                                                   ");
    	printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is underweight !!   *");
	    printf("\n      *     --------------------------------------------   *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
	    printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>19 && Z<25.4)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is normal !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>25.5 && Z<30.4)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is overweight !!    *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>30.5)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition  is obese !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}	
	}
    printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
  }
  }
else if(a==4)
{
	printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
}
else if(a==5)
{
	printf("\n                                                             ");
	printf("\n  ****This program will tell you some Fitness Tips****        ");
	printf("\n  ====================================================        ");
    printf("\n                                                             ");
	printf("\n\n  >>1. Don't skip breakfast");	
    printf("\n\n  >>2. Eat regular meals");
    printf("\n\n  >>3. Eat plenty of fruit and veg");
    printf("\n\n  >>4. Get more active");
    printf("\n\n  >>5. Eat high-fibre foods");
    printf("\n\n  >>6. Read food labels");
    printf("\n\n  >>7. Don't ban foods");
    printf("\n\n  >>8. Don't stock junk food");
    printf("\n\n  >>9. Plan your meals");
    printf("\n\n  >>10. Drink plenty of water");
    printf("\n\n\n\n                                                             ");
    printf("\n                        ***And here is the Diet chat***                          ");
    printf("\n                        ===============================                          ");
	printf("\n                                                             ");
    printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
	printf("\n                                                             ");
    printf("\n                                                             ");
}
else if(a==6)
{
	
	printf("\n                                                                             ");
	printf("\n     ****This program will tell you about everything about your 'DIET'****   ");
	printf("\n     =====================================================================   ");
    printf("\n                                                                             ");
    printf("\n  Q.Enter your Name = ");
    scanf("%s",&N);
    printf("\n                                                                             ");
	printf("\n                   ***************************************");
	printf("\n                   *                                     *");
	printf("\n                   *   >>PRESS <0> if you are 'MALE'!!   *");
	printf("\n                   *                                     *");
	printf("\n                   *                 OR                  *");
	printf("\n                   *                                     *");
	printf("\n                   *   >>PRESS <1> if you are 'FEMALE'!! *");   
	printf("\n                   *                                     *");
	printf("\n                   ***************************************");
	printf("\n                                                                            ");
	printf("\n  Q.Enter your Gender = ");
	scanf("%d",&Gender);
 if(Gender==0)
 {
    printf("\n  Q.Enter your weight(in kgs):");
    scanf("%f", &weight);
	printf("\n  Q.Enter your height(in feet):");
    scanf("%f", &height);
    height = height * FEETTOMETER;
    Z = (weight)/(height * height);
  	printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n  >>Your Body Mass Index: %f\n", Z);
    printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n                                                                             ");
	printf("\n            **************************************************");
	printf("\n            *                                                *");
	printf("\n            *   >>PRESS <0> if you do 'NORMAL EXERCISES'!!   *");
	printf("\n            *                                                *");
	printf("\n            *                 OR                             *");
	printf("\n            *                                                *");
	printf("\n            *   >>PRESS <1> if you are 'GYMER'!!             *");   
	printf("\n            *                                                *");
	printf("\n            **************************************************");
	printf("\n                                                                            ");
    printf("\n  Q.Enter your Plan = ");
	scanf("%d",&Gender);
 if(Gender==0)
{ 
    if(Z<18.9)
    {
    	printf("\n                                                                   ");
	    printf("\n                                                                   ");
    	printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is underweight !!   *");
	    printf("\n      *     --------------------------------------------   *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
	    printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>19 && Z<25.4)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is normal !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>25.5 && Z<30.4)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is overweight !!    *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>30.5)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition  is obese !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
    }
	else if(Gender==1)
	{
	if(Z<29.9)
    {
    	printf("\n                                                                   ");
	    printf("\n                                                                   ");
    	printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is underweight !!   *");
	    printf("\n      *     --------------------------------------------   *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
	    printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>30 && Z<39.9)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is normal !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>40 && Z<49.9)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is overweight !!    *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>50)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition  is obese !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}	
    }
    printf("\n  Q.Enter your age = ");
	scanf("%d",&age);
  if(age==2||age==3)
{     
    printf("\n\n  >>PROTEIN PER DAY = 16.7(g)");
    printf("\n\n  >>FAT PER DAY = 27(g)");
    printf("\n\n  >>CALORIES PER DAY = 1060(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
    printf("\n\n  >>IRON PER DAY = 9(mg)");
} 
else if(age==4||age==5||age==6)
{	 
    printf("\n\n  >>PROTEIN PER DAY = 20.1(g)");
    printf("\n\n  >>FAT PER DAY = 25(g)");
    printf("\n\n  >>CALORIES PER DAY = 1350(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
    printf("\n\n  >>IRON PER DAY = 13(mg)");
}
else if(age==7||age==8||age==9)
{	 
    printf("\n\n  >>PROTEIN PER DAY = 29.5(g)");
    printf("\n\n  >>FAT PER DAY = 30(g)");
    printf("\n\n  >>CALORIES PER DAY = 1690(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
    printf("\n\n  >>IRON PER DAY = 16(mg)");
}
else if(age==10||age==11||age==12)
{
	printf("\n\n  >>PROTEIN PER DAY = 39.9(g)");
    printf("\n\n  >>FAT PER DAY = 35(g)");
    printf("\n\n  >>CALORIES PER DAY = 2190(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
    printf("\n\n  >>IRON PER DAY = 21(mg)");
}
else if(age==13||age==14||age==15)
{	 
    printf("\n\n  >>PROTEIN PER DAY = 54.3(g)");
    printf("\n\n  >>FAT PER DAY = 45(g)");
    printf("\n\n  >>CALORIES PER DAY = 2750(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
    printf("\n\n  >>IRON PER DAY = 32(mg)");
}
else if(age==16||age==17||age==18)
{	 
    printf("\n\n  >>PROTEIN PER DAY = 61.5(g)");
    printf("\n\n  >>FAT PER DAY = 50(g)");
    printf("\n\n  >>CALORIES PER DAY = 3020(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
    printf("\n\n  >>IRON PER DAY = 28(mg)");
}
else  
{	 
    printf("\n\n  >>PROTEIN PER DAY = 25(g)");
    printf("\n\n  >>FAT PER DAY = 60(g)");
    printf("\n\n  >>CALORIES PER DAY = 2320(kcal)");
    printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
    printf("\n\n  >>IRON PER DAY = 17(mg)");
}
}
  
else if (Gender==1)
  {
  	    printf("\n  Q.Enter your weight(in kgs):");
    scanf("%f", &weight);
	printf("\n  Q.Enter your height(in feet):");
    scanf("%f", &height);
    height = height * FEETTOMETER;
    Z = (weight)/(height * height);
  	printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n  >>Your Body Mass Index: %f\n", Z);
    printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n                                                                             ");
	printf("\n            **************************************************");
	printf("\n            *                                                *");
	printf("\n            *   >>PRESS <0> if you do 'NORMAL EXERCISES'!!   *");
	printf("\n            *                                                *");
	printf("\n            *                 OR                             *");
	printf("\n            *                                                *");
	printf("\n            *   >>PRESS <1> if you are 'GYMER'!!             *");   
	printf("\n            *                                                *");
	printf("\n            **************************************************");
	printf("\n                                                                            ");
    printf("\n  Q.Enter your Plan = ");
	scanf("%d",&Gender);
 if(Gender==0)
{ 
    if(Z<18.5)
    {
    	printf("\n                                                                   ");
	    printf("\n                                                                   ");
    	printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is underweight !!   *");
	    printf("\n      *     --------------------------------------------   *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
	    printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>18.6 && Z<24.9)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is normal !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>25 && Z<29.9)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is overweight !!    *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>30)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition  is obese !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
    }
	else if(Gender==1)
	{
	if(Z<18.9)
    {
    	printf("\n                                                                   ");
	    printf("\n                                                                   ");
    	printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is underweight !!   *");
	    printf("\n      *     --------------------------------------------   *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
	    printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>19 && Z<25.4)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is normal !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>25.5 && Z<30.4)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition is overweight !!    *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}
	else if(Z>30.5)
	{
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
		printf("\n      ******************************************************");
	    printf("\n      *                                                    *");
    	printf("\n      *   >>Your body weight condition  is obese !!        *");
	    printf("\n      *     ---------------------------------------        *");
	    printf("\n      *                                                    *");
	    printf("\n      ******************************************************");	
		printf("\n                                                                   ");
	    printf("\n                                                                   ");
	}	
	}
	printf("\n  Q.Enter your age = ");
	scanf("%d",&age);  
	 if(age==2||age==3)
 
 {
     	printf("\n\n  >>PROTEIN PER DAY = 16.7(g)");
     	printf("\n\n  >>FAT PER DAY = 27(g)");
     	printf("\n\n  >>CALORIES PER DAY = 1060(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 9(mg)");
}
	 else if(age==4||age==5||age==6)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 20.1(g)");
     	printf("\n\n  >>FAT PER DAY = 25(g)");
     	printf("\n\n  >>CALORIES PER DAY = 1350(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 13(mg)");
}

     else if(age==7||age==8||age==9)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 26.5(g)");
     	printf("\n\n  >>FAT PER DAY = 25(g)");
     	printf("\n\n  >>CALORIES PER DAY = 1490(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 15(mg)");
}
	 else if(age==10||age==11||age==12)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 35.9(g)");
     	printf("\n\n  >>FAT PER DAY = 32(g)");
     	printf("\n\n  >>CALORIES PER DAY = 1790(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
     	printf("\n\n  >>IRON PER DAY = 18(mg)");
}
	 else if(age==13||age==14||age==15)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 54.3(g)");
     	printf("\n\n  >>FAT PER DAY = 37(g)");
     	printf("\n\n  >>CALORIES PER DAY = 2750(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 800(mg)");
     	printf("\n\n  >>IRON PER DAY = 30(mg)");
}
	 else if(age==16||age==17||age==18)
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 41.5(g)");
     	printf("\n\n  >>FAT PER DAY = 42(g)");
     	printf("\n\n  >>CALORIES PER DAY = 3020(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 24(mg)");
}
	 else 
{	 
     	printf("\n\n  >>PROTEIN PER DAY = 25(g)");
     	printf("\n\n  >>FAT PER DAY = 60(g)");
     	printf("\n\n  >>CALORIES PER DAY = 2320(kcal)");
     	printf("\n\n  >>CALCIUM PER DAY = 600(mg)");
     	printf("\n\n  >>IRON PER DAY = 17(mg)");
}
}	
  {
    printf("\n                                                                   ");
    printf("\n                                                                   ");
    printf("\n                                                                             ");
	printf("\n  ****This program will tell you how much of the Nutrient in food****        ");
	printf("\n  ===================================================================        ");
    printf("\n                                                                             ");
    printf("\n  Q.How many grams of food in one serving = ");
      scanf("%d",&grams_of_fat);
        Carbohydrates = grams_of_fat *4;
        Protein = grams_of_fat *4;
        Fats =  grams_of_fat *9;
    printf("\n                                                                   "); 
	printf("\n  <<Carbohydrates that you consume = %d gram",Carbohydrates);
    printf("\n                                                                              ");
	printf("\n  <<Protein that you consume = %d gram",Protein);
    printf("\n                                                                              ");
	printf("\n  <<Fats that you consume = %d gram",Fats);
	printf("\n                                                                   ");
  }
  {
  	printf("\n                                                                   ");
   printf("\n                                                                             ");
	printf("\n  ****This program will tell you how much of the calories in food****        ");
	printf("\n  ===================================================================        ");
    printf("\n                                                                             ");
    printf("\n                                                                   ");
	printf("\n                                                                   ");
    printf("\n         **************************************************************");
    printf("\n         *                                                            *");
    printf("\n         *            ***DETAILED LIST OF FOOD***                     *");
    printf("\n         *            ===========================                     *");
    printf("\n         *                                                            *");
    printf("\n         **************************************************************");
    printf("\n         *                       *                      *             *");
    printf("\n         *       Protein         *    Carbohydrates     *  Calcium    *");
    printf("\n         *                       *                      *             *");
    printf("\n         **************************************************************");
    printf("\n         * S.no *     Items      * S.no* Iteams   * S.no *    Items   *");
    printf("\n         **************************************************************");
    printf("\n         * (1)  * Eggs           * (5) * Breads   *  (9) *  Milk      *");
    printf("\n         * (2)  * Nuts           * (6) * Cereals  * (10) *  Cheeses   *");
    printf("\n         * (3)  * Beans          * (7) * Rice     * (11) *  Egg yolks *");
    printf("\n         * (4)  * Dairy products * (8) * Potatoes * (12) *  Bananas   *");  
    printf("\n         **************************************************************");
	printf("\n                                                                   ");
	printf("\n                                                                   ");
	printf("\n\n  >>Enter the number of iteam consumed  :");
	scanf("%d",&c);
	cal=0;
	for(i=1;i<=c;i++)
	{
	printf("\n\n  >>Enter the serial number of an items. %d",i);
	printf(":");
	scanf("%d",&p[i]);
	d=p[i];	
	switch(d) 
	{ 
	case 1:
		cal+=130;
		break;
	case 2:
		cal+=180;
		break;
	case 3:
		cal+=200;
		break;
	case 4:
		cal+=130;
		break;
	case 5:
		cal+=180;
		break;
	case 6:
		cal+=200;
		break;
	case 7:
		cal+=130;
		break;
	case 8:
		cal+=180;
		break;
	case 9:
		cal+=200;
		break;
	case 10:
		cal+=130;
		break;
	case 11:
		cal+=180;
		break;
	case 12:
		cal+=105;
		break;
	default :
		printf("********** ITEM IS NOT PRESENT IN THE TABLE ***********!");
		return 0;
		break;
		}
	}
	printf("\n          _____________________________");
	printf("\n         |     NUTRIENT CONSUMED       |");
	printf("\n         |       (IN CALORIES)         | ");
	printf("\n         |_____________________________|");
	printf("\n         |                             |");
	printf("\n         |           %d",cal);printf("               |");  
	printf("\n         |                             |");
	printf("\n         |_____________________________|");
		printf("\n                                                                   ");
}
{
	printf("\n                                                             ");
    printf("\n  Q.Did u do daily exercise? = ");
    scanf("  =%c",&x);
    printf("\n                                                             ");
	printf("\n  ****This program will tell you some Fitness Tips****        ");
	printf("\n  ====================================================        ");
    printf("\n                                                             ");
	printf("\n\n  >>1. Don't skip breakfast");	
    printf("\n\n  >>2. Eat regular meals");
    printf("\n\n  >>3. Eat plenty of fruit and veg");
    printf("\n\n  >>4. Get more active");
    printf("\n\n  >>5. Eat high-fibre foods");
    printf("\n\n  >>6. Read food labels");
    printf("\n\n  >>7. Don't ban foods");
    printf("\n\n  >>8. Don't stock junk food");
    printf("\n\n  >>9. Plan your meals");
    printf("\n\n  >>10. Drink plenty of water");
    printf("\n\n\n\n                                                             ");
    printf("\n                        ***And here is the Diet chat***                          ");
    printf("\n                        ===============================                          ");
	printf("\n                                                             ");
    printf("\n                                                                   ");
	printf("\n$$$$$$$                                                                 $$$$$$$");
    printf("\n$              ***********************************************                $");
	printf("\n$              *                                             *                $");
	printf("\n$              *           ## FRUITS DIET CHART ##           *                $");
	printf("\n$              *           -----------------------           *                $");
	printf("\n$              *                                             *                $");
	printf("\n$              ***********************************************                $");
    printf("\n$              *S.NO*      FRUITS         * CALORIES *PROTEIN*                $");
    printf("\n$              ***********************************************                $");
	printf("\n$              *    *                     *          *       *                $");
	printf("\n$              * 1. * 1 MEDIUM BANANA     * 105 cal  * 1.5 g *                $");
	printf("\n$              * 2. * 1 CUP STRAWBERIES   *  46 cal  * 1.0 g *                $");
	printf("\n$              * 3. * 1 CUP PURPLE GRAPES * 104 cal  * 1.0 g *                $");
	printf("\n$              * 4. * 1 CUP BLUEBERRIES   *  84 cal  * 1.1 g *                $");
	printf("\n$              * 5. * 1 CUP PINEAPPLE     *  82 cal  * 1.0 g *                $");
	printf("\n$              * 6. * 1 MEDIUM APPLE      *  95 cal  * 0.5 g *                $");
	printf("\n$              * 7. * 2 KIWI FRUITS       *  84 cal  * 1.6 g *                $");
	printf("\n$              * 8. * 1 CUP CHERRIES      *  87 cal  * 1.5 g *                $");
	printf("\n$              * 9. * 1 CUP BLACK BARRIES *  62 cal  * 2.0 g *                $");
	printf("\n$              * 10.* 1 CUP RASPBARRIES   *  64 cal  * 1.5 g *                $");
	printf("\n$              *    *                     *          *       *                $");
    printf("\n$              ***********************************************                $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ************************************************               $");
	printf("\n$              *                                              *               $");
	printf("\n$              *         ## VEGETABLE DIET CHART ##           *               $");
	printf("\n$              *         --------------------------           *               $");
	printf("\n$              *                                              *               $");
	printf("\n$              ************************************************               $");
    printf("\n$              *S.NO*      VEGETABLES      * CALORIES *PROTEIN*               $");
    printf("\n$              ************************************************               $");
	printf("\n$              *    *                      *          *       *               $");
	printf("\n$              * 1. * 2/3 CUP CORN         * 100 cal  * 3.0 g *               $");
	printf("\n$              * 2. * 2/3 MIXED VEGETABLES *  60 cal  * 2.0 g *               $");
	printf("\n$              * 3. * 2   CUP LEAFY GREENS *  20 cal  * 1.0 g *               $");
	printf("\n$              * 4. * 1/2 CUP QUINAA       * 111 cal  * 4.0 g *               $");
	printf("\n$              * 5. * 6   CARROTS STICKS   *  50 cal  * 1.0 g *               $");
	printf("\n$              * 6. * 6   CELERY STICKS    *  18 cal  * 0.75g *               $");
	printf("\n$              * 7. * 1   POTATO           * 278 cal  * 8.0 g *               $");
	printf("\n$              * 8. * 1   SWEET POTATO     * 162 cal  * 4.0 g *               $");
    printf("\n$              *    *                      *          *       *               $");
    printf("\n$              ************************************************               $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$              ***************************************************            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              *         ## CEREALS DIET CHART ##                *            $");
	printf("\n$              *         --------------------------              *            $");
	printf("\n$              *                                                 *            $");
	printf("\n$              ***************************************************            $");
    printf("\n$              *S.NO*         CEREALS         * CALORIES *PROTEIN*            $");
    printf("\n$              ***************************************************            $");
	printf("\n$              *    *                         *          *       *            $");
	printf("\n$              * 1. * 1/2 CUP BLACK-EYED PEAS * 100 cal  * 13.5g *            $");
	printf("\n$              * 2. * 1/2 CUP GREEN PEAS      *  62 cal  * 4.0 g *            $");
	printf("\n$              * 3. * 1/2 CUP BLACK BEANS     * 113 cal  * 8.0 g *            $");
	printf("\n$              * 4. * 1/2 CUP KIDNEY BEANS    * 113 cal  * 8.0 g *            $");
	printf("\n$              * 5. * 1/2 CUP NAVY BEANS      * 127 cal  * 8.0 g *            $");
	printf("\n$              * 6. * 1/2 CUP ADZUKI BEANS    * 147 cal  * 9.0 g *            $");
	printf("\n$              * 7. * 1/2 CUP PINTO BEANS     * 122 cal  * 8.0 g *            $");
	printf("\n$              * 8. * 1/2 CUP GARBAZO BEANS   * 134 cal  * 7.5 g *            $");
    printf("\n$              *    *                         *          *       *            $");
    printf("\n$              ***************************************************            $");
    printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
	printf("\n$                                                                             $");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n                                                             ");
    printf("\n                                                                   ");
	printf("\n                                                                   ");
	printf("\n                                                                   ");
}
}

else
{
printf("\n                                                             ");
printf("\n                                                                   ");
printf("\n\n  >>I'm sorry, you entered something wrong please check !!");
printf("\n                                                             ");
printf("\n                                                                   ");
}
return 0;
}
