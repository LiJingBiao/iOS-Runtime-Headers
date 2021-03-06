/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIImageView;

@interface SKUISlideshowDismissalAnimator : NSObject <UIViewControllerAnimatorTransitioning> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _imageRect;
    UIImageView *_imageView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRect;
@property(retain) UIImageView * imageView;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (id)imageView;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageView:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
