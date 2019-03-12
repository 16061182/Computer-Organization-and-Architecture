/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/ISEproject/P6CPU4/rf.v";
static int ng1[] = {4, 0};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "%d@%h: $%d <= %h";



static void Cont_35_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 5568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5440);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_40_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB6:    xsi_set_current_line(42, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 3048);
    t16 = (t0 + 3048);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3208);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Cont_46_2(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1528U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 21);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 21);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 31U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 31U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 5, 2);
    t22 = (t0 + 5632);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 5456);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_47_3(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1528U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 16);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 16);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 31U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 31U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 5, 2);
    t22 = (t0 + 5696);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 5472);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_49_4(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t53[8];
    char t84[8];
    char t108[8];
    char t109[8];
    char t125[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    int t124;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5488);
    *((int *)t2) = 1;
    t3 = (t0 + 5152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);

LAB16:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t2) != 0)
        goto LAB19;

LAB20:    t5 = (t13 + 4);
    t27 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t5);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB21;

LAB22:    memcpy(t53, t13, 8);

LAB23:    t26 = (t53 + 4);
    t78 = *((unsigned int *)t26);
    t79 = (~(t78));
    t80 = *((unsigned int *)t53);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB35;

LAB36:
LAB37:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t12 = ((char*)((ng2)));
    t14 = (t0 + 3048);
    t17 = (t0 + 3048);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3208);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB17:    *((unsigned int *)t13) = 1;
    goto LAB20;

LAB19:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB21:    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t14 = (t12 + 4);
    t17 = (t11 + 4);
    t34 = *((unsigned int *)t12);
    t37 = *((unsigned int *)t11);
    t38 = (t34 ^ t37);
    t39 = *((unsigned int *)t14);
    t40 = *((unsigned int *)t17);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t14);
    t44 = *((unsigned int *)t17);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB25;

LAB24:    if (t45 != 0)
        goto LAB26;

LAB27:    memset(t16, 0, 8);
    t19 = (t15 + 4);
    t48 = *((unsigned int *)t19);
    t49 = (~(t48));
    t50 = *((unsigned int *)t15);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t19) != 0)
        goto LAB30;

LAB31:    t54 = *((unsigned int *)t13);
    t55 = *((unsigned int *)t16);
    t56 = (t54 & t55);
    *((unsigned int *)t53) = t56;
    t21 = (t13 + 4);
    t22 = (t16 + 4);
    t23 = (t53 + 4);
    t57 = *((unsigned int *)t21);
    t58 = *((unsigned int *)t22);
    t59 = (t57 | t58);
    *((unsigned int *)t23) = t59;
    t60 = *((unsigned int *)t23);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB23;

LAB25:    *((unsigned int *)t15) = 1;
    goto LAB27;

LAB26:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t16) = 1;
    goto LAB31;

LAB30:    t20 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB31;

LAB32:    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t23);
    *((unsigned int *)t53) = (t62 | t63);
    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t64 = *((unsigned int *)t13);
    t65 = (~(t64));
    t66 = *((unsigned int *)t24);
    t67 = (~(t66));
    t68 = *((unsigned int *)t16);
    t69 = (~(t68));
    t70 = *((unsigned int *)t25);
    t71 = (~(t70));
    t28 = (t65 & t67);
    t31 = (t69 & t71);
    t72 = (~(t28));
    t73 = (~(t31));
    t74 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t74 & t72);
    t75 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t72);
    t77 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t77 & t73);
    goto LAB34;

LAB35:    xsi_set_current_line(56, ng0);

LAB38:    xsi_set_current_line(57, ng0);
    t29 = (t0 + 2008U);
    t83 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t84, 0, 8);
    t85 = (t83 + 4);
    t86 = (t29 + 4);
    t87 = *((unsigned int *)t83);
    t88 = *((unsigned int *)t29);
    t89 = (t87 ^ t88);
    t90 = *((unsigned int *)t85);
    t91 = *((unsigned int *)t86);
    t92 = (t90 ^ t91);
    t93 = (t89 | t92);
    t94 = *((unsigned int *)t85);
    t95 = *((unsigned int *)t86);
    t96 = (t94 | t95);
    t97 = (~(t96));
    t98 = (t93 & t97);
    if (t98 != 0)
        goto LAB40;

LAB39:    if (t96 != 0)
        goto LAB41;

LAB42:    t100 = (t84 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t84);
    t104 = (t103 & t102);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB37;

LAB40:    *((unsigned int *)t84) = 1;
    goto LAB42;

LAB41:    t99 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(57, ng0);

LAB46:    xsi_set_current_line(58, ng0);
    t106 = (t0 + 2168U);
    t107 = *((char **)t106);
    t106 = (t0 + 3048);
    t110 = (t0 + 3048);
    t111 = (t110 + 72U);
    t112 = *((char **)t111);
    t113 = (t0 + 3048);
    t114 = (t113 + 64U);
    t115 = *((char **)t114);
    t116 = (t0 + 2008U);
    t117 = *((char **)t116);
    xsi_vlog_generic_convert_array_indices(t108, t109, t112, t115, 2, 1, t117, 5, 2);
    t116 = (t108 + 4);
    t118 = *((unsigned int *)t116);
    t32 = (!(t118));
    t119 = (t109 + 4);
    t120 = *((unsigned int *)t119);
    t35 = (!(t120));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(59, ng0);
    t2 = xsi_vlog_time(t125, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2648U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t5 = *((char **)t3);
    t3 = (t0 + 2168U);
    t11 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t125, 64, (char)118, t4, 32, (char)118, t5, 5, (char)118, t11, 32);
    goto LAB45;

LAB47:    t121 = *((unsigned int *)t108);
    t122 = *((unsigned int *)t109);
    t123 = (t121 - t122);
    t124 = (t123 + 1);
    xsi_vlogvar_wait_assign_value(t106, t107, 0, *((unsigned int *)t109), t124, 0LL);
    goto LAB48;

}


extern void work_m_00000000003703570860_2347679131_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Initial_40_1,(void *)Cont_46_2,(void *)Cont_47_3,(void *)Always_49_4};
	xsi_register_didat("work_m_00000000003703570860_2347679131", "isim/tb_isim_beh.exe.sim/work/m_00000000003703570860_2347679131.didat");
	xsi_register_executes(pe);
}
