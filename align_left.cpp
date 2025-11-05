/****************************************************************************************/
/*                                    Pre-Processing                                    */
/****************************************************************************************/

#include <bits/stdc++.h>
#define Made_By_Karimskee ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PI 3.14159265359
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
string align_left(string s, ll n, char c = ' ');

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


    cout << align_left("Meow", 4, '_');


    cout << resetColor;
}

/****************************************************************************************/
/*                                 Functions Definitions                                */
/****************************************************************************************/

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

string align_left(string s, ll n, char c)
{
    if (n < 0)
    {
        cerr << "align_left ERROR: Alignment length can not be negative" << endl;
        return "";
    }

    while (s.size() < n)
        s.insert(s.end(), n - s.size(), c);

    while (s.size() > n)
        s.erase(s.begin() + n, s.end());

    return s;
}