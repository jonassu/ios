//
//  CredentialsDto.h
//  Owncloud iOs Client
//
//  Created by Noelia Alvarez on 27/10/14.
//

/*
 Copyright (C) 2017, ownCloud GmbH.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <Foundation/Foundation.h>

@interface CredentialsDto : NSObject <NSCopying>

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *accessToken; // password for basic auth, cookies for SAML, access token for OAuth2...
@property (nonatomic, copy) NSString *refreshToken;
@property (nonatomic, copy) NSString *expiresIn;
@property (nonatomic, copy) NSString *tokenType;
@property (nonatomic, copy) NSString *authenticationMethod;


- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;

@end
