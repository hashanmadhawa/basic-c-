/*expected output
*
**
***
****
*****
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
for(int rownum=1;rownum<10;rownum++)
{
    for(int starnum=1;starnum<=rownum;starnum++)
    {
        cout<<"*";
    }
    cout<<endl;
}

}
