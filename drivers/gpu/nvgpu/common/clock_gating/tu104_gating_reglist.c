/*
 * Copyright (c) 2014-2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This file is autogenerated.  Do not edit.
 */

#include <nvgpu/types.h>
#include <nvgpu/io.h>
#include <nvgpu/enabled.h>

#include "gating_reglist.h"
#include "tu104_gating_reglist.h"

#define GATING_DESC_SIZE (u32)(sizeof(struct gating_desc))

/* slcg bus */
static const struct gating_desc tu104_slcg_bus[] = {
	{.addr = 0x00001c04U, .prod = 0x00000000U, .disable = 0x000003feU},
};

/* slcg ce2 */
static const struct gating_desc tu104_slcg_ce2[] = {
	{.addr = 0x00104204U, .prod = 0x00000040U, .disable = 0x000007feU},
};

/* slcg chiplet */
static const struct gating_desc tu104_slcg_chiplet[] = {
	{.addr = 0x0010e07cU, .prod = 0x00000000U, .disable = 0x00000007U},
	{.addr = 0x0010e17cU, .prod = 0x00000000U, .disable = 0x00000007U},
};

/* slcg fb */
static const struct gating_desc tu104_slcg_fb[] = {
	{.addr = 0x00100d14U, .prod = 0x00000000U, .disable = 0xfffffffeU},
	{.addr = 0x00100c9cU, .prod = 0x00000000U, .disable = 0x000001feU},
	{.addr = 0x001facb4U, .prod = 0x00000000U, .disable = 0x000001feU},
};

/* slcg fifo */
static const struct gating_desc tu104_slcg_fifo[] = {
	{.addr = 0x000026ecU, .prod = 0x00000000U, .disable = 0x0001fffeU},
};

/* slcg gr */
static const struct gating_desc tu104_slcg_gr[] = {
	{.addr = 0x004041f4U, .prod = 0x00000000U, .disable = 0x0ffffffeU},
	{.addr = 0x00409134U, .prod = 0x00020008U, .disable = 0x0003fffeU},
	{.addr = 0x00409894U, .prod = 0x00000000U, .disable = 0x0000fffeU},
	{.addr = 0x004078c4U, .prod = 0x00000000U, .disable = 0x000001feU},
	{.addr = 0x00406004U, .prod = 0x00000000U, .disable = 0x0001fffeU},
	{.addr = 0x00405864U, .prod = 0x00000000U, .disable = 0x000001feU},
	{.addr = 0x00405910U, .prod = 0xfffffff0U, .disable = 0xfffffffeU},
	{.addr = 0x00408044U, .prod = 0x00000000U, .disable = 0x00000ffeU},
	{.addr = 0x00407004U, .prod = 0x00000000U, .disable = 0x000001feU},
	{.addr = 0x00405bf4U, .prod = 0x00000000U, .disable = 0x00000002U},
	{.addr = 0x0041a134U, .prod = 0x00020008U, .disable = 0x0003fffeU},
	{.addr = 0x0041a894U, .prod = 0x00000000U, .disable = 0x0000fffeU},
	{.addr = 0x00418504U, .prod = 0x00000000U, .disable = 0x0007fffeU},
	{.addr = 0x0041860cU, .prod = 0x00000000U, .disable = 0x000001feU},
	{.addr = 0x0041868cU, .prod = 0x00000000U, .disable = 0x0000001eU},
	{.addr = 0x0041871cU, .prod = 0x00000000U, .disable = 0x000003feU},
	{.addr = 0x00418388U, .prod = 0x00000000U, .disable = 0x00000001U},
	{.addr = 0x0041882cU, .prod = 0x00000000U, .disable = 0x0001fffeU},
	{.addr = 0x00418bc0U, .prod = 0x00000000U, .disable = 0x000001feU},
	{.addr = 0x00418974U, .prod = 0x00000000U, .disable = 0x0001fffeU},
	{.addr = 0x00418c74U, .prod = 0xffffff80U, .disable = 0xfffffffeU},
	{.addr = 0x00418cf4U, .prod = 0xfffffff8U, .disable = 0xfffffffeU},
	{.addr = 0x00418d74U, .prod = 0xffffffe0U, .disable = 0xfffffffeU},
	{.addr = 0x00418f10U, .prod = 0xffffffe0U, .disable = 0xfffffffeU},
	{.addr = 0x00418e10U, .prod = 0xfffffffeU, .disable = 0xfffffffeU},
	{.addr = 0x00419024U, .prod = 0x000001feU, .disable = 0x000001feU},
	{.addr = 0x0041889cU, .prod = 0x00000000U, .disable = 0x000001feU},
	{.addr = 0x00419d24U, .prod = 0x00000000U, .disable = 0x000000ffU},
	{.addr = 0x0041986cU, .prod = 0x00000104U, .disable = 0x00fffffeU},
	{.addr = 0x00419c74U, .prod = 0x0000001eU, .disable = 0x0000001eU},
	{.addr = 0x00419c84U, .prod = 0x0003fffcU, .disable = 0x0003fffeU},
	{.addr = 0x00419c8cU, .prod = 0xffffff84U, .disable = 0xfffffffeU},
	{.addr = 0x00419c94U, .prod = 0x000bffc0U, .disable = 0x000ffffeU},
	{.addr = 0x00419ca4U, .prod = 0x00003ffeU, .disable = 0x00003ffeU},
	{.addr = 0x00419cacU, .prod = 0x0001f800U, .disable = 0x0001fffeU},
	{.addr = 0x00419cb4U, .prod = 0x00000000U, .disable = 0x0000001eU},
	{.addr = 0x00419a44U, .prod = 0x00000008U, .disable = 0x0000000eU},
	{.addr = 0x00419a4cU, .prod = 0x000001f8U, .disable = 0x000001feU},
	{.addr = 0x00419a54U, .prod = 0x0000003cU, .disable = 0x0000003eU},
	{.addr = 0x00419a5cU, .prod = 0x0000000cU, .disable = 0x0000000eU},
	{.addr = 0x00419a64U, .prod = 0x000001beU, .disable = 0x000001feU},
	{.addr = 0x00419a7cU, .prod = 0x0000003cU, .disable = 0x0000003eU},
	{.addr = 0x00419a84U, .prod = 0x0000000cU, .disable = 0x0000000eU},
	{.addr = 0x0041be2cU, .prod = 0x04115fc0U, .disable = 0xfffffffeU},
	{.addr = 0x0041bfecU, .prod = 0xfffffff0U, .disable = 0xfffffffeU},
	{.addr = 0x0041bed4U, .prod = 0xfffffff8U, .disable = 0xfffffffeU},
	{.addr = 0x00408814U, .prod = 0x00000000U, .disable = 0x0001fffeU},
	{.addr = 0x00408a84U, .prod = 0x00000000U, .disable = 0x0001fffeU},
	{.addr = 0x004089acU, .prod = 0x00000000U, .disable = 0x0001fffeU},
	{.addr = 0x00408a24U, .prod = 0x00000000U, .disable = 0x000000ffU},
};

/* slcg ltc */
static const struct gating_desc tu104_slcg_ltc[] = {
	{.addr = 0x0017e050U, .prod = 0x00000000U, .disable = 0xfffffffeU},
	{.addr = 0x0017e35cU, .prod = 0x00000000U, .disable = 0xfffffffeU},
};

/* slcg perf */
static const struct gating_desc tu104_slcg_perf[] = {
	{.addr = 0x00248018U, .prod = 0xffffffffU, .disable = 0x00000000U},
	{.addr = 0x00246018U, .prod = 0xffffffffU, .disable = 0x00000000U},
	{.addr = 0x00244018U, .prod = 0xffffffffU, .disable = 0x00000000U},
	{.addr = 0x0024a124U, .prod = 0x00000001U, .disable = 0x00000000U},
};

/* slcg PriRing */
static const struct gating_desc tu104_slcg_priring[] = {
	{.addr = 0x001200a8U, .prod = 0x00000000U, .disable = 0x00000001U},
};

/* slcg pwr_csb */
static const struct gating_desc tu104_slcg_pwr_csb[] = {
	{.addr = 0x00000134U, .prod = 0x00020008U, .disable = 0x0003fffeU},
	{.addr = 0x00000e74U, .prod = 0x00000000U, .disable = 0x0000000fU},
	{.addr = 0x00000a74U, .prod = 0x00000000U, .disable = 0x00007ffeU},
	{.addr = 0x000206b8U, .prod = 0x00000000U, .disable = 0x0000000fU},
};

/* slcg pmu */
static const struct gating_desc tu104_slcg_pmu[] = {
	{.addr = 0x0010a134U, .prod = 0x00020008U, .disable = 0x0003fffeU},
	{.addr = 0x0010aa74U, .prod = 0x00000000U, .disable = 0x00007ffeU},
	{.addr = 0x0010ae74U, .prod = 0x00000000U, .disable = 0x0000000fU},
};

/* therm gr */
static const struct gating_desc tu104_slcg_therm[] = {
	{.addr = 0x000206b8U, .prod = 0x00000000U, .disable = 0x0000000fU},
};

/* slcg Xbar */
static const struct gating_desc tu104_slcg_xbar[] = {
	{.addr = 0x0013c824U, .prod = 0x00000000U, .disable = 0x7ffffffeU},
	{.addr = 0x0013dc08U, .prod = 0x00000000U, .disable = 0xfffffffeU},
	{.addr = 0x0013c924U, .prod = 0x00000000U, .disable = 0x7ffffffeU},
	{.addr = 0x0013cbe4U, .prod = 0x00000000U, .disable = 0x1ffffffeU},
};

/* blcg bus */
static const struct gating_desc tu104_blcg_bus[] = {
	{.addr = 0x00001c00U, .prod = 0x00000042U, .disable = 0x00000000U},
};

/* blcg ce */
static const struct gating_desc tu104_blcg_ce[] = {
	{.addr = 0x00104200U, .prod = 0x0000c242U, .disable = 0x00000000U},
};

/* blcg ctxsw prog */
static const struct gating_desc tu104_blcg_ctxsw_prog[] = {
};

/* blcg fb */
static const struct gating_desc tu104_blcg_fb[] = {
	{.addr = 0x00100d10U, .prod = 0x0000c24aU, .disable = 0x00000000U},
	{.addr = 0x00100d30U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x00100d3cU, .prod = 0x00000242U, .disable = 0x00000000U},
	{.addr = 0x00100d48U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x00100c98U, .prod = 0x00004242U, .disable = 0x00000000U},
	{.addr = 0x001facb0U, .prod = 0x00004242U, .disable = 0x00000000U},
};

/* blcg fifo */
static const struct gating_desc tu104_blcg_fifo[] = {
	{.addr = 0x000026e0U, .prod = 0x0000c242U, .disable = 0x00000000U},
};

/* blcg gr */
static const struct gating_desc tu104_blcg_gr[] = {
	{.addr = 0x004041f0U, .prod = 0x0000c646U, .disable = 0x00000000U},
	{.addr = 0x00409890U, .prod = 0x0000007fU, .disable = 0x00000000U},
	{.addr = 0x004098b0U, .prod = 0x0000007fU, .disable = 0x00000000U},
	{.addr = 0x004078c0U, .prod = 0x00004242U, .disable = 0x00000000U},
	{.addr = 0x00406000U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00405860U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x0040590cU, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00408040U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00407000U, .prod = 0x4000c242U, .disable = 0x00000000U},
	{.addr = 0x00405bf0U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x0041a890U, .prod = 0x0000427fU, .disable = 0x00000000U},
	{.addr = 0x0041a8b0U, .prod = 0x0000007fU, .disable = 0x00000000U},
	{.addr = 0x00418500U, .prod = 0x0000c244U, .disable = 0x00000000U},
	{.addr = 0x00418608U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x00418688U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x00418718U, .prod = 0x00000042U, .disable = 0x00000000U},
	{.addr = 0x00418828U, .prod = 0x00008444U, .disable = 0x00000000U},
	{.addr = 0x00418bbcU, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x00418970U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x00418c70U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00418cf0U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00418d70U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00418f0cU, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00418e0cU, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00419020U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x00419038U, .prod = 0x00000042U, .disable = 0x00000000U},
	{.addr = 0x00418898U, .prod = 0x00004242U, .disable = 0x00000000U},
	{.addr = 0x00419868U, .prod = 0x00008242U, .disable = 0x00000000U},
	{.addr = 0x00419c70U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00419c80U, .prod = 0x00004045U, .disable = 0x00000000U},
	{.addr = 0x00419c88U, .prod = 0x00004045U, .disable = 0x00000000U},
	{.addr = 0x00419c90U, .prod = 0x00000044U, .disable = 0x00000000U},
	{.addr = 0x00419c98U, .prod = 0x00000042U, .disable = 0x00000000U},
	{.addr = 0x00419ca0U, .prod = 0x00000045U, .disable = 0x00000000U},
	{.addr = 0x00419ca8U, .prod = 0x00000044U, .disable = 0x00000000U},
	{.addr = 0x00419cb0U, .prod = 0x00000043U, .disable = 0x00000000U},
	{.addr = 0x00419a40U, .prod = 0x00000242U, .disable = 0x00000000U},
	{.addr = 0x00419a48U, .prod = 0x00000242U, .disable = 0x00000000U},
	{.addr = 0x00419a50U, .prod = 0x00000242U, .disable = 0x00000000U},
	{.addr = 0x00419a58U, .prod = 0x00000242U, .disable = 0x00000000U},
	{.addr = 0x00419a60U, .prod = 0x00000242U, .disable = 0x00000000U},
	{.addr = 0x00419a68U, .prod = 0x00000202U, .disable = 0x00000000U},
	{.addr = 0x00419a78U, .prod = 0x00000242U, .disable = 0x00000000U},
	{.addr = 0x00419a80U, .prod = 0x00000242U, .disable = 0x00000000U},
	{.addr = 0x0041be28U, .prod = 0x00008242U, .disable = 0x00000000U},
	{.addr = 0x0041bfe8U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x0041bed0U, .prod = 0x0000c444U, .disable = 0x00000000U},
	{.addr = 0x00408810U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x00408a80U, .prod = 0x0000c242U, .disable = 0x00000000U},
	{.addr = 0x004089a8U, .prod = 0x0000c242U, .disable = 0x00000000U},
};

/* blcg ltc */
static const struct gating_desc tu104_blcg_ltc[] = {
	{.addr = 0x0017e030U, .prod = 0x00000044U, .disable = 0x00000000U},
	{.addr = 0x0017e040U, .prod = 0x00000044U, .disable = 0x00000000U},
	{.addr = 0x0017e3e0U, .prod = 0x00000044U, .disable = 0x00000000U},
	{.addr = 0x0017e3c8U, .prod = 0x00000044U, .disable = 0x00000000U},
};

/* blcg pwr_csb  */
static const struct gating_desc tu104_blcg_pwr_csb[] = {
	{.addr = 0x00000a70U, .prod = 0x00000045U, .disable = 0x00000000U},
};

/* blcg pmu */
static const struct gating_desc tu104_blcg_pmu[] = {
	{.addr = 0x0010aa70U, .prod = 0x00000045U, .disable = 0x00000000U},
};

/* blcg Xbar */
static const struct gating_desc tu104_blcg_xbar[] = {
	{.addr = 0x0013c820U, .prod = 0x0001004aU, .disable = 0x00000000U},
	{.addr = 0x0013dc04U, .prod = 0x0001004aU, .disable = 0x00000000U},
	{.addr = 0x0013c920U, .prod = 0x0000004aU, .disable = 0x00000000U},
	{.addr = 0x0013cbe0U, .prod = 0x00000042U, .disable = 0x00000000U},
};

/* pg gr */
static const struct gating_desc tu104_pg_gr[] = {
};

/* inline functions */
void tu104_slcg_bus_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_bus) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_bus[i].addr;
			u32 val = prod ? tu104_slcg_bus[i].prod :
					tu104_slcg_bus[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_ce2_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_ce2) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_ce2[i].addr;
			u32 val = prod ? tu104_slcg_ce2[i].prod :
					tu104_slcg_ce2[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_chiplet_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_chiplet) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_chiplet[i].addr;
			u32 val = prod ? tu104_slcg_chiplet[i].prod :
					tu104_slcg_chiplet[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_ctxsw_firmware_load_gating_prod(struct gk20a *g,
	bool prod)
{
	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
	}
}

void tu104_slcg_fb_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_fb) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_fb[i].addr;
			u32 val = prod ? tu104_slcg_fb[i].prod :
					tu104_slcg_fb[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_fifo_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_fifo) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_fifo[i].addr;
			u32 val = prod ? tu104_slcg_fifo[i].prod :
					tu104_slcg_fifo[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void gr_tu104_slcg_gr_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_gr) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_gr[i].addr;
			u32 val = prod ? tu104_slcg_gr[i].prod :
					tu104_slcg_gr[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void ltc_tu104_slcg_ltc_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_ltc) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
	for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_ltc[i].addr;
			u32 val = prod ? tu104_slcg_ltc[i].prod :
					tu104_slcg_ltc[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_perf_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_perf) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_perf[i].addr;
			u32 val = prod ? tu104_slcg_perf[i].prod :
					 tu104_slcg_perf[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_priring_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_priring) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_priring[i].addr;
			u32 val = prod ? tu104_slcg_priring[i].prod :
					 tu104_slcg_priring[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_pwr_csb_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_pwr_csb) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_pwr_csb[i].addr;
			u32 val = prod ? tu104_slcg_pwr_csb[i].prod :
					 tu104_slcg_pwr_csb[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_pmu_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_pmu) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_pmu[i].addr;
			u32 val = prod ? tu104_slcg_pmu[i].prod :
					 tu104_slcg_pmu[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_therm_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_therm) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_therm[i].addr;
			u32 val = prod ? tu104_slcg_therm[i].prod :
					 tu104_slcg_therm[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_slcg_xbar_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_slcg_xbar) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_SLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_slcg_xbar[i].addr;
			u32 val = prod ? tu104_slcg_xbar[i].prod :
					 tu104_slcg_xbar[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_bus_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_bus) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_bus[i].addr;
			u32 val = prod ? tu104_blcg_bus[i].prod :
					 tu104_blcg_bus[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_ce_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_ce) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_ce[i].addr;
			u32 val = prod ? tu104_blcg_ce[i].prod :
					 tu104_blcg_ce[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_ctxsw_firmware_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_ctxsw_prog) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_ctxsw_prog[i].addr;
			u32 val = prod ? tu104_blcg_ctxsw_prog[i].prod :
					 tu104_blcg_ctxsw_prog[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_fb_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_fb) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_fb[i].addr;
			u32 val = prod ? tu104_blcg_fb[i].prod :
					tu104_blcg_fb[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_fifo_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_fifo) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
	for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_fifo[i].addr;
			u32 val = prod ? tu104_blcg_fifo[i].prod :
					 tu104_blcg_fifo[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_gr_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_gr) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_gr[i].addr;
			u32 val = prod ? tu104_blcg_gr[i].prod :
					 tu104_blcg_gr[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_ltc_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_ltc) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_ltc[i].addr;
			u32 val = prod ? tu104_blcg_ltc[i].prod :
					 tu104_blcg_ltc[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_pwr_csb_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_pwr_csb) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_pwr_csb[i].addr;
			u32 val = prod ? tu104_blcg_pwr_csb[i].prod :
					 tu104_blcg_pwr_csb[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_pmu_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_pmu) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_pmu[i].addr;
			u32 val = prod ? tu104_blcg_pmu[i].prod :
					 tu104_blcg_pmu[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void tu104_blcg_xbar_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_blcg_xbar) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_blcg_xbar[i].addr;
			u32 val = prod ? tu104_blcg_xbar[i].prod :
					 tu104_blcg_xbar[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}

void gr_tu104_pg_gr_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = (u32)(sizeof(tu104_pg_gr) / GATING_DESC_SIZE);

	if (nvgpu_is_enabled(g, NVGPU_GPU_CAN_BLCG)) {
		for (i = 0; i < size; i++) {
			u32 reg = tu104_pg_gr[i].addr;
			u32 val = prod ? tu104_pg_gr[i].prod :
					 tu104_pg_gr[i].disable;
			gk20a_writel(g, reg, val);
		}
	}
}
