//
//  InfoViewController.h
//  iTransmission
//
//  Created by Mike Chen on 7/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InfoViewController : UIViewController <UIWebViewDelegate>
{
    NSString *pageName;
}
@property (nonatomic, retain) NSString *pageName;

+ (id)infoWithPageName:(NSString*)pageName;
- (id)initWithPageName:(NSString*)pageName;

@end
