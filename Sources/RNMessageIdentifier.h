//
//  RNMessageIdentifier.h
//  MCPEServer
//
//  Created by Sergey Abramchuk on 14.12.15.
//  Copyright © 2015 ss-abramchuk. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (unsigned char, RNMessageIdentifier) {
    RNMessageIdentifierConnectedPing,
    RNMessageIdentifierUnconnectedPing,
    RNMessageIdentifierUnconnectedPingOpenConnections,
    RNMessageIdentifierConnectedPong,
    RNMessageIdentifierDetectLostConnections,
    RNMessageIdentifierOpenConnectionRequestFirst,
    RNMessageIdentifierOpenConnectionReplyFirst,
    RNMessageIdentifierOpenConnectionRequestSecond,
    RNMessageIdentifierOpenConnectionReplySecond,
    RNMessageIdentifierConnectionRequest,
    RNMessageIdentifierRemoteSystemRequiresPublicKey,
    RNMessageIdentifierOurSystemRequiresSecurity,
    RNMessageIdentifierPublicKeyMismatch,
    RNMessageIdentifierOutOfBandInternal,
    RNMessageIdentifierSndReceiptAcked,
    RNMessageIdentifierSndReceiptLoss,
    RNMessageIdentifierConnectionRequestAccepted,
    RNMessageIdentifierConnectionAttemptFailed,
    RNMessageIdentifierAlreadyConnected,
    RNMessageIdentifierNewIncomingConnection,
    RNMessageIdentifierNoFreeIncomingConnections,
    RNMessageIdentifierDisconnectionNotification,
    RNMessageIdentifierConnectionLost,
    RNMessageIdentifierConnectionBanned,
    RNMessageIdentifierInvalidPassword,
    RNMessageIdentifierIncompatibleProtocolVersion,
    RNMessageIdentifierIpRecentlyConnected,
    RNMessageIdentifierTimestamp,
    RNMessageIdentifierUnconnectedPong,
    RNMessageIdentifierAdvertiseSystem,
    RNMessageIdentifierDownloadProgress,
    RNMessageIdentifierRemoteDisconnectionNotification,
    RNMessageIdentifierRemoteConnectionLost,
    RNMessageIdentifierRemoteNewIncomingConnection,
    RNMessageIdentifierFileListTransferHeader,
    RNMessageIdentifierFileListTransferFile,
    RNMessageIdentifierFileListReferencePushAck,
    RNMessageIdentifierDdtDownloadRequest,
    RNMessageIdentifierTransportString,
    RNMessageIdentifierReplicaManagerConstruction,
    RNMessageIdentifierReplicaManagerScopeChange,
    RNMessageIdentifierReplicaManagerSerialize,
    RNMessageIdentifierReplicaManagerDownloadStarted,
    RNMessageIdentifierReplicaManagerDownloadComplete,
    RNMessageIdentifierRakvoiceOpenChannelRequest,
    RNMessageIdentifierRakvoiceOpenChannelReply,
    RNMessageIdentifierRakvoiceCloseChannel,
    RNMessageIdentifierRakvoiceData,
    RNMessageIdentifierAutopatcherGetChangelistSinceDate,
    RNMessageIdentifierAutopatcherCreationList,
    RNMessageIdentifierAutopatcherDeletionList,
    RNMessageIdentifierAutopatcherGetPatch,
    RNMessageIdentifierAutopatcherPatchList,
    RNMessageIdentifierAutopatcherRepositoryFatalError,
    RNMessageIdentifierAutopatcherCannotDownloadOriginalUnmodifiedFiles,
    RNMessageIdentifierAutopatcherFinishedInternal,
    RNMessageIdentifierAutopatcherFinished,
    RNMessageIdentifierAutopatcherRestartApplication,
    RNMessageIdentifierNatPunchthroughRequest,
    RNMessageIdentifierNatConnectAtTime,
    RNMessageIdentifierNatGetMostRecentPort,
    RNMessageIdentifierNatClientReady,
    RNMessageIdentifierNatTargetNotConnected,
    RNMessageIdentifierNatTargetUnresponsive,
    RNMessageIdentifierNatConnectionToTargetLost,
    RNMessageIdentifierNatAlreadyInProgress,
    RNMessageIdentifierNatPunchthroughFailed,
    RNMessageIdentifierNatPunchthroughSucceeded,
    RNMessageIdentifierReadyEventSet,
    RNMessageIdentifierReadyEventUnset,
    RNMessageIdentifierReadyEventAllSet,
    RNMessageIdentifierReadyEventQuery,
    RNMessageIdentifierLobbyGeneral,
    RNMessageIdentifierRpcRemoteError,
    RNMessageIdentifierRpcPlugin,
    RNMessageIdentifierFileListReferencePush,
    RNMessageIdentifierReadyEventForceAllSet,
    RNMessageIdentifierRoomsExecuteFunc,
    RNMessageIdentifierRoomsLogonStatus,
    RNMessageIdentifierRoomsHandleChange,
    RNMessageIdentifierLobby2SendMessage,
    RNMessageIdentifierLobby2ServerError,
    RNMessageIdentifierFcm2NewHost,
    RNMessageIdentifierFcm2RequestFcmguid,
    RNMessageIdentifierFcm2RespondConnectionCount,
    RNMessageIdentifierFcm2InformFcmguid,
    RNMessageIdentifierFcm2UpdateMinTotalConnectionCount,
    RNMessageIdentifierFcm2VerifiedJoinStart,
    RNMessageIdentifierFcm2VerifiedJoinCapable,
    RNMessageIdentifierFcm2VerifiedJoinFailed,
    RNMessageIdentifierFcm2VerifiedJoinAccepted,
    RNMessageIdentifierFcm2VerifiedJoinRejected,
    RNMessageIdentifierUdpProxyGeneral,
    RNMessageIdentifierSqlite3Exec,
    RNMessageIdentifierSqlite3UnknownDb,
    RNMessageIdentifierSqlliteLogger,
    RNMessageIdentifierNatTypeDetectionRequest,
    RNMessageIdentifierNatTypeDetectionResult,
    RNMessageIdentifierRouter2Internal,
    RNMessageIdentifierRouter2ForwardingNoPath,
    RNMessageIdentifierRouter2ForwardingEstablished,
    RNMessageIdentifierRouter2Rerouted,
    RNMessageIdentifierTeamBalancerInternal,
    RNMessageIdentifierTeamBalancerRequestedTeamFull,
    RNMessageIdentifierTeamBalancerRequestedTeamLocked,
    RNMessageIdentifierTeamBalancerTeamRequestedCancelled,
    RNMessageIdentifierTeamBalancerTeamAssigned,
    RNMessageIdentifierLightspeedIntegration,
    RNMessageIdentifierXboxLobby,
    RNMessageIdentifierTwoWayAuthenticationIncomingChallengeSuccess,
    RNMessageIdentifierTwoWayAuthenticationOutgoingChallengeSuccess,
    RNMessageIdentifierTwoWayAuthenticationIncomingChallengeFailure,
    RNMessageIdentifierTwoWayAuthenticationOutgoingChallengeFailure,
    RNMessageIdentifierTwoWayAuthenticationOutgoingChallengeTimeout,
    RNMessageIdentifierTwoWayAuthenticationNegotiation,
    RNMessageIdentifierCloudPostRequest,
    RNMessageIdentifierCloudReleaseRequest,
    RNMessageIdentifierCloudGetRequest,
    RNMessageIdentifierCloudGetResponse,
    RNMessageIdentifierCloudUnsubscribeRequest,
    RNMessageIdentifierCloudServerToServerCommand,
    RNMessageIdentifierCloudSubscriptionNotification,
    RNMessageIdentifierLibVoice,
    RNMessageIdentifierRelayPlugin,
    RNMessageIdentifierNatRequestBoundAddresses,
    RNMessageIdentifierNatRespondBoundAddresses,
    RNMessageIdentifierFcm2UpdateUserContext,
    RNMessageIdentifierReserved3,
    RNMessageIdentifierReserved4,
    RNMessageIdentifierReserved5,
    RNMessageIdentifierReserved6,
    RNMessageIdentifierReserved7,
    RNMessageIdentifierReserved8,
    RNMessageIdentifierReserved9,
    RNMessageIdentifierUserPacketEnum
};
