//
//  MapView.h
//  AppSales
//
//  Created by Ole Zorn on 21.07.11.
//  Copyright 2011 omz:software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Product;
@protocol ReportSummary;

@interface MapView : UIView {

	NSDictionary *polygonsByCountryCode;
	id<ReportSummary> report;
	Product *selectedProduct;
	NSString *selectedCountry;
	UIImageView *pinView;
}

@property (nonatomic, retain) id<ReportSummary> report;
@property (nonatomic, retain) Product *selectedProduct;
@property (nonatomic, retain) NSString *selectedCountry;

- (CGPoint)centerPointForCountry:(NSString *)country;
- (NSArray *)polygonPathsForCountry:(NSString *)country;
- (NSDictionary *)polygonsByCountryCode;

@end
