/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
*/

#ifndef __DISP_EVENT_H__
#define __DISP_EVENT_H__

enum DISP_PATH_EVENT {
	DISP_PATH_EVENT_FRAME_DONE = 0,
	DISP_PATH_EVENT_FRAME_START,
	DISP_PATH_EVENT_FRAME_REG_UPDATE,
	DISP_PATH_EVENT_FRAME_TARGET_LINE,
	DISP_PATH_EVENT_FRAME_COMPLETE,
	/* 5 */
	DISP_PATH_EVENT_FRAME_STOP,
	DISP_PATH_EVENT_IF_CMD_DONE,
	DISP_PATH_EVENT_IF_VSYNC,
	DISP_PATH_EVENT_TRIGGER,
	DISP_PATH_EVENT_AAL_OUT_END_FRAME,
	/* 10 */
	DISP_PATH_EVENT_DELAYED_TRIGGER_33ms,
	DISP_PATH_EVENT_OD_TRIGGER,
	DISP_PATH_EVENT_NUM,
	DISP_PATH_EVENT_NONE = 0xff,
};

#endif
