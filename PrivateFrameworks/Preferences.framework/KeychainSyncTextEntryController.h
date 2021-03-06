/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSSpecifier, PSTableCell, UIView<UIKeyInput>;

@interface KeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {
    PSTableCell *_textEntryCell;
    PSSpecifier *_textEntrySpecifier;
    int _textEntryType;
    UIView<UIKeyInput> *_textEntryView;
    NSString *_textValue;
    bool_convertsNumeralsToASCII;
    bool_hidesNextButton;
    bool_secureTextEntry;
    bool_textFieldHasRoundBorder;
}

@property bool convertsNumeralsToASCII;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool hidesNextButton;
@property bool secureTextEntry;
@property(readonly) Class superclass;
@property int textEntryType;
@property bool textFieldHasRoundBorder;
@property(retain) NSString * textValue;

- (bool)becomeFirstResponder;
- (bool)convertsNumeralsToASCII;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (id)getTextValueForSpecifier:(id)arg1;
- (bool)hidesNextButton;
- (id)init;
- (void)loadView;
- (void)nextPressed;
- (unsigned long long)numberOfPasscodeFields;
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;
- (id)placeholderText;
- (bool)secureTextEntry;
- (void)setConvertsNumeralsToASCII:(bool)arg1;
- (void)setHidesNextButton:(bool)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setTextEntryText:(id)arg1;
- (void)setTextEntryType:(int)arg1;
- (void)setTextFieldHasRoundBorder:(bool)arg1;
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setTextValue:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)textEntrySpecifier;
- (id)textEntryText;
- (int)textEntryType;
- (id)textEntryView;
- (void)textEntryViewDidChange:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (bool)textFieldHasRoundBorder;
- (id)textValue;
- (void)updateNextButton;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
