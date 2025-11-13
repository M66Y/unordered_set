// 引入库
#include <iostream>
#include <unordered_set>
// #include <set>
#include <cmath>
#include <vector>
#include <algorithm>



using namespace std;

class setSolution
{
private:
    // 根据public部分的需求，设计相应的私有成员变量和私有成员函数
    unordered_set<int> mySet;

public:
    // 构造函数
    // 默认构造函数
    setSolution(){

    }

    // vector构造函数
    setSolution(const vector<int>& elements){
        for (const int& elem : elements){
            mySet.insert(elem);
        }
    }

    // unordered_set构造函数
    setSolution(const unordered_set<int>& otherSet){
        mySet = otherSet;
    }

    // 成员函数

    // 通过键盘添加元素
    void addElementsFromKeyboard(){

    }

    // 添加单个元素
    void addSingleElement(int element){
        mySet.insert(element);
    }
    
    // 获取集合
    static setSolution getSet(){
        setSolution newSet;
        newSet.addElementsFromKeyboard();
        return newSet;
    }

    vector<int> getVec(){
        vector<int> elements(mySet.begin(),mySet.end());
        sort(elements.begin(),elements.end());
        return elements;
    }

    void initializeSets(const vector<int>& elementsA, const vector<int>& elementsB, unordered_set<int>& setA, unordered_set<int>& setB){
        for (const int& elem : elementsA){
            setA.insert(elem);
        }
        for (const int& elem : elementsB){
            setB.insert(elem);
        }
    }










    // 求两个集合的交、并和差集

    // 求集合的幂集

    // 求集合的n元子集
};

int main()
{

    return 0;
}