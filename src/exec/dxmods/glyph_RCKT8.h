/***********************************************************************/
/* Open Visualization Data Explorer                                    */
/* (C) Copyright IBM Corp. 1989,1999                                   */
/* ALL RIGHTS RESERVED                                                 */
/* This code licensed under the                                        */
/*    "IBM PUBLIC LICENSE - Open Visualization Data Explorer"          */
/***********************************************************************/
#define RCKT8PTS 40 
#define RCKT8TRS 30 
static Point points[RCKT8PTS] = {
 {  0.5000000000F,      0.0000000000F,      0.0000000000F },
 {  0.5000000000F,      0.8500000238F,      0.0000000000F },
 {  0.3535533845F,      0.0000000000F,      0.3535533845F },
 {  0.3535533845F,      0.8500000238F,      0.3535533845F },
 { -0.0000000219F,      0.0000000000F,      0.5000000000F },
 { -0.0000000219F,      0.8500000238F,      0.5000000000F },
 { -0.3535533845F,      0.0000000000F,      0.3535533845F },
 { -0.3535533845F,      0.8500000238F,      0.3535533845F },
 { -0.5000000000F,      0.0000000000F,     -0.0000000437F },
 { -0.5000000000F,      0.8500000238F,     -0.0000000437F },
 { -0.3535533249F,      0.0000000000F,     -0.3535534441F },
 { -0.3535533249F,      0.8500000238F,     -0.3535534441F },
 {  0.0000000060F,      0.0000000000F,     -0.5000000000F },
 {  0.0000000060F,      0.8500000238F,     -0.5000000000F },
 {  0.3535535038F,      0.0000000000F,     -0.3535532653F },
 {  0.3535535038F,      0.8500000238F,     -0.3535532653F },
 {  0.8333334923F,      0.7500000000F,      0.0000000000F },
 {  0.5892557502F,      0.7500000000F,      0.5892557502F },
 { -0.0000000364F,      0.7500000000F,      0.8333334923F },
 { -0.5892557502F,      0.7500000000F,      0.5892557502F },
 { -0.8333334923F,      0.7500000000F,     -0.0000000729F },
 { -0.5892556906F,      0.7500000000F,     -0.5892558694F },
 {  0.0000000099F,      0.7500000000F,     -0.8333334923F },
 {  0.5892559886F,      0.7500000000F,     -0.5892555714F },
 {  0.0000000000F,      1.0000000000F,      0.0000000000F },
 {  0.0000000000F,      1.0000000000F,      0.0000000000F },
 {  0.0000000000F,      1.0000000000F,      0.0000000000F },
 {  0.0000000000F,      1.0000000000F,      0.0000000000F },
 {  0.0000000000F,      1.0000000000F,      0.0000000000F },
 {  0.0000000000F,      1.0000000000F,      0.0000000000F },
 {  0.0000000000F,      1.0000000000F,      0.0000000000F },
 {  0.0000000000F,      1.0000000000F,      0.0000000000F },
 {  0.5000000000F,      0.0000000000F,      0.0000000000F },
 {  0.3535533845F,      0.0000000000F,      0.3535533845F },
 { -0.0000000219F,      0.0000000000F,      0.5000000000F },
 { -0.3535533845F,      0.0000000000F,      0.3535533845F },
 { -0.5000000000F,      0.0000000000F,     -0.0000000437F },
 { -0.3535533249F,      0.0000000000F,     -0.3535534441F },
 {  0.0000000060F,      0.0000000000F,     -0.5000000000F },
 {  0.3535535038F,      0.0000000000F,     -0.3535532653F }
};

#include <dxconfig.h>


static Point normals[RCKT8PTS] = {
 {  1.0000000000F,      0.0000000000F,      0.0000000000F },
 {  1.0000000000F,      0.0000000000F,      0.0000000000F },
 {  0.7071067691F,      0.0000000000F,      0.7071067691F },
 {  0.7071067691F,      0.0000000000F,      0.7071067691F },
 { -0.0000000437F,      0.0000000000F,      1.0000000000F },
 { -0.0000000437F,      0.0000000000F,      1.0000000000F },
 { -0.7071067691F,      0.0000000000F,      0.7071067691F },
 { -0.7071067691F,      0.0000000000F,      0.7071067691F },
 { -1.0000000000F,      0.0000000000F,     -0.0000000874F },
 { -1.0000000000F,      0.0000000000F,     -0.0000000874F },
 { -0.7071066499F,      0.0000000000F,     -0.7071068883F },
 { -0.7071066499F,      0.0000000000F,     -0.7071068883F },
 {  0.0000000119F,      0.0000000000F,     -1.0000000000F },
 {  0.0000000119F,      0.0000000000F,     -1.0000000000F },
 {  0.7071070075F,      0.0000000000F,     -0.7071065307F },
 {  0.7071070075F,      0.0000000000F,     -0.7071065307F },
 {  0.4830437303F,      0.8755962253F,      0.0000000000F },
 {  0.3415634930F,      0.8755962253F,      0.3415634930F },
 { -0.0000000211F,      0.8755962253F,      0.4830437303F },
 { -0.3415634930F,      0.8755962253F,      0.3415634930F },
 { -0.4830437303F,      0.8755962253F,     -0.0000000422F },
 { -0.3415634632F,      0.8755962253F,     -0.3415635526F },
 {  0.0000000058F,      0.8755962253F,     -0.4830437303F },
 {  0.3415636420F,      0.8755962253F,     -0.3415634036F },
 {  0.4830437303F,      0.8755962253F,      0.0000000000F },
 {  0.3415634930F,      0.8755962253F,      0.3415634930F },
 { -0.0000000211F,      0.8755962253F,      0.4830437303F },
 { -0.3415634930F,      0.8755962253F,      0.3415634930F },
 { -0.4830437303F,      0.8755962253F,     -0.0000000422F },
 { -0.3415634632F,      0.8755962253F,     -0.3415635526F },
 {  0.0000000058F,      0.8755962253F,     -0.4830437303F },
 {  0.3415636420F,      0.8755962253F,     -0.3415634036F },
 {  0.0000000000F,     -1.0000000000F,      0.0000000000F },
 {  0.0000000000F,     -1.0000000000F,      0.0000000000F },
 {  0.0000000000F,     -1.0000000000F,      0.0000000000F },
 {  0.0000000000F,     -1.0000000000F,      0.0000000000F },
 {  0.0000000000F,     -1.0000000000F,      0.0000000000F },
 {  0.0000000000F,     -1.0000000000F,      0.0000000000F },
 {  0.0000000000F,     -1.0000000000F,      0.0000000000F },
 {  0.0000000000F,     -1.0000000000F,      0.0000000000F }
};
 
static Triangle triangles[] = {
 {   0,       1,       2 },
 {   2,       1,       3 },
 {   2,       3,       4 },
 {   4,       3,       5 },
 {   4,       5,       6 },
 {   6,       5,       7 },
 {   6,       7,       8 },
 {   8,       7,       9 },
 {   8,       9,      10 },
 {  10,       9,      11 },
 {  10,      11,      12 },
 {  12,      11,      13 },
 {  12,      13,      14 },
 {  14,      13,      15 },
 {  14,      15,       0 },
 {   0,      15,       1 },
 {  16,      24,      17 },
 {  17,      25,      18 },
 {  18,      26,      19 },
 {  19,      27,      20 },
 {  20,      28,      21 },
 {  21,      29,      22 },
 {  22,      30,      23 },
 {  23,      31,      16 },
 {  32,      33,      34 },
 {  32,      34,      35 },
 {  32,      35,      36 },
 {  32,      36,      37 },
 {  32,      37,      38 },
 {  32,      38,      39 }
};
