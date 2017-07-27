//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichMediaPickerController.h"

#import "MQZoneMoodEditInputCellDelegate.h"
#import "QQVideoEditorControllerDelegate.h"

@class MQZoneMoodEditInputCell, MQZoneVideoEditController, NSArray, NSDictionary, NSString;

@interface MQZoneVideoRecordViewController : QQRichMediaPickerController <QQVideoEditorControllerDelegate, MQZoneMoodEditInputCellDelegate>
{
    MQZoneVideoEditController *_videoEditManager;
    long long _ugcAuthority;
    NSArray *_uinList;
    NSDictionary *_jsParam;
    MQZoneMoodEditInputCell *_inputCell;
    long long _videoFromType;
    unsigned long long _editSettingMode;
    NSString *_sendButtonTitle;
}

@property(retain, nonatomic) NSString *sendButtonTitle; // @synthesize sendButtonTitle=_sendButtonTitle;
@property(nonatomic) unsigned long long editSettingMode; // @synthesize editSettingMode=_editSettingMode;
@property(nonatomic) long long videoFromType; // @synthesize videoFromType=_videoFromType;
- (void).cxx_destruct;
- (_Bool)inputCell:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)inputCellCheckTextState:(id)arg1 text:(id)arg2;
- (void)inputCellFinishEdit:(id)arg1 text:(id)arg2;
- (void)inputCellBecomeActive:(id)arg1;
- (void)inputCell:(id)arg1 textDidChange:(id)arg2;
- (void)resetUgcRithsParam;
- (id)getJSUgcRightsParam;
- (id)authorityText:(long long)arg1;
- (void)setJSUgcRightsParam:(id)arg1;
- (void)videoEditorController:(id)arg1 didFinishEidtWithInfo:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)showVideoEditView;
- (id)loadMultimediaEditViewConTroller:(id)arg1;
- (void)onYellowDiamonH5FloatClose:(id)arg1;
- (void)onKeyboardWillHideNotify:(id)arg1;
- (void)onKeyboardWillShowNotify:(id)arg1;
- (_Bool)createCurrentClipsDir;
- (void)removeKeyboardObserver;
- (void)addKeyboardObserver;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
