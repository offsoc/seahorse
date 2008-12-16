/* 
 * Seahorse
 * 
 * Copyright (C) 2008 Stefan Walter
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
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.  
 */

#ifndef __SEAHORSE_GKR_KEYRING_COMMANDS_H__
#define __SEAHORSE_GKR_KEYRING_COMMANDS_H__

#include "seahorse-commands.h"

#include <glib-object.h>

#define SEAHORSE_TYPE_GKR_KEYRING_COMMANDS               (seahorse_gkr_keyring_commands_get_type ())
#define SEAHORSE_GKR_KEYRING_COMMANDS(obj)               (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_TYPE_GKR_KEYRING_COMMANDS, SeahorseGkrKeyringCommands))
#define SEAHORSE_GKR_KEYRING_COMMANDS_CLASS(klass)       (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_TYPE_GKR_KEYRING_COMMANDS, SeahorseGkrKeyringCommandsClass))
#define SEAHORSE_IS_GKR_KEYRING_COMMANDS(obj)            (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_TYPE_GKR_KEYRING_COMMANDS))
#define SEAHORSE_IS_GKR_KEYRING_COMMANDS_CLASS(klass)    (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_TYPE_GKR_KEYRING_COMMANDS))
#define SEAHORSE_GKR_KEYRING_COMMANDS_GET_CLASS(obj)     (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_TYPE_GKR_KEYRING_COMMANDS, SeahorseGkrKeyringCommandsClass))

typedef struct _SeahorseGkrKeyringCommands SeahorseGkrKeyringCommands;
typedef struct _SeahorseGkrKeyringCommandsClass SeahorseGkrKeyringCommandsClass;
typedef struct _SeahorseGkrKeyringCommandsPrivate SeahorseGkrKeyringCommandsPrivate;
    
struct _SeahorseGkrKeyringCommands {
	SeahorseCommands parent;
};

struct _SeahorseGkrKeyringCommandsClass {
	SeahorseCommandsClass parent_class;
};

GType                         seahorse_gkr_keyring_commands_get_type               (void);

SeahorseGkrKeyringCommands*   seahorse_gkr_keyring_commands_new                    (void);

#endif /* __SEAHORSE_GKR_KEYRING_COMMANDS_H__ */
