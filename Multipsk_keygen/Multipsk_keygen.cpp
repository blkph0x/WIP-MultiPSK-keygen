// Multipsk_keygen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <tchar.h> 


using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    char input[100];
    char testing[64]{};
    char result[] =
    {
      0x13, 0x01, 0x5C, 0x3F, 0x43, 0x38, 0x26, 0x2B, 0x46, 0x25,   //This is the list of chars that are used to xor the serial 
      0x2C, 0x05, 0x10, 0x2F, 0x04, 0x51, 0x0A, 0x37, 0x3A, 0x09,
      0x19, 0x2D, 0x11, 0x0F, 0x49, 0x32, 0x31, 0x33, 0x24, 0x15,
      0x64, 0x08, 0x57, 0x35, 0x63, 0x4B, 0x1D, 0x3C, 0x28, 0x06,
      0x4D, 0x30, 0x54, 0x0C, 0x52, 0x42, 0x5A, 0x56, 0x23, 0x3D,
      0x14, 0x29, 0x58, 0x0E, 0x3E, 0x0D, 0x1F, 0x36, 0x3B, 0x53,
      0x0B, 0x17, 0x27, 0x4E, 0x4C, 0x62, 0x1B, 0x39, 0x1A, 0x5E,
      0x03, 0x07, 0x44, 0x5D, 0x47, 0x20, 0x60, 0x1C, 0x21, 0x1E,
      0x5B, 0x40, 0x2E, 0x50, 0x22, 0x2A, 0x45, 0x02, 0x48, 0x16,
      0x4F, 0x59, 0x18, 0x61, 0x55, 0x5F, 0x4A, 0x41, 0x34, 0x12
    };
    
    char ida_chars[] =
    {
      0x13, 0x01, 0x5C, 0x3F, 0x43, 0x38, 0x26, 0x2B, 0x46, 0x25,   //This is the list of chars that are used to xor the serial 
      0x2C, 0x05, 0x10, 0x2F, 0x04, 0x51, 0x0A, 0x37, 0x3A, 0x09,
      0x19, 0x2D, 0x11, 0x0F, 0x49, 0x32, 0x31, 0x33, 0x24, 0x15,
      0x64, 0x08, 0x57, 0x35, 0x63, 0x4B, 0x1D, 0x3C, 0x28, 0x06,
      0x4D, 0x30, 0x54, 0x0C, 0x52, 0x42, 0x5A, 0x56, 0x23, 0x3D,
      0x14, 0x29, 0x58, 0x0E, 0x3E, 0x0D, 0x1F, 0x36, 0x3B, 0x53,
      0x0B, 0x17, 0x27, 0x4E, 0x4C, 0x62, 0x1B, 0x39, 0x1A, 0x5E,
      0x03, 0x07, 0x44, 0x5D, 0x47, 0x20, 0x60, 0x1C, 0x21, 0x1E,
      0x5B, 0x40, 0x2E, 0x50, 0x22, 0x2A, 0x45, 0x02, 0x48, 0x16,
      0x4F, 0x59, 0x18, 0x61, 0x55, 0x5F, 0x4A, 0x41, 0x34, 0x12
    };
    char ida_charsa[] =
    {
      0x13, 0x01, 0x5C, 0x3F, 0x43, 0x38, 0x26, 0x2B, 0x46, 0x25,   //This is the list of chars that are used to xor the serial 
      0x2C, 0x05, 0x10, 0x2F, 0x04, 0x51, 0x0A, 0x37, 0x3A, 0x09,
      0x19, 0x2D, 0x11, 0x0F, 0x49, 0x32, 0x31, 0x33, 0x24, 0x15,
      0x64, 0x08, 0x57, 0x35, 0x63, 0x4B, 0x1D, 0x3C, 0x28, 0x06,
      0x4D, 0x30, 0x54, 0x0C, 0x52, 0x42, 0x5A, 0x56, 0x23, 0x3D,
      0x14, 0x29, 0x58, 0x0E, 0x3E, 0x0D, 0x1F, 0x36, 0x3B, 0x53,
      0x0B, 0x17, 0x27, 0x4E, 0x4C, 0x62, 0x1B, 0x39, 0x1A, 0x5E,
      0x03, 0x07, 0x44, 0x5D, 0x47, 0x20, 0x60, 0x1C, 0x21, 0x1E,
      0x5B, 0x40, 0x2E, 0x50, 0x22, 0x2A, 0x45, 0x02, 0x48, 0x16,
      0x4F, 0x59, 0x18, 0x61, 0x55, 0x5F, 0x4A, 0x41, 0x34, 0x12
    };
    
    //probably a cleaner way todo this but mahhh it is what it is it works 
    // we need to build a string with our username eg. Blkph0x at the offsets of the char list NO we dont but we did it only moves 4 bytes at offsets 19 01 92 63 of string
    // LBCDEFGHIJKLMNOPQRBTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJPLMNOPQRSTUVWXYZABCDEFGHIJKLMKOPQRSTUS
    //witch will then use the chars at the given offsets in order of 18 92 63 01 for some calculations
    //
    /*
    todo just reverse the math its just addion multiply and divide  
    
    
    */
    std::cout << "Enter firstname lastname (callsign) location :";  
    cin.getline(input, 100); //this is where we enter a string to be used as the serial

    int test = strlen(input);
    ofstream output_file("USER.cod", ios::binary); //open USER.cod for writing to
    while (a <= test) {
       // std::cout << input[int(ida_chars[a]) - 1]; // This is used to build a usefull string as the program uses the char list as an int to select chars to build a 
        ida_charsa[int(ida_chars[a]) - 1] = input[a];                                      //new string so we have found the usefull ofsets rest is junk this happens twice
        std::cout << ida_charsa[a];
        a++;
    }
   // printf(ida_charsa);
    a = 0;
    while (a <= test) {
        // std::cout << input[int(ida_chars[a]) - 1]; // This is used to build a usefull string as the program uses the char list as an int to select chars to build a 
        ida_charsa[int(ida_chars[a]) - 1] = input[a];                                      //new string so we have found the usefull ofsets rest is junk this happens twice
        std::cout << ida_charsa[a];
        a++;
    }
    // printf(ida_charsa);
    a = 0;
    while (a <= test) {
       
        
        //this runs thugh our 100 long string and xors the values
        char endresult = ida_chars[a] ^= ida_charsa[a]; // this is the xor operation
        //prints the serial to be placed in USER.cod
      //  std::cout << endresult;
        output_file << hex <<  endresult ; //output the value to USER.cod file
        
        b++;
        a++; // increments the values 
        while (a >= test && a < 100)
        {
            
            char endresult1 = ida_charsa[a];
            output_file << hex << endresult1; //output the value to USER.cod file
          //  std::cout << endresult1;
            
            b++;
            a++;
            
            
        }
      
    }
    
    //output_file << endl; //add endline char
    output_file.close(); //close file copy USER.cod to your multipsk folder
    //system("pause");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
