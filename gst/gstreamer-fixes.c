/* gst-python
 * Copyright (C) 2002 David I. Lehn
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 * 
 * Author: David I. Lehn <dlehn@vt.edu>
 */

#include <gst/gst.h>

#include "gstreamer-fixes.h"

#define NI fprintf(stderr, "%s not implemented\n", __FUNCTION__);

void gst_clock_set_speed (GstClock *clock, gdouble speed) { NI; }
void gst_clock_get_speed (GstClock *clock, gdouble speed) { NI; }
void gst_bin_child_error (GstBin *bin, GstElement *child) { NI; }

#include "tmp-enum-types.c"
