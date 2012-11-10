//
//  KITBMediaLibrary.h
//  KITBMedia
//
//  Created by Kesi Maduka on 11/4/12.
//  Copyright (c) 2012 Kdog Is The Best. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>
#import "KITBMediaItem.h"
#import "KITBMediaCollection.h"

@interface KITBMediaLibrary : NSObject

-(KITBMediaCollection *)userLibrary;

@end
