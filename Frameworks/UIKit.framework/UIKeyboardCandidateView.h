/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIKeyboardCandidateBar, UIKeyboardCandidateGrid, UIKeyboardCandidateSortControl, UIKeyboardCandidateSplitKeyboardToggleButton, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIView<UIKeyboardCandidateList>;

@interface UIKeyboardCandidateView : UIInputView {
    struct { 
        unsigned int isExtended; 
        unsigned int didMinimizeKeyboard; 
        unsigned int isSplit; 
    UIKeyboardCandidateBar *_bar;
    } _candidateBarFlags;
    UIKeyboardCandidateGrid *_extendedView;
    UIView<UIKeyboardCandidateList> *_inlineView;
    UIImageView *_leftBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;
    UIImageView *_rightBackground;
    UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;
    UIKeyboardCandidateSortControl *_sortControl;
}

@property(retain) UIView<UIKeyboardCandidateList> * inlineView;

+ (id)activeCandidateList;
+ (id)activeCandidateView;
+ (double)defaultExtendedControlHeight;
+ (void)setActiveCandidateView:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceForInlineView:(bool)arg1;
+ (id)sharedInstanceForInlineView;

- (unsigned long long)_numberOfColumns:(bool)arg1;
- (void)_toggleExtendedCandidateView:(id)arg1;
- (id)activeCandidateList;
- (double)barHeight;
- (void)candidatesDidChange;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlineView;
- (bool)isExtended;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCandidateBarCanExtend:(bool)arg1;
- (void)setCandidateViewExtended:(bool)arg1;
- (void)setCandidatesToExtendedViewFromCollapsedView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInlineView:(id)arg1;
- (void)updatePageControlStatus;
- (void)willMoveToSuperview:(id)arg1;

@end
