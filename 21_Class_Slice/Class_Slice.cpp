//
// Created by tassiio on 24.10.2021.
//

#include <cstring>
#include "Class_Slice.h"


Class_Slice::Class_Slice(int Length_of_slice) {
    S_Slice_Length = Length_of_slice;
    S_Array = new int[S_Slice_Length];
    S_Slice_Current_Item = 0;
    S_Start_Index = 0;
    S_Stop_Index = 0;
    S_Step = 1;
}

void Class_Slice::S_Push(int item) {
    assert(S_Slice_Current_Item < S_Slice_Length);
    S_Array[S_Slice_Current_Item] =  item;
    S_Slice_Current_Item++;


//    for( int p = 0; p < S_Slice_Length; p++)
//        std::cout << S_Array[p] << std::endl;
}

void Class_Slice::S_Parse(std::string Intervals) {

    std::string S_String = std::move(Intervals);
    unsigned int Length_of_S_String = S_String.length();

    S_Start_Index = 0;
    S_Stop_Index = S_Slice_Length - 1;
    S_Step = 1;

    const char Delimeter = ':';

    if(std::count(S_String.begin(), S_String.end(), Delimeter) == 2) {

        std::string S_String_Start_Index;
        std::string S_String_Stop_Index;
        std::string S_String_Step;
        int i = 0;

        while(S_String[i] != ':') {
            S_String_Start_Index += S_String[i];
            i++;
        }

        i++;

        while (S_String[i] != ':') {
            S_String_Stop_Index += S_String[i];
            i++;
        }

        i++;

        while (i < S_String.length()) {
            S_String_Step += S_String[i];
            i++;
        }

        std::string S_String_Start_Index_Tmp;
        if(!S_String_Start_Index.empty()) {
            if(S_String_Start_Index.find('-') == 0) {
                int p = 1;

                while(p < S_String_Start_Index.length()) {
                    S_String_Start_Index_Tmp += S_String_Start_Index[p];
                    p++;
                }

                S_Start_Index = std::stoi(S_String_Start_Index_Tmp);
                S_Start_Index = (-1) * S_Start_Index;
            }
            else {
                S_Start_Index = std::stoi(S_String_Start_Index);
            }
        }

        std::string S_String_Stop_Index_Tmp;
        if(!S_String_Stop_Index.empty()) {
            if(S_String_Stop_Index.find('-') == 0) {
                int t = 1;

                while (t < S_String_Stop_Index.length()) {
                    S_String_Stop_Index_Tmp += S_String_Stop_Index[t];
                    t++;
                }

                S_Stop_Index = std::stoi(S_String_Stop_Index_Tmp);
                S_Stop_Index = (-1) * S_Stop_Index;
                //std::cout << S_Stop_Index << std::endl;
            }
            else {
                S_Stop_Index = std::stoi(S_String_Stop_Index);
            }
        }

        std::string S_String_Step_Tmp;
        if(!S_String_Step.empty()) {
            if(S_String_Step.find('-') == 0) {
                int l = 1;

                while(l < S_String_Step.length()) {
                    S_String_Step_Tmp += S_String_Step[l];
                    l++;
                }
                S_Step = std::stoi(S_String_Step_Tmp);
                S_Step = (-1) * S_Step;
            }
            else {
                S_Step = std::stoi(S_String_Step);
            }
        }

        if(S_Start_Index < 0) {
            S_Start_Index = S_Slice_Length + S_Start_Index;
        }

        if(S_Stop_Index < 0) {
            S_Stop_Index = S_Slice_Length + S_Stop_Index;
        }

//        std::cout << "Type_of_Start: " << typeid(S_Start_Index).name() << std::endl;
//        std::cout << "Type of Stop: " << typeid(S_Stop_Index).name() << std::endl;
//        std::cout << "Type of Step: " << typeid(S_Step).name() << std::endl;

        if(S_Step > 0) {
            if((S_Stop_Index != S_Slice_Length-1) || ((!S_String_Stop_Index.empty()) && (S_Stop_Index == S_Slice_Length-1))) {

                unsigned int New_Length = (S_Stop_Index-1-S_Start_Index)/S_Step + 1;
                int *New_Array = new int[New_Length];

                for(int t = 0; t < New_Length; t++) {
                    New_Array[t] = S_Array[S_Start_Index + S_Step*t];
                }

                std::cout << "Slice: " << std::endl;
                for(int t = 0; t < New_Length; t++) {
                    std::cout << New_Array[t] << " ";
                }
                std::cout << std::endl;

                delete []New_Array;

            }
            if((S_String_Stop_Index.empty()) && (S_Stop_Index == S_Slice_Length-1)) {
                unsigned int New_Length = (S_Stop_Index-S_Start_Index)/S_Step + 1;
                int *New_Array = new int[New_Length];

                for(int t = 0; t < New_Length; t++) {
                    New_Array[t] = S_Array[S_Start_Index + S_Step*t];
                }

                std::cout << "Slice: " << std::endl;
                for(int t = 0; t < New_Length; t++) {
                    std::cout << New_Array[t] << " ";
                }
                std::cout << std::endl;

                delete []New_Array;
            }
        }

        else {
            if((S_String_Stop_Index.empty()) && (S_String_Start_Index.empty())) {

                unsigned int New_Length = (S_Stop_Index-S_Start_Index)/abs(S_Step) + 1;
                int *New_Array = new int[New_Length];

                for(int t = 0; t < New_Length; t++) {
                    New_Array[t] = S_Array[S_Stop_Index - abs(S_Step)*t];
                }

                std::cout << "Slice: " << std::endl;
                for(int t = 0; t < New_Length; t++) {
                    std::cout << New_Array[t] << " ";
                }
                std::cout << std::endl;

                delete []New_Array;
            }

            if((S_String_Stop_Index.empty()) && (S_Stop_Index == S_Slice_Length-1) && (!S_String_Start_Index.empty())) {
                S_Stop_Index = 0;
                std::swap(S_Stop_Index, S_Start_Index);
                unsigned int New_Length = (S_Stop_Index-S_Start_Index)/abs(S_Step) + 1;

                int *New_Array = new int[New_Length];

                for(int t = 0; t < New_Length; t++) {
                    New_Array[t] = S_Array[S_Stop_Index - abs(S_Step)*t];
                }

                std::cout << "Slice: " << std::endl;
                for(int t = 0; t < New_Length; t++) {
                    std::cout << New_Array[t] << " ";
                }
                std::cout << std::endl;

                delete []New_Array;
            }

            if((S_String_Start_Index.empty()) && (!S_String_Stop_Index.empty())) {
                S_Start_Index = S_Slice_Length-1;
                std::swap(S_Stop_Index, S_Start_Index);
                unsigned int New_Length = (S_Stop_Index-S_Start_Index-1)/abs(S_Step) + 1;
                //std::cout << New_Length << std::endl;
                int *New_Array = new int[New_Length];

                for(int t = 0; t < New_Length; t++) {
                    New_Array[t] = S_Array[S_Stop_Index - abs(S_Step)*t];
                }

                std::cout << "Slice: " << std::endl;
                for(int t = 0; t < New_Length; t++) {
                    std::cout << New_Array[t] << " ";
                }
                std::cout << std::endl;

                delete []New_Array;
            }

            if(!(S_String_Stop_Index.empty()) && (!S_String_Start_Index.empty())) {
                std::swap(S_Stop_Index, S_Start_Index);
                //std::cout << S_Stop_Index << " " << S_Start_Index << std::endl;
                unsigned int New_Length = (S_Stop_Index-S_Start_Index-1)/abs(S_Step) + 1;
                //std::cout << New_Length << std::endl;
                int *New_Array = new int[New_Length];

                for(int t = 0; t < New_Length; t++) {
                    New_Array[t] = S_Array[S_Stop_Index - abs(S_Step)*t];
                }

                std::cout << "Slice: " << std::endl;
                for(int t = 0; t < New_Length; t++) {
                    std::cout << New_Array[t] << " ";
                }
                std::cout << std::endl;

                delete []New_Array;
            }
        }
    }

    if(std::count(S_String.begin(), S_String.end(), Delimeter) == 1) {

        std::string S_String_Step_c;
        int i = 0;
        //std::cout << "Type before " << typeid(S_String_Step_c).name() << std::endl;
        while(i < Length_of_S_String) {
            if (S_String[i] == Delimeter) {
                i++;
            }
            else {
                S_String_Step_c += S_String[i];
                i++;
            }
        }
        //std::cout << "Type " << typeid(S_String_Step_c).name() << std::endl;
        if (!S_String_Step_c.empty()) {
            S_Step = std::stoi(S_String_Step_c);
        }
//        std::cout << typeid(S_Step).name() << std::endl;
//        std::cout << S_Step << std::endl;
//        std::cout << S_Start_Index << std::endl;
//        std::cout << S_Stop_Index << std::endl;

        if(S_Step > 0) {
            unsigned int New_Length = (S_Stop_Index-S_Start_Index)/S_Step + 1;
            int *New_Array = new int[New_Length];

            for(int t = 0; t < New_Length; t++) {
                New_Array[t] = S_Array[S_Start_Index + S_Step*t];
            }

            std::cout << "Slice: " << std::endl;
            for(int t = 0; t < New_Length; t++) {
                std::cout << New_Array[t] << " ";
            }
            std::cout << std::endl;

            delete []New_Array;
        }

        if(S_Step < 0) {
            unsigned int New_Length = S_Slice_Length - abs(S_Step);
            int *New_Array = new int[New_Length];

            for(int t = 0; t < New_Length; t++) {
                New_Array[t] = S_Array[t];
            }

            std::cout << "Slice: " << std::endl;
            for(int t = 0; t < New_Length; t++) {
                std::cout << New_Array[t] << " ";
            }
            std::cout << std::endl;

            delete []New_Array;
        }
    }
    if(std::count(S_String.begin(), S_String.end(), Delimeter) == 0) {
        std::string S_String_Start_Index;
        S_String_Start_Index = S_String;
        unsigned int New_Length = 1;
        int *New_Array = new int[New_Length];

        if (!S_String_Start_Index.empty()) {
            S_Start_Index = std::stoi(S_String_Start_Index);
        }

        if(S_Start_Index > 0) {
            for(int t = 0; t < New_Length; t++) {
                New_Array[t] = S_Array[S_Start_Index];
            }

            std::cout << "Slice: " << std::endl;
            for(int t = 0; t < New_Length; t++) {
                std::cout << New_Array[t] << " ";
            }
            std::cout << std::endl;
        }

        if(S_Start_Index < 0) {
            for(int t = 0; t < New_Length; t++) {
                New_Array[t] = S_Array[S_Slice_Length - abs(S_Start_Index)];
            }

            std::cout << "Slice: " << std::endl;
            for(int t = 0; t < New_Length; t++) {
                std::cout << New_Array[t] << " ";
            }
            std::cout << std::endl;

        }
        delete[] New_Array;
    }
}
Class_Slice::~Class_Slice() {

    delete []S_Array;

}
