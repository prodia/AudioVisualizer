//
//  ViewController.h
//  AudioVisualizer
//
//  Created by Diana on 6/28/16.
//  Copyright © 2016 Diana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "AudioVisualizer.h"

@interface ViewController : UIViewController <AVAudioPlayerDelegate>

@property (nonatomic, strong) AVAudioPlayer *audioPlayer;
@property (strong, nonatomic) AudioVisualizer *audioVisualizer;
@property (strong, nonatomic) IBOutlet UIView *visualizerView;
@property (strong, nonatomic) IBOutlet UIButton *playPauseButton;
@property (strong, nonatomic) IBOutlet UILabel *currentTimeLabel;
@property (strong, nonatomic) IBOutlet UILabel *remainingTimeLabel;

- (IBAction)playPauseButtonPressed:(id)sender;

@end

