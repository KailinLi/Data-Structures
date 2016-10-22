//
//  Pow.h
//  Data-Structures
//
//  Created by 李恺林 on 2016/10/22.
//  Copyright © 2016年 李恺林. All rights reserved.
//

#ifndef Pow_h
#define Pow_h


#endif /* Pow_h */

long long Pow (long long x, unsigned N)
{
    if (N == 0) {
        return 1;
    }
    if (N == 1) {
        return x;
    }
    if (!(x % 2)) {
        return Pow(x * x, N / 2);
    }
    else {
        return Pow(x * x, N / 2) * x;
    }
}
