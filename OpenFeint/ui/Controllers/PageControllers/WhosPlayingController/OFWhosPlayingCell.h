//  Copyright 2009-2010 Aurora Feint, Inc.
// 
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  	http://www.apache.org/licenses/LICENSE-2.0
//  	
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import "OFTableCellHelper.h"
@class OFImageView;

@interface OFWhosPlayingCell : OFTableCellHelper
{
	OFImageView* profilePictureView;
	UILabel* nameLabel;
	UILabel* lastPlayedGameLabel;
	UILabel* gamerScoreLabel;
	UILabel* appGamerScoreLabel;
	UILabel* onlineLabel;
}

@property (nonatomic, retain) IBOutlet OFImageView* profilePictureView;
@property (nonatomic, retain) IBOutlet UILabel* nameLabel;
@property (nonatomic, retain) IBOutlet UILabel* lastPlayedGameLabel;
@property (nonatomic, retain) IBOutlet UILabel* gamerScoreLabel;
@property (nonatomic, retain) IBOutlet UILabel* appGamerScoreLabel;
@property (nonatomic, retain) IBOutlet UILabel* onlineLabel;

- (void)onResourceChanged:(OFResource*)resource;

@end
