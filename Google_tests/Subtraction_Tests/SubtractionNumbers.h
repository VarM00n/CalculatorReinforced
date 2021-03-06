//
// Created by VarMoon on 30.09.2020.
//

#ifndef CALCULATORREINFORED_SUBTRACTIONNUMBERS_H
#define CALCULATORREINFORED_SUBTRACTIONNUMBERS_H

#include <iostream>
#include "string"

using namespace std;

class SubtractionNumbers {
public:
    // a - (-b)
    string PosNegSmaller [12][3] = {
            // int / int
                {"842365", "-4128374519", "4129216884"},
                {"9871542", "-123468123590", "123477995132"},
                {"519347", "-123495625", "124014972"},
            // int / float
                {"67591", "-512637.432", "580228.432"},
                {"915572", "-258112346.11", "259027918.11"},
                {"91658235", "-1234842316.5126", "1326500551.5126"},
            // float / int
                {"816782.43", "-412348761235", "412349578017.43"},
                {"92641.8462", "-12349123674561", "12349123767202.8462"},
                {"915472.427", "-91236456582", "91237372054.427"},
            // float / float
                {"812346.29", "-12347871345.62", "12348683691.91"},
                {"891234.4287", "-12347871235.42", "12348762469.8487"},
                {"456184123.62", "-123498123857615234687125.24521", "123498123857615690871248.86521"}
    };
     string PosNegBigger [12][3] = {
             // int / int
                {"8523451236748465", "-529384561", "8523451766133026"},
                {"651283596123452394865", "-1237498612348", "651283597360951007213"},
                {"9812346765856324", "-12349621374", "9812359115477698"},
             // int / float
                {"786871234672348765", "-12348751.5234", "786871234684697516.5234"},
                {"78142346752345", "-2363245651234.43", "80505592403579.43"},
                {"871436512364351234",  "-6734525.346345", "871436512371085759.346345"},
             // float / int
                {"754263456.8213", "-678875647", "1433139103.8213"},
                {"75283485612534.62345", "-234623457673456", "309906943285990.62345"},
                {"7881234665.9123745", "-1234976", "7882469641.9123745"},
             // float / float
                {"87942364.523467", "-45232.432", "87987596.955467"},
                {"768827345678.534", "-5237456.823", "768832583135.357"},
                {"6523465.534", "-1324.5234", "6524790.0574"}
     };

     // (-a) - b just to check mechanism
     string NegPosSmaller [8][3] = {
             // int / int
                //Smaller
                    {"-652435", "523467125", "-524119560"},
                //Bigger
                    {"-45128374612358", "523476", "-45128375135834"},
             // int / float
                //Smaller
                    {"-5272345435", "523745786765239.535", "-523751059110674.535"},
                //Bigger
                    {"-5234556286345876", "53461253462362345312456236.553", "-53461253467596901598802112.553"},
             // float / int
                //Smaller
                    {"-5238457.523", "467324521661345", "-467324526899802.523"},
                //Bigger
                    {"-648787529345623456.65", "456234853457", "-648787985580476913.65"},
             // float / float
                //Smaller
                    {"-5872634586.45", "185634562234662346.567", "-185634568107296933.017"},
                //Bigger
                    {"-54678675237.514", "349857729834576263745.712", "-349857729889254938983.226"},
     };

     // (-a) - (-b)
     string NegNegSmaller [12][3] = {
            // int / int
                 {"-842365", "-4128374519", "4127532154"},
                 {"-6345672", "-12346254634523576", "12346254628177904"},
                 {"-3546738", "-34576234588282", "34576231041544"},
             // int / float
                 {"-7245145", "-2453722345.5234", "2446477200.5234"},
                 {"-7325621", "-34576468284567.373", "34576460958946.373"},
                 {"-82574356", "-35676828929.567384", "35594254573.567384"},
             // float / int
                 {"-737521436.673", "-456878875354683459", "456878874617162022.327"},
                 {"-84567.45", "-62465668356879", "62465668272311.55"},
                 {"-7457238.65745", "-6545748584575683", "6545748577118444.34255"},
             // float / float
                 {"-34572.65735678", "-6257346574568.675", "6257346539996.01764322"},
                 {"-824576.645", "-77245768.184", "76421191.539"},
                 {"-87325687.56", "-34572587825.5638", "34485262138.0038"}
     };
    string NegNegBigger [12][3] = {
            // int / int
                {"-6345624814257435", "-724562345", "-6345624089695090"},
                {"-1634534571325", "-132462345", "-1634402108980"},
                {"-8123456187456145", "-14325786", "-8123456173130359"},
            // int / float
                {"-15872365416253487", "-4635234.423", "-15872365411618252.577"},
                {"-6234763452", "-62345.123", "-6234701106.877"},
                {"-6138475123645", "-531462564.17352", "-6137943661080.82648"},
            // float / int
                {"-263348765123.782364", "-62534667", "-263286230456.782364"},
                {"-4182736571651823.523", "-523451768345", "-4182213119883478.523"},
                {"-5123874627546.646", "-526717", "-5123874100829.646"},
            // float / float
                {"-523461646537.26344", "-27623451.45", "-523434023085.81344"},
                {"-523457619026345.54", "-4891238746.52345", "-523452727787599.01655"},
                {"-891234555.52", "-523456.14", "-890711099.38"}
    };

    //a - b
    string PosPosSmaller [12][3] = {
            // int / int
                {"7475678", "7345675684", "-7338200006"},
                {"5735627", "29834572365765", "-29834566630138"},
                {"734568211", "47364738383733568356874", "-47364738383732833788663"},
            // int / float
                {"4745673", "267823465.5234", "-263077792.5234"},
                {"56445790", "29867230965236.22", "-29867174519446.22"},
                {"573457893", "42652236727.2745", "-42078778834.2745"},
            // float / int
                {"2734587.237234", "25347525777", "-25344791189.762766"},
                {"734888.6357", "543283467456748", "-543283466721859.3643"},
                {"7624363.2", "734575682", "-726951318.8"},
            // float / float
                {"6267288.27754", "2346745674568.276", "-2346739407279.99846"},
                {"25753456.63", "234587273267.2267", "-234561519810.5967"},
                {"2534726.24", "2354573456.83", "-2352038730.59"}
    };
    string PosPosBigger [12][3] = {
            // int / int
                {"45723457536823452457", "23456367357", "45723457513367085100"},
                {"54656373568746723", "243563567", "54656373325183156"},
                {"586457458456278", "4575674932", "586452882781346"},
            // int / float
                {"57686735687684567", "53684674634.3457", "57686682003009932.6543"},
                {"6345456845678634567", "34573456.2345", "6345456845644061110.7655"},
                {"9854567876534", "457354687.235", "9854110521846.765"},
            // float / int
                {"345745683456.6345", "473456568", "345272226888.6345"},
                {"457345687456347.62", "34573575674", "457311113880673.62"},
                {"76568756456788.3456", "34567845678", "76534188611110.3456"},
            // float / float
                {"52347824356.6345", "34536788.45", "52313287568.1845"},
                {"773745674567.37", "34577546747.6345", "739168127819.7355"},
                {"5234762725434567.66", "3456345778.61", "5234759269088789.05"}
    };
};


#endif //CALCULATORREINFORED_SUBTRACTIONNUMBERS_H
