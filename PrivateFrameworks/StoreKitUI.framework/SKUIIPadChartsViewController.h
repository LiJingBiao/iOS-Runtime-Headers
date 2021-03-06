/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIChartsViewControllerDelegate>, NSArray, NSOperationQueue, NSString, SKUIChartColumnsView, SKUIClientContext, SKUIResourceLoader;

@interface SKUIIPadChartsViewController : UIViewController <SKUIItemListTableDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    SKUIResourceLoader *_artworkLoader;
    NSArray *_chartViewControllers;
    NSArray *_charts;
    SKUIChartColumnsView *_chartsView;
    SKUIClientContext *_clientContext;
    } _contentInset;
    <SKUIChartsViewControllerDelegate> *_delegate;
    NSOperationQueue *_operationQueue;
    long long _selectedChartIndex;
    long long _selectedItemIndex;
    bool_delegateWantsWillDisplay;
}

@property(retain) SKUIResourceLoader * artworkLoader;
@property(copy) NSArray * charts;
@property(retain) SKUIClientContext * clientContext;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIChartsViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_artworkContextForChart:(id)arg1;
- (id)_itemListWithChart:(id)arg1;
- (void)_reloadChartsView;
- (void)_setSuspended:(bool)arg1;
- (long long)_visibleColumnCountForOrientation:(long long)arg1;
- (id)artworkLoader;
- (id)charts;
- (id)clientContext;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (id)delegate;
- (void)enumerateVisibleItemsUsingBlock:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemIndex:(long long)arg1 chartIndex:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 willDisplayCellForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)loadView;
- (id)popImageViewForItemIndex:(long long)arg1 chartIndex:(long long)arg2;
- (void)setArtworkLoader:(id)arg1;
- (void)setCharts:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)unhideAllImages;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
