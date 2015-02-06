#ifndef SHARPEN_H
#define SHARPEN_H

#include "convolution.h"
#include "smooth.h"
#include "mathematic.h"
#define SHARPEN_LAP_0 0
#define SHARPEN_LAP_1 1
#define SHARPEN_LAP_2 2
#define SHARPEN_LAP_3 3

void LaplaceSharpen(double *src,double *dst,int width,int height,int mask_type,double c);
void UnsharpMasking(double *src,double *dst,int width,int height,int smooth_type,int smooth_mask_width,int smooth_mask_height,double gaussian_deta,double k);
void SobelSharpen(double *src,double *dst,int width,int height,double c);
void RobertSharpen(double *src,double *dst,int width,int height,double c);
#endif