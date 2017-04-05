//
//  ReportCSVViewController.h
//  AppSales
//
//  Created by Ole Zorn on 22.07.11.
//  Copyright 2011 omz:software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@protocol ReportSummary;

@interface ReportCSVViewController : UIViewController <MFMailComposeViewControllerDelegate> {

	id<ReportSummary> report;
	UIWebView *webView;
}

@property (nonatomic, retain) UIWebView *webView;

- (id)initWithReport:(id<ReportSummary>)selectedReport;

@end


@interface ReportCSVSelectionViewController : UITableViewController {

	NSArray *reports;
	NSDateFormatter *dateFormatter;
}

- (id)initWithReports:(NSArray *)allReports;

@end