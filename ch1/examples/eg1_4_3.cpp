/*Date    :2015/06/28 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using for loop: sum 1 to 10 incursive.
 *Link    :C++ Primer 5th(english version)
              @page 13.
 */

#include<iostream>

int main()
{
        int sum = 0;
        int val;
        while(std::cin >> val)
        {
                sum += val;
        }
        std::cout << "The sum of input values is " << sum << std::endl;
        return 0;
}
