//
//  AudioVisualizer.h
//  AudioVisualizer
//
//  Created by Diana on 6/28/16.
//  Copyright © 2016 Diana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface AudioVisualizer : UIView

- (id) initWithBarsNumber:(NSInteger)barsCount frame:(CGRect)frame andColor:(UIColor *)color;
- (void) stopAudioVisualizer;
- (void) animateAudioVisualizerWithChannel0Level:(float)level0 andChannel1Level:(float)level1;

@end
