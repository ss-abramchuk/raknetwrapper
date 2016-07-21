//
//  RNPacket.h
//  MCPEServer
//
//  Created by Sergey Abramchuk on 29.12.15.
//  Copyright © 2015 ss-abramchuk. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RNSystemAddress;

/// This represents a user message from another system.
@interface RNPacket : NSObject

/// The system that send this packet.
@property (nonatomic, readonly) RNSystemAddress *systemAddress;

/// A unique identifier for the system that sent this packet
@property (nonatomic, readonly) unsigned long long guid;

///
@property (nonatomic, readonly) unsigned char identifier;

///
@property (nonatomic, readonly) unsigned int offset;

/// The data from the sender
@property (nonatomic, readonly) NSData *data;

@end
