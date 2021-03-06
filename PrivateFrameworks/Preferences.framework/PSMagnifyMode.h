/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, NSString;

@interface PSMagnifyMode : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    NSString *_localizedName;
    NSString *_name;
    NSArray *_previewHTMLStrings;
    NSArray *_previewStyleSheets;
    } _size;
    bool_zoomed;
}

@property(retain) NSString * localizedName;
@property(retain) NSString * name;
@property(retain) NSArray * previewHTMLStrings;
@property(retain) NSArray * previewStyleSheets;
@property struct CGSize { double x1; double x2; } size;
@property(getter=isZoomed) bool zoomed;

+ (id)magnifyModeWithSize:(struct CGSize { double x1; double x2; })arg1 name:(id)arg2 localizedName:(id)arg3 isZoomed:(bool)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isZoomed;
- (id)localizedName;
- (id)name;
- (id)previewHTMLStrings;
- (id)previewStyleSheets;
- (void)setLocalizedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreviewHTMLStrings:(id)arg1;
- (void)setPreviewStyleSheets:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setZoomed:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
