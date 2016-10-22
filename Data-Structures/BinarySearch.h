//
//  BinarySearch.h
//  Data-Structures
//
//  Created by 李恺林 on 2016/10/22.
//  Copyright © 2016年 李恺林. All rights reserved.
//

#ifndef BinarySearch_h
#define BinarySearch_h


#endif /* BinarySearch_h */

int BinarySearch (const int num[], int x, int N)
{
    int Low, Mid, High;
    Low = 0;
    High = N - 1;
    while (Low <= High) {
        Mid = (Low + High) / 2;
        if (num[Mid] < x) {
            Low = Mid + 1;
        }
        else if (num[Mid] > x) {
            High = Mid - 1;
        }
        else {
            return Mid;
        }
    }
    return 0;
}
