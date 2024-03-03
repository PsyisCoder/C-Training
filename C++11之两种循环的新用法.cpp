#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

int main()
{
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    /*���·�ʽ��ֻ���������Ҫ�޸�arr��ߵ�ֵ������ʹ��for(auto & n:arr)��
    forѭ��������ʹ�÷�ʽ������ʵ��ʵ���ϻ��ǽ����������ģ�
    ���������ѭ���Ĺ����ж�arr���������Ӻ�ɾ��������
    ��ô���򽫶Գ������벻���Ĵ���*/
    for (auto n : arr)
    {
        std::cout << n << std::endl;
    }

    return 0;
}

//for_each��ʹ��
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