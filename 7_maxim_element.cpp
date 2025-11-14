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
int maxim_element(vector <int> vec);
ll maxim_element(vector <ll> vec);
char maxim_element(vector <char> vec);
string maxim_element(vector <string> vec);

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


    vector <int> vec0 = {1, 2, 3, -5, -1000, 10, 20};
    vector <ll> vec1 = {1, 2, 3, -5, -1000, 10, 20};
    vector <char> vec2 = {'a', 'C', '0', '?'};
    vector <string> vec3 = {"hehe", "hoho", "qjetlt"};
    vector <int> vec4 = {};
    vector <ll> vec5 = {};
    vector <char> vec6 = {};
    vector <string> vec7 = {};

    cout << maxim_element(vec0) << endl;
    cout << maxim_element(vec1) << endl;
    cout << maxim_element(vec2) << endl;
    cout << maxim_element(vec3) << endl;
    cout << maxim_element(vec4) << endl;
    cout << maxim_element(vec5) << endl;
    cout << maxim_element(vec6) << endl;
    cout << maxim_element(vec7) << endl;


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

int maxim_element(vector <int> vec)
{
    int maxim;
    
    if (vec.size())
        maxim = vec[0];
    else
        maxim = INT_MAX;

    for (auto it : vec)
    {
        if (it>maxim)
            maxim = it;
    }

    return maxim;
}

ll maxim_element(vector <ll> vec)
{
    ll maxim;
    
    if (vec.size())
        maxim = vec[0];
    else
        maxim = LLONG_MAX;

    for (auto it : vec)
    {
        if (it>maxim)
            maxim = it;
    }

    return maxim;
}

char maxim_element(vector <char> vec)
{
    char maxim;
    
    if (vec.size())
        maxim = vec[0];
    else
        maxim = 0;

    for (auto it : vec)
    {
        if (it>maxim)
            maxim = it;
    }

    return maxim;
}

string maxim_element(vector <string> vec)
{
    string maxim;
    
    if (vec.size())
        maxim = vec[0];
    else
        maxim = "";

    for (auto it : vec)
    {
        if (it>maxim)
            maxim = it;
    }

    return maxim;
}