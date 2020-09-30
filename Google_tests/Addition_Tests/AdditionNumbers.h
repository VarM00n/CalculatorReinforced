//
// Created by VarMoon on 28.09.2020.
//

#ifndef CALCULATORREINFORED_ADDITIONNUMBERS_H
#define CALCULATORREINFORED_ADDITIONNUMBERS_H

#include <iostream>
#include <string>

using namespace std;

class AdditionNumbers {
public:
    //a + (-b) minuend > subtrahend
    string PosNegBigger [12][3]{
        //int / int
            {"52345726","-234576","52111150"},
            {"91234665","-76123498","15111167"},
            {"61239488512354","-12347812735","61227140699619"},
        //int / float
            {"123479761234","-421347.512","123479339886.488"},
            {"8774123545152","-1234765612784.432","7539357932367.568"},
            {"98723456786","-1786234678.1","96937222107.9"},
        // float / int
            {"512347861234.34","-12347667192","500000194042.34"},
            {"23451234787.2384","-1234664231","22216570556.2384"},
            {"123456.234","-12341","111115.234"},
        // float / float
            {"1234641234.23","-1234785.23","1233406449.00"},
            {"3425787861.4231","-12346.23","3425775515.1931"},
            {"1234875.4233","-123467.12346","1111408.29984"}
    };

    //a + (-b) minuend < subtrahend
    string PosNegSmaller [12][3]{
        // int / int
            {"1234675", "-1234812345", "-1233577670"},
            {"1234676", "-1234878", "-202"},
            {"1234", "-12348765561", "-12348764327"},
        // int / float
            {"123456", "-123468.421", "-12.421"},
            {"412345345", "-1234768711.4", "-822423366.4"},
            {"4125364", "-12398653.52311", "-8273289.52311"},
        // float / int
            {"7563.45", "-565343567", "-565336003.55"},
            {"412346.1", "-123469814296", "-123469401949.9"},
            {"43423.412735", "-1246611", "-1203187.587265"},
        // float / float
            {"123456.23", "-12345742.42", "-12222286.19"},
            {"872345.2345", "-123476675234.41", "-123475802889.1755"},
            {"1234565.43265", "-231467812534.432", "-231466577968.99935"}
    };

    //(-a) + b already tested one test up so just to check if case in addition works
    string NegPosSmallerAndBigger [8][3]{
        //int / int
            //smaller
            {"-41236", "5234667", "5193431"},
            //bigger
            {"-41236543", "5234667", "-36001876"},
        //int / float
            //smaller
            {"-25436", "66345.234", "40909.234"},
            //bigger
            {"-12348651623", "23456.23", "-12348628166.77"},
        //float / int
            //smaller
            {"-54325234.14", "56475234651", "56420909416.86"},
            //bigger
            {"-52346564562.34", "2345679642", "-50000884920.34"},
        // float / float
            //smaller
            {"-7623456.523", "2345982364.2", "2338358907.677"},
            //bigger
            {"-12341523674.543", "234566.234", "-12341289108.309"}
    };

    // a + b firstAddend < secondAddend
    string PosPosSmaller [12][3]{
        // int / int
            {"143248", "58234661", "58377909"},
            {"823456", "234591234561", "234592058017"},
            {"769812834", "129384651239856", "129385421052690"},
        // int / float
            {"987162435512", "123476856123.495", "1110639291635.495"},
            {"4612873", "1234511429.42", "1239124302.42"},
            {"984726", "12345875.2", "13330601.2"},
        // float / int
            {"82435.52", "47291456", "47373891.52"},
            {"67417.523", "12346914624", "12346982041.523"},
            {"416239.5316", "91823485162350", "91823485578589.5316"},
        // float / float
            {"123598.51", "87534612354.76", "87534735953.27"},
            {"7912345.8462", "85364128041.42", "85372040387.2662"},
            {"9051665.89", "10598163246.4982", "10607214912.3882"}
    };

    // a + b firstAddend > secondAddend
    string PosPosBigger[12][3]{
            // int / int
            {"58234661", "143248", "58377909"},
            {"234591234561", "823456", "234592058017"},
            {"129384651239856", "769812834", "129385421052690"},
            // int / float
            {"47291456", "82435.52", "47373891.52"},
            {"12346914624", "67417.523", "12346982041.523"},
            {"91823485162350", "416239.5316", "91823485578589.5316"},
            // float / int
            {"123476856123.495", "987162435512", "1110639291635.495"},
            {"1234511429.42", "4612873", "1239124302.42"},
            {"12345875.2", "984726", "13330601.2"},
            // float / float
            {"87534612354.76", "123598.51", "87534735953.27"},
            {"85364128041.42", "7912345.8462", "85372040387.2662"},
            {"10598163246.4982", "9051665.89", "10607214912.3882"}
    };

    //(-a) + (-b)
    string NegNegSmallerAndBigger [8][3]{
            //int / int
            //smaller
            {"-234576", "-41234659", "-41469235"},
            //bigger
            {"-4162347891235", "-123469152", "-4162471360387"},
            //int / float
            //smaller
            {"-12348", "-5234576.53", "-5246924.53"},
            //bigger
            {"-416723451235", "-23512345.235", "-416746963580.235"},
            //float / int
            //smaller
            {"-51234.512", "-1774536", "-1825770.512"},
            //bigger
            {"-12346651234.26", "-1235871235", "-13582522469.26"},
            // float / float
            //smaller
            {"-12347671.52", "-12356781612.6", "-12369129284.12"},
            //bigger
            {"-5612351.63", "-126547.176", "-5738898.806"}
    };
};

#endif //CALCULATORREINFORED_ADDITIONNUMBERS_H