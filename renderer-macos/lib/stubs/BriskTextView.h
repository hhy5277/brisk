#import "Cocoa_stubs.h"
#define CAML_NAME_SPACE
#import <caml/alloc.h>

@interface BriskTextView : NSTextView

@property(nonatomic, assign) NSMutableAttributedString *attributedString;
@property(nonatomic, assign) NSMutableDictionary *attributedProps;
@property(nonatomic, assign) NSMutableParagraphStyle *paragraphStyle;

@end

void ml_BriskTextView_applyAttributes(BriskTextView *txt);

double ml_BriskTextView_getTextWidth(BriskTextView *txt);
double ml_BriskTextView_getTextHeight(BriskTextView *txt);

CAMLprim value ml_BriskTextView_getTextWidth_bc(BriskTextView *txt);
CAMLprim value ml_BriskTextView_getTextHeight_bc(BriskTextView *txt);

CAMLprim value ml_BriskTextView_setStringValue(BriskTextView *txt, value str_v);
CAMLprim value ml_BriskTextView_setFont(BriskTextView *txt, value fontName_v,
                                        double fontSize, double fontWeight);

void ml_BriskTextView_setColor(BriskTextView *txt, double red, double green,
                               double blue, double alpha);
CAMLprim value ml_BriskTextView_setColor_bc(BriskTextView *txt, value red_v,
                                            value green_v, value blue_v,
                                            value alpha_v);

void ml_BriskTextView_setBackgroundColor(BriskTextView *txt, double red,
                                         double green, double blue,
                                         double alpha);
CAMLprim value ml_BriskTextView_setBackgroundColor_bc(BriskTextView *txt,
                                                      value red_v,
                                                      value green_v,
                                                      value blue_v,
                                                      value alpha_v);

void ml_BriskTextView_setAlignment(BriskTextView *txt, int align);
CAMLprim value ml_BriskTextView_setAlignment_bc(BriskTextView *txt,
                                                value align_v);

void ml_BriskTextView_setLineBreakMode(BriskTextView *txt, int mode);
CAMLprim value ml_BriskTextView_setLineBreakMode_bc(BriskTextView *txt,
                                                    value mode_v);

void ml_BriskTextView_setLineSpacing(BriskTextView *txt, double spacing);
CAMLprim value ml_BriskTextView_setLineSpacing_bc(BriskTextView *txt,
                                                  value spacing_v);

void ml_BriskTextView_setKern(BriskTextView *txt, double kern);
CAMLprim value ml_BriskTextView_setKern_bc(BriskTextView *txt, value kern_v);

void ml_BriskTextView_setCornerRadius(BriskTextView *txt, double radius);
CAMLprim value ml_BriskTextView_setCornerRadius_bc(BriskTextView *txt,
                                                   value radius_v);

void ml_BriskTextView_setPadding(BriskTextView *txt, double left, double top,
                                 double right, double bottom);
CAMLprim value ml_BriskTextView_setPadding_bc(BriskTextView *txt, value left_v,
                                              value top_v, value right_v,
                                              value bottom_v);