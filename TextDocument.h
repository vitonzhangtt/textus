//
//  MyDocument.h
//  Textus
//
//  Created by Jjgod Jiang on 2/16/09.
//  Copyright Jjgod Jiang 2009 . All rights reserved.
//


#import <Cocoa/Cocoa.h>

@interface TextDocument : NSDocument
{
    IBOutlet NSTextView *textView;
    NSStringEncoding GB18030Encoding;
    NSString *fileContents;
}

@end