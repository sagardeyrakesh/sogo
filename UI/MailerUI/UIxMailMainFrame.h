/* UIxMailMainFrame.h - this file is part of $PROJECT_NAME_HERE$
 *
 * Copyright (C) 2006 Inverse groupe conseil
 *
 * Author: Wolfgang Sourdeau <wsourdeau@inverse.ca>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef UIXMAILMAINFRAME_H
#define UIXMAILMAINFRAME_H

#import "../Common/UIxPageFrame.h"

@interface UIxMailMainFrame : UIxPageFrame
{
  NSString *rootURL;
  NSString *userRootURL;
  struct {
    int hideFolderTree:1;
    int reserved:31;
  } mmfFlags;
}

- (NSString *)rootURL;
- (NSString *)userRootURL;
- (NSString *)calendarRootURL;

@end

#endif /* UIXMAILMAINFRAME_H */
