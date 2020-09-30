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

     // -a + b
     string NegPosSmaller [12][3] = {
             // int / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
             // int / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
             // float / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
             // float / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""}
     };
     string NegPosBigger [12][3] = {
             // int / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
             // int / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
             // float / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
             // float / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""}
     };

     // (-a) - (-b)
     string NegNegSmaller [12][3] = {
             // int / int
                {"", "", ""},
                {"", "", ""},
                 {"", "", ""},
             // int / float
                 {"", "", ""},
                 {"", "", ""},
                 {"", "", ""},
             // float / int
                 {"", "", ""},
                 {"", "", ""},
                 {"", "", ""},
             // float / float
                 {"", "", ""},
                 {"", "", ""},
                 {"", "", ""}
     };
    string NegNegBigger [12][3] = {
            // int / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // int / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // float / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // float / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""}
    };

    //a - b
    string PosPosSmaller [12][3] = {
            // int / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // int / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // float / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // float / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""}
    };
    string PosPosBigger [12][3] = {
            // int / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // int / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // float / int
                {"", "", ""},
                {"", "", ""},
                {"", "", ""},
            // float / float
                {"", "", ""},
                {"", "", ""},
                {"", "", ""}
    };
};


#endif //CALCULATORREINFORED_SUBTRACTIONNUMBERS_H