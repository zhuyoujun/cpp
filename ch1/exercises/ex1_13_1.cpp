/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using for loop: rewrite ex1_9.
 *Link    :C++ Primer 5th(english version)
              @page 11, ex1_9.
 */

#include<iostream>

int main()
{
        int sum = 0, val = 50;
        for (int val = 50; val <= 100; val++)
        {
            sum += val;
        }
        std::cout << "The sum of 50 to 100 incursive is " << sum << std::endl; 
        return 0;
}
