/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptWidget;



@interface SUPriceButton : UIThreePartButton 
{
    NSString *_confirmationTitle;
    unsigned int _frameLocked : 1;
    BOOL _leftAnchored;
    NSString *_originalTitle;
    float _originalWidth;
    SUScriptWidget *_scriptWidget;
    BOOL _showingConfirmation;
    NSUInteger _style;
    struct CGSize { 
        float width; 
        float height; 
    } _stylizedTitleSize;
    NSString *_stylizedTitle;
}

@property NSUInteger style; /* unknown property attribute: V_style */
@property(getter=isShowingConfirmation) BOOL showingConfirmation; /* unknown property attribute: V_showingConfirmation */
@property(retain) SUScriptWidget *scriptWidget; /* unknown property attribute: V_scriptWidget */
@property BOOL leftAnchored; /* unknown property attribute: V_leftAnchored */
@property(retain) NSString *confirmationTitle; /* unknown property attribute: V_confirmationTitle */

+ (double)defaultAnimationDuration;
+ (struct CGSize { float x1; float x2; })sizeForItem:(id)arg1;
+ (NSUInteger)_styleForItem:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)configureFromItem:(id)arg1;
- (void)setShowingConfirmation:(BOOL)arg1 duration:(float)arg2;
- (void)setStyle:(NSUInteger)arg1;
- (void)drawButtonPart:(NSInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawTitleAtPoint:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)sizeToFit;
- (void)_hideConfirmationAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_showConfirmationAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_buttonAction:(id)arg1;
- (struct { NSUInteger x1; id x2; id x3; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_4_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_4_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_4_1_3; } x4; float x5; struct CGSize { float x_6_1_1; float x_6_1_2; } x6; })_activeStyle;
- (void)_hideConfirmationWithDuration:(float)arg1;
- (void)_reloadButton;
- (void)_reloadTitleStyling;
- (void)_showConfirmationWithDuration:(float)arg1;
- (id)_stylizedTitle;
- (NSUInteger)style;
- (BOOL)isShowingConfirmation;
- (void)setShowingConfirmation:(BOOL)arg1;
- (id)scriptWidget;
- (void)setScriptWidget:(id)arg1;
- (BOOL)leftAnchored;
- (void)setLeftAnchored:(BOOL)arg1;
- (id)confirmationTitle;
- (void)setConfirmationTitle:(id)arg1;

@end
