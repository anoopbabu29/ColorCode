#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <iostream>
#include <string>
#include <map>

using namespace std;

class ColorCode {
    private:
        string ccFA = "Default";
        string ccFG = "Default";
        string ccBG = "Default";
        map<string, string> ccFADict = {
            {"Default", "0"},
            {"Bold", "1"},
            {"Dim", "2"},
            {"Underlined", "3"},
            {"Blink", "5"},
            {"Reverse", "7"},
            {"Hidden", "8"}
        };
        map<string, string> ccFGDict = {
            {"Default", "39"},
            {"Black", "30"},
            {"Red", "31"},
            {"Green", "32"},
            {"Yellow", "33"},
            {"Blue", "34"},
            {"Magenta", "35"},
            {"Cyan", "36"},
            {"White", "37"}
        };
        map<string, string> ccBGDict = {
            {"Default", "49"},
            {"Black", "40"},
            {"Red", "41"},
            {"Green", "42"},
            {"Yellow", "43"},
            {"Blue", "44"},
            {"Magenta", "45"},
            {"Cyan", "46"},
            {"White", "47"}
        };

    public:
        ColorCode(string ccFA, string ccFG, string ccBG)
        {
            this->ccFA = ccFA;
            this->ccFG = ccFG;
            this->ccBG = ccBG;
        }

        ColorCode()
        {
            this->ccFA = "Default";
            this->ccFG = "Default";
            this->ccBG = "Default";
        }


        void setColors(string FA, string FG, string BG){
            ccFA = FA;
            ccFG = FG;
            ccBG = BG;
        }   
        ColorCode operator<<(string text)
        {
            cout << "\033[" << ccFADict[ccFA] << ";" << ccFGDict[ccFG] << ";" << ccBGDict[ccBG] << "m" << text << "\033[0m";
            return *this;
        }
        ColorCode operator<<(int text)
        {
            cout << "\033[" << ccFADict[ccFA] << ";" << ccFGDict[ccFG] << ";" << ccBGDict[ccBG] << "m" << text << "\033[0m";        
            return *this;
        }
        ColorCode operator<<(double text)
        {
            cout << "\033[" << ccFADict[ccFA] << ";" << ccFGDict[ccFG] << ";" << ccBGDict[ccBG] << "m" << text << "\033[0m";
            return *this;
        }
        ColorCode operator<<(char text)
        {
            cout << "\033[" << ccFADict[ccFA] << ";" << ccFGDict[ccFG] << ";" << ccBGDict[ccBG] << "m" << text << "\033[0m";
            return *this;
        }
        ColorCode operator<<(short text)
        {
            cout << "\033[" << ccFADict[ccFA] << ";" << ccFGDict[ccFG] << ";" << ccBGDict[ccBG] << "m" << text << "\033[0m";
            return *this;
        }
        ColorCode operator<<(long text)
        {
            cout << "\033[" << ccFADict[ccFA] << ";" << ccFGDict[ccFG] << ";" << ccBGDict[ccBG] << "m" << text << "\033[0m";
            return *this;
        }
};

#endif