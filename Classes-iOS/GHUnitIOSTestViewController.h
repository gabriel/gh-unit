//
//  GHUnitIOSTestViewController.h
//  GHUnitIOS
//
//  Created by Gabriel Handford on 2/20/09.
//  Copyright 2009. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>
#import "GHTestViewModel.h"
#import "GHUnitIOSTestView.h"
#import "GHImageDiffView.h"

@class GHUnitIOSTestViewController;

@protocol GHUnitIOSTestViewControllerDelegate <NSObject>

- (id<GHTest>)testViewControllerLoadedNextFailingTest:(GHUnitIOSTestViewController *)controller;

@end

/*
 View controller for a test.
 */
@interface GHUnitIOSTestViewController : UIViewController <GHTestRunnerDelegate, GHUnitIOSTestViewDelegate> {
  GHUnitIOSTestView *testView_;
  GHImageDiffView *imageDiffView_;

  GHTestNode *testNode_;
  
  GHTestRunner *runner_;
}

@property (unsafe_unretained, nonatomic) id<GHUnitIOSTestViewControllerDelegate> delegate;

- (void)setTest:(id<GHTest>)test;

@end
