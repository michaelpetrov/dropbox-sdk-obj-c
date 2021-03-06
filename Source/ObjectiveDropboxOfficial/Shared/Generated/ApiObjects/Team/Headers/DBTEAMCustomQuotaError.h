///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMCustomQuotaError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CustomQuotaError` union.
///
/// Error returned by setting member custom quota.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMCustomQuotaError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMCustomQuotaErrorTag` enum type represents the possible tag states
/// with which the `DBTEAMCustomQuotaError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMCustomQuotaErrorTag) {
  /// A maximum of 1000 users can be set for a single call.
  DBTEAMCustomQuotaErrorTooManyUsers,

  /// (no description).
  DBTEAMCustomQuotaErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMCustomQuotaErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "too_many_users".
///
/// Description of the "too_many_users" tag state: A maximum of 1000 users can
/// be set for a single call.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyUsers;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "too_many_users".
///
/// @return Whether the union's current tag state has value "too_many_users".
///
- (BOOL)isTooManyUsers;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMCustomQuotaError` union.
///
@interface DBTEAMCustomQuotaErrorSerializer : NSObject

///
/// Serializes `DBTEAMCustomQuotaError` instances.
///
/// @param instance An instance of the `DBTEAMCustomQuotaError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMCustomQuotaError` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMCustomQuotaError *)instance;

///
/// Deserializes `DBTEAMCustomQuotaError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMCustomQuotaError` API object.
///
/// @return An instantiation of the `DBTEAMCustomQuotaError` object.
///
+ (DBTEAMCustomQuotaError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
