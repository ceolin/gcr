/*
 * Copyright (C) 2010 Stefan Walter
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GCR_UNLOCK_OPTIONS_H__
#define __GCR_UNLOCK_OPTIONS_H__

G_BEGIN_DECLS

#define GCR_UNLOCK_OPTION_ALWAYS    "always"
#define GCR_UNLOCK_OPTION_SESSION   "session"
#define GCR_UNLOCK_OPTION_TIMEOUT   "timeout"
#define GCR_UNLOCK_OPTION_IDLE      "idle"

#ifdef __G_IR_SCANNER__
/* Delete this line when https://bugzilla.gnome.org/show_bug.cgi?id=720504 is fixed */;
#endif

G_END_DECLS

#endif /* __GCR_UNLOCK_OPTIONS_H__ */
