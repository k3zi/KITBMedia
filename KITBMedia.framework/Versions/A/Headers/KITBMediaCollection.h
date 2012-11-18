//
//  KITBMediaCollection.h
//  KITBMedia
//
//  Created by Kesi Maduka on 11/4/12.
//  Copyright (c) 2012 Kdog Is The Best. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KITBMediaItem.h"

@interface KITBMediaCollection : NSMutableArray{
    NSMutableArray*    embeddedObject;
}

@property NSMutableArray *items;

typedef enum  {
    KITBMediaItemPropertyTitle,
    KITBMediaItemPropertyArtist,
    KITBMediaItemPropertyAlbum
} KITBMediaItemProperty;

- (KITBMediaCollection *)sortBy:(KITBMediaItemProperty)property ascending:(BOOL)asc;
- (KITBMediaCollection *)searchBy:(KITBMediaItemProperty)property for:(NSString *)string;
- (KITBMediaCollection *)searchAllPropertysFor:(NSString *)string;
- (KITBMediaCollection *)shuffle;

- (NSUInteger)indexOfObject:(KITBMediaItem *)anObject;
- (KITBMediaItem *) objectAtIndex:(unsigned)index;
- (KITBMediaCollection *)initWithItems:(NSArray *)newiTems;
- (unsigned) count;



@end
