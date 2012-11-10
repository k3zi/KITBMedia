KITBMedia
=========

(Jailbreak Only) An alternative framework for music the iphone music. Only works if the app is installed under "/Applications".

KITBMediaLibrary:
=========
-(KITBMediaCollection *)userLibrary; //Gets the Users Library and returns as a KITBMediaCollection


KITBMediaCollection:
=========
-(KITBMediaItem *) objectAtIndex:(unsigned)index;

-(KITBMediaCollection *)initWithItems:(NSArray *)newiTems;

-(KITBMediaCollection *)sortBy:(KITBMediaItemProperty)property ascending:(BOOL)asc;

KITBMediaItemPropertys:
=========
KITBMediaItemPropertyTitle

KITBMediaItemPropertyArtist

KITBMediaItemPropertyAlbum