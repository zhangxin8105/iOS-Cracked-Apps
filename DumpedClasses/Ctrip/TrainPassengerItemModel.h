//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface TrainPassengerItemModel : CTBusinessBean
{
    NSString *passengerName;
    NSString *iDCardName;
    NSString *iDCardNumber;
    int orderTicketId;
    _Bool enableReturnTicket;
    int ticketStatueCode;
    NSString *ticketStatueRemark;
    NSString *dealSeatNo;
    int itineraryType;
    PriceType *dealTicketPrice;
    int ticketType;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) int ticketType; // @synthesize ticketType;
@property(retain, nonatomic) PriceType *dealTicketPrice; // @synthesize dealTicketPrice;
@property(nonatomic) int itineraryType; // @synthesize itineraryType;
@property(copy, nonatomic) NSString *dealSeatNo; // @synthesize dealSeatNo;
@property(copy, nonatomic) NSString *ticketStatueRemark; // @synthesize ticketStatueRemark;
@property(nonatomic) int ticketStatueCode; // @synthesize ticketStatueCode;
@property(nonatomic) _Bool enableReturnTicket; // @synthesize enableReturnTicket;
@property(nonatomic) int orderTicketId; // @synthesize orderTicketId;
@property(copy, nonatomic) NSString *iDCardNumber; // @synthesize iDCardNumber;
@property(copy, nonatomic) NSString *iDCardName; // @synthesize iDCardName;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
