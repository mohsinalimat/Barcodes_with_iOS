//
//  SalePlacemark.m
//  YardSale
//
//  Created by Oliver Drobnik on 21.05.14.
//  Copyright (c) 2014 Cocoanetics. All rights reserved.
//

#import "SalePlace.h"

@implementation SalePlace
{
   NSString *_name;
   NSString *_identifier;
}

- (instancetype)initWithDictionary:(NSDictionary *)dictionary
{
   CLLocationCoordinate2D coord;
   coord.latitude = [dictionary[@"Latitude"] floatValue];
   coord.longitude = [dictionary[@"Longitude"] floatValue];

   self = [super initWithCoordinate:coord
                             addressDictionary:nil];
   
   if (self)
   {
      _name = dictionary[@"Name"];
      _identifier = dictionary[@"Identifier"];
   }
   
   return self;
}

- (NSString *)title
{
   return [NSString stringWithFormat:@"%@'s Yard Sale", _name];
}

- (NSString *)subtitle
{
   return @"Cool Offers";
}

@end
