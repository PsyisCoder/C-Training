#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

int main()
{
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    /*以下方式是只读，如果需要修改arr里边的值，可以使用for(auto & n:arr)，
    for循环的这种使用方式的内在实现实际上还是借助迭代器的，
    所以如果在循环的过程中对arr进行了增加和删除操作，
    那么程序将对出现意想不到的错误。*/
    for (auto n : arr)
    {
        std::cout << n << std::endl;
    }

    return 0;
}

//for_each的使用
#include<algorithm>
#include<iostream>
#include<vector>

void func(int n)
{
    std::cout << n << std::endl;
}

int main()
{
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);

    std::for_each(arr.begin(), arr.end(), func);

    return 0;
}