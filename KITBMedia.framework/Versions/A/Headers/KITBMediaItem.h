//
//  KITBMediaItem.h
//  KITBMedia
//
//  Created by Kesi Maduka on 11/4/12.
//  Copyright (c) 2012 Kdog Is The Best. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KITBMediaItem : NSObject

@property NSString *title;
@property NSString *comment;
@property NSString *copyright;
@property NSString *location;
@property NSString *artist;
@property NSString *album;

@property NSInteger disc_count;
@property NSInteger track_count;
@property NSInteger file_size;
@property NSInteger year;
@property NSInteger content_rating;
@property NSInteger duration;
@property NSInteger bpm;
@property NSInteger bit_rate;
@property NSInteger store_id;

@property NSDate *date_released;
@property NSDate *date_purchased;
@property NSDate *date_added;

@property BOOL compliation;
@property BOOL itunes_u;
@property BOOL audio_book;

@end
