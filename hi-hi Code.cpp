#include <iostream>
#include <string>

using namespace std;

int strcmp_case_insensitive(string s1, string s2){
        string s1_new, s2_new;
        for(int i=0;i < s1.length();i++){
                s1_new += tolower(s1[i]);
        }
        for(int i=0;i < s2.length(); i++){
                s2_new += tolower(s2[i]);
        }

        if(s1.length() < s2.length()){
                return -1;
        }
        else if(s1.length() > s2.length()){
                return 1;
        }
        else{
                for(int i=0;i < s2.length(); i++){
                        if(s1_new[i] != s2_new[i]){
                                if(s1_new[i] < s2_new[i]){
                                        return -1;
                                }
                                else if (s1_new[i] > s2_new[i]) {
                                        return 1;
                                }

                        }
                }
                return 0;
        }
}
int main(){
        string s1, s2;
        cout << "Enter your first string." << endl;
        getline(cin,  s1);
        cout << "Enter your second string." << endl;
        getline(cin,  s2);
        cout << strcmp_case_insensitive(s1, s2)<< endl;
        return 0;
}
