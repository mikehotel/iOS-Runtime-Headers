/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableArray, SKUIColorScheme, SKUIProductPageItem;

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection {
    NSMutableArray *_actions;
    SKUIColorScheme *_colorScheme;
    SKUIProductPageItem *_item;
    NSMutableArray *_titles;
}

@property(retain) SKUIColorScheme * colorScheme;

- (void).cxx_destruct;
- (id)colorScheme;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (int)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
