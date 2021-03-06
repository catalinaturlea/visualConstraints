//
//  UIScrollView+VisualConstraints.h
//  Pods
//
//  Created by Catalina Turlea on 4/9/15.
//
//

@import UIKit;

@interface UIScrollView (VisualConstraints)

/**
 *  Add a subview to the scrollView that will fill it - the scrollView will get it's content size depending on the width of the view
 *
 *  @param view - the view to be contained in the `scrollView`
 */
- (void)addConstraintsToFillHorizontalWithView:(UIView *)view;

/**
 *  Add a subview to the scrollView that will fill it - the scrollView will get it's content size depending on the height of the view
 *
 *  @param view - the view to be contained in the `scrollView`
 */
- (void)addConstraintsToFillVerticalWithView:(UIView *)view;

/**
 *  Align all subviews in the array one after the other in a vertical manner - fills the scrollView parent
 *
 *  @param views - the views to be contained in the `scrollView`
 */
- (void)addConstraintsToAlignVerticalAllViews:(NSArray *)views;

/**
 *  Align all subviews in the array one after the other in a horizontal manner - fills the scrollView parent
 *
 *  @param views - the views to be contained in the `scrollView`
 */
- (void)addConstraintsToAlignHorizontalAllViews:(NSArray *)views;

/**
 *  Align all subviews in the array one after the other in a vertical manner - fills the scrollView parent
 *
 *  @param views - the view to be contained in the `scrollView`
 *  @param offset - the offset
 */
- (void)addConstraintsToAlignVerticalAllViews:(NSArray *)views withOffset:(CGFloat)offset;

/**
 *  Align all subviews in the array one after the other in a horizontal manner - fills the scrollView parent
 *
 *  @param views - the view to be contained in the `scrollView`
 *  @param offset - the offset
 */
- (void)addConstraintsToAlignHorizontalAllViews:(NSArray *)views withOffset:(CGFloat)offset;

@end
