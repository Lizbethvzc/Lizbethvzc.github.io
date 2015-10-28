#import "ScribbleThumbnailView.h"
@interface ScribbleThumbnailViewImageProxy : ScribbleThumbnailView
{
@private
UIImage *realImage_;
BOOL loadingThreadHasLaunched_;
}
@property (nonatomic, readonly) UIImage *image;
@end