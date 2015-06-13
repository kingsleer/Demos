//
// PieLayer.h
// MagicPie
//
// Copyright (c) 2013 Alexandr Graschenkov ( https://github.com/Sk0rpion )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface PieLayer1 : CALayer

//@property (nonatomic, strong, readonly) NSArray* values;

- (void)insertValues:(NSArray *)array atIndexes:(NSArray*)indexes animated:(BOOL)animated;




@property (nonatomic, assign) CGFloat percentage;
@property (nonatomic, strong) UIColor *corlor;
@property (nonatomic, assign) CGPoint pieCenter1;
@property (nonatomic, assign) CGPoint pieCenter2;
@property (nonatomic, assign) CGFloat radius;
@property (nonatomic, strong) NSArray *itemArr;
@property (nonatomic, strong) NSArray *corlorArr;


@property (nonatomic, assign) float maxRadius;//default 100
@property (nonatomic, assign) float minRadius;//default 0
@property (nonatomic, assign) float startAngle;//default 0
@property (nonatomic, assign) float endAngle;//default 360
@property (nonatomic, assign) float animationDuration;//default 0.6





@end











