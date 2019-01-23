//
//  YZINewDocumentViewController.h
//  Documents
//
//  Created by Yvette Zhukovsky on 1/23/19.
//  Copyright © 2019 Yvette Zhukovsky. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YZINewDocumentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *wcLabel;
@property (weak, nonatomic) IBOutlet UITextField *titleTextField;

@property (weak, nonatomic) IBOutlet UITextView *enterText;

- (IBAction)saveButton:(id)sender;


@end

NS_ASSUME_NONNULL_END
