
#include <iostream>
#include<vector>
using namespace std;

def birthdayCakeCandles(candles):
    count=0
    maximumheight=max(candles)
    for i in candles:
        if i==maximumheight:
            count+=1
    return count
