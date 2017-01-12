/*
 * Volta GPU series Copy Engine.
 *
 * Copyright (c) 2016-2017, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.
 */

#include "gk20a/gk20a.h"

#include "gp10b/ce_gp10b.h"

#include "ce_gv11b.h"

void gv11b_init_ce(struct gpu_ops *gops)
{
	gp10b_init_ce(gops);
}
