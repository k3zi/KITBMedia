//
//  KITBMediaPlayer.h
//  KITBMedia
//
//  Created by Kesi Maduka on 11/10/12.
//  Copyright (c) 2012 Kdog Is The Best. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "KITBMediaItem.h"
#import "KITBMediaCollection.h"

@interface KITBMediaPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer *player;
    int currentQueueID;
    int currentCollectionIndex;
    KITBMediaCollection *currentCollection;
}

-(void)playSongAtIndex:(unsigned)index inCollection:(KITBMediaCollection *)collection;

@end
