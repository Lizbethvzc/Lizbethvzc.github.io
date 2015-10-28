@interface ScribbleThumbnailView : UIView
{
@protected
NSString *imagePath_;
}
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, copy) NSString *imagePath;
@end