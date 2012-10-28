//
//  Pictures.h
//  CellScope
//
//  Created by Matthew Bakalar on 8/20/12.
//  Copyright (c) 2012 Matthew Bakalar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Pictures : NSManagedObject

@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSData * smallPicture;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * path;
@property (nonatomic, retain) NSString * user;
@property (nonatomic, retain) NSString * sharing;
@property (nonatomic, retain) NSString * group;
@property (nonatomic, retain) NSData * location;
@property (nonatomic, retain) NSData * metadata;

@end
