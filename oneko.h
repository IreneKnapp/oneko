/*
 *	oneko  -  X11 $@G-(J
 *
 *	$Header: /home/sun/unix/kato/xsam/oneko/oneko.h,v 1.4 90/10/18 16:52:57 kato Exp Locker: kato $
 */

/*
 *	$@%$%s%/%k!<%I%U%!%$%k(J
 */

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/extensions/shape.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <signal.h>
#include <math.h>
#include <sys/time.h>


/*
 *	$@%+!<%=%k%S%C%H%^%C%W%U%!%$%k$NFI$_9~$_(J
 */

#include "cursors/cursor.include"

/*
 *	$@IaDL$NG-MQ%S%C%H%^%C%W%U%!%$%k$NFI$_9~$_(J
 *      These include files in the directories noted.
 *      These are the bitmaps.
 */

#include "bitmaps/neko/neko.include"
#include "bitmaps/tora/tora.include"
#include "bitmaps/dog/dog.include"
#include "bitmaps/bsd/bsd.include"
#include "bitmaps/sakura/sakura.include"
#include "bitmaps/tomoyo/tomoyo.include"

/* These are the bitmasks that allow the use of the shape extension. */

#include "bitmasks/neko/neko.mask.include"
#include "bitmasks/dog/dog.mask.include"
#include "bitmasks/bsd/bsd.mask.include"
#include "bitmasks/sakura/sakura.mask.include"
#include "bitmasks/tomoyo/tomoyo.mask.include"

/*
 *	$@Dj?tDj5A(J
 */

#define	BITMAP_WIDTH		32	/* $@#1%-%c%i%/%?$NI}(J ($@%T%/%;%k(J) */
#define	BITMAP_HEIGHT		32	/* $@#1%-%c%i%/%?$N9b$5(J ($@%T%/%;%k(J) */

#define	AVAIL_KEYBUF		255
#define	MAX_TICK		9999		/* Odd Only! */

#define	DEFAULT_FOREGROUND	"black"		/* $@%U%)%"%0%i%&%s%I%+%i!<(J */
#define	DEFAULT_BACKGROUND	"white"		/* $@%P%C%/%0%i%&%s%I%+%i!<(J */

/*
 *	$@G-$N>uBVDj?t(J
 */

#define	NEKO_STOP		0	/* $@N)$A;_$^$C$?(J */
#define	NEKO_JARE		1	/* $@4i$r@v$C$F$$$k(J */
#define	NEKO_KAKI		2	/* $@F,$rA_$$$F$$$k(J */
#define	NEKO_AKUBI		3	/* $@$"$/$S$r$7$F$$$k(J */
#define	NEKO_SLEEP		4	/* $@?2$F$7$^$C$?(J */
#define	NEKO_AWAKE		5	/* $@L\$,3P$a$?(J */
#define	NEKO_U_MOVE		6	/* $@>e$K0\F0Cf(J */
#define	NEKO_D_MOVE		7	/* $@2<$K0\F0Cf(J */
#define	NEKO_L_MOVE		8	/* $@:8$K0\F0Cf(J */
#define	NEKO_R_MOVE		9	/* $@1&$K0\F0Cf(J */
#define	NEKO_UL_MOVE		10	/* $@:8>e$K0\F0Cf(J */
#define	NEKO_UR_MOVE		11	/* $@1&>e$K0\F0Cf(J */
#define	NEKO_DL_MOVE		12	/* $@:82<$K0\F0Cf(J */
#define	NEKO_DR_MOVE		13	/* $@1&2<$K0\F0Cf(J */
#define	NEKO_U_TOGI		14	/* $@>e$NJI$r0z$CA_$$$F$$$k(J */
#define	NEKO_D_TOGI		15	/* $@2<$NJI$r0z$CA_$$$F$$$k(J */
#define	NEKO_L_TOGI		16	/* $@:8$NJI$r0z$CA_$$$F$$$k(J */
#define	NEKO_R_TOGI		17	/* $@1&$NJI$r0z$CA_$$$F$$$k(J */

/*
 *	$@G-$N%"%K%a!<%7%g%s7+$jJV$72s?t(J
 */

#define	NEKO_STOP_TIME		4
#define	NEKO_JARE_TIME		10
#define	NEKO_KAKI_TIME		4
#define	NEKO_AKUBI_TIME		6	/* $@$b$H$b$H#3$@$C$?$1$ID9$$J}$,$$$$(J */
#define	NEKO_AWAKE_TIME		3
#define	NEKO_TOGI_TIME		10

#define	PI_PER8			((double)3.1415926535/(double)8)

#define	MAXDISPLAYNAME		(64 + 5)	/* $@%G%#%9%W%l%$L>$ND9$5(J */

#define	NOTDEFINED		(-1)

/*
 *	$@%^%/%mDj5A(J
 */

#define IsTrue(str)     (strcmp((str), "true") == 0)
