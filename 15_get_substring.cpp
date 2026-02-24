/****************************************************************************************/
/*                                    Pre-Processing                                    */
/****************************************************************************************/

#include <bits/stdc++.h>
#define Made_By_Karimskee ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PI acos(-1.0)
#define resetColor "\033[0m\n"  // Reset terminal color
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

/****************************************************************************************/
/*                                Functions Declaration                                 */
/****************************************************************************************/

void space(ll n);   // Print n blank lines (for better program interface purpose)
void clear();   // Clears terminal
string color(const string& hex);   // ANSI terminal color set
string get_substring(string, ll, ll, bool = false);

/****************************************************************************************/
/*        ██╗  ██╗ █████╗ ██████╗ ██╗███╗   ███╗███████╗██╗  ██╗███████╗███████╗        */
/*        ██║ ██╔╝██╔══██╗██╔══██╗██║████╗ ████║██╔════╝██║ ██╔╝██╔════╝██╔════╝        */
/*        █████╔╝ ███████║██████╔╝██║██╔████╔██║███████╗█████╔╝ █████╗  █████╗          */
/*        ██╔═██╗ ██╔══██║██╔══██╗██║██║╚██╔╝██║╚════██║██╔═██╗ ██╔══╝  ██╔══╝          */
/*        ██║  ██╗██║  ██║██║  ██║██║██║ ╚═╝ ██║███████║██║  ██╗███████╗███████╗        */
/*        ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝        */
/****************************************************************************************/

/**
 * 
 */

int main()
{
    // UI
    clear();
    cout << color("#00FF00");
    space(100);


    cout << get_substring("Karimskee", 2, 4) << endl;
    cout << get_substring("Karimskee", 2, 10) << endl;
    cout << get_substring("Karimskee", -5, 5) << endl;
    cout << get_substring("Karimskee", -5, 20) << endl;
    cout << get_substring("Not Karimskee", 2, 7) << endl;
    cout << get_substring("Not Karimskee", 2, 7) << endl;
    cout << get_substring("Not Karimskee", 0, 100) << endl;


    cout << resetColor;
}

/****************************************************************************************/
/*                                 Functions Definitions                                */
/****************************************************************************************/

string get_substring(string s, ll start, ll end, bool byLength) {
    string substring = "";

    if (start < 0)
        start = 0;

    if (end >= s.size())
        end = s.size() - 1;

    if (byLength)
        end = start + end - 1;

    for (int i = start; i <= end; i++)
        substring += s[i];

    return substring;
}

void space(ll n)
{
    for (int i = 0; i < n; i++)
        cout << endl;
}

void clear()
{
    const char* wslEnv = getenv("WSLENV");

    if (wslEnv)
        system("clear");
    else
        system("cls");
}

string color(const string& hex)
{
    if (hex[0] != '#' || hex.length() != 7)
        return "";  // Invalid hex format
    
    // Parse hex color (remove # and convert to integer)
    string hexValue = hex.substr(1);
    int rgb = stol(hexValue, nullptr, 16);
    
    int r = (rgb >> 16) & 0xFF;
    int g = (rgb >> 8) & 0xFF;
    int b = rgb & 0xFF;

    ostringstream ansi;
    ansi << "\033[38;2;" << r << ";" << g << ";" << b << "m";
    return ansi.str();
}