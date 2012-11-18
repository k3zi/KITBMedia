//
//  KITBMediaPlayer.h
//  KITBMedia
//
//  Created by Kesi Maduka on 11/10/12.
//  Copyright (c) 2012 Kdog Is The Best. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "KITBMediaItem.h"
#import "KITBMediaCollection.h"

@protocol KITBMediaPlayerDelegate;

@interface KITBMediaPlayer : UIResponder <AVAudioPlayerDelegate> {
    AVAudioPlayer *mediaPlayer;
    int currentQueueID;
    id<KITBMediaPlayerDelegate> delegate;
    int currentCollectionIndex;
    KITBMediaCollection *currentCollection;
    BOOL playing;
}


@property (strong, nonatomic) AVAudioPlayer *mediaPlayer;
@property int currentQueueID;
@property int currentCollectionIndex;
@property BOOL playing;
@property (nonatomic, strong)id<KITBMediaPlayerDelegate> delegate;

-(void)playSongAtIndex:(unsigned)index inCollection:(KITBMediaCollection *)collection;
-(void)skipToNextSong;
-(void)skipToPreviousSong;

-(KITBMediaItem *)nowPlayingItem;

@end

@protocol KITBMediaPlayerDelegate <NSObject>
@optional
- (void)player:(KITBMediaPlayer *)player didChangeSongTo:(KITBMediaItem *)song;
- (void)player:(KITBMediaPlayer *)player didReachEndOfCollection:(KITBMediaCollection *)collection;
@end
