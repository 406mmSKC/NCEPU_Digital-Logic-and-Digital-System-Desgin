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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/New Folder/clock/clock.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_0213060440_3212880686_p_0(char *t0)
{
    char t8[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;

LAB0:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2660);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 1052U);
    t9 = *((char **)t4);
    t4 = (t0 + 4480U);
    t10 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t8, t9, t4, (unsigned char)3);
    t11 = (t8 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (26U != t13);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 2728);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 26U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4480U);
    t5 = (t0 + 4597);
    t10 = (t8 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 25;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t20 = (25 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t12;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t8);
    if (t1 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4480U);
    t5 = (t0 + 4623);
    t10 = (t8 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 25;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t20 = (25 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t12;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t8);
    if (t1 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(26U, t13, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(25, ng0);
    t11 = (t0 + 2764);
    t15 = (t11 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);
    goto LAB11;

LAB13:    xsi_set_current_line(28, ng0);
    t11 = (t0 + 4649);
    t16 = (t0 + 2728);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t21 = *((char **)t19);
    memcpy(t21, t11, 26U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2764);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

}

static void work_a_0213060440_3212880686_p_1(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    char *t17;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 936U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    t1 = (t0 + 2800);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1408U);
    t2 = *((char **)t1);
    t1 = (t0 + 2836);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 2668);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 4675);
    t6 = (t0 + 1408U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 4U);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 4679);
    t5 = (t0 + 1476U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 4U);
    goto LAB3;

LAB5:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1236U);
    t6 = *((char **)t2);
    t2 = (t0 + 4512U);
    t7 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t10, t6, t2, (unsigned char)3);
    t11 = (t0 + 1476U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t10 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    memcpy(t11, t7, t15);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    t1 = (t0 + 4528U);
    t5 = (t0 + 4683);
    t7 = (t10 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t16 = (3 - 0);
    t14 = (t16 * 1);
    t14 = (t14 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t14;
    t3 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t10);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB6;

LAB8:    t2 = (t0 + 960U);
    t5 = *((char **)t2);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(43, ng0);
    t11 = (t0 + 4687);
    t13 = (t0 + 1476U);
    t17 = *((char **)t13);
    t13 = (t17 + 0);
    memcpy(t13, t11, 4U);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4496U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t10, t2, t1, (unsigned char)3);
    t6 = (t0 + 1408U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t11 = (t10 + 12U);
    t14 = *((unsigned int *)t11);
    t15 = (1U * t14);
    memcpy(t6, t5, t15);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1408U);
    t2 = *((char **)t1);
    t1 = (t0 + 4528U);
    t5 = (t0 + 4691);
    t7 = (t10 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t16 = (3 - 0);
    t14 = (t16 * 1);
    t14 = (t14 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t14;
    t3 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t10);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(46, ng0);
    t11 = (t0 + 4695);
    t13 = (t0 + 1408U);
    t17 = *((char **)t13);
    t13 = (t17 + 0);
    memcpy(t13, t11, 4U);
    goto LAB15;

}

static void work_a_0213060440_3212880686_p_2(char *t0)
{
    char t32[16];
    char t35[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t33;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 4699);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB14:    t5 = (t0 + 4703);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB15:    t8 = (t0 + 4707);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB16:    t11 = (t0 + 4711);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB17:    t14 = (t0 + 4715);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB18:    t17 = (t0 + 4719);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB19:    t20 = (t0 + 4723);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB20:    t23 = (t0 + 4727);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB21:    t26 = (t0 + 4731);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB22:    t29 = (t0 + 4735);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB23:
LAB13:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4809);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB45;

LAB46:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t1 = (t0 + 2676);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(57, ng0);
    t33 = (t0 + 4739);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 0;
    t37 = (t36 + 4U);
    *((int *)t37) = 6;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (6 - 0);
    t39 = (t38 * 1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t33, t35);
    t40 = (t32 + 12U);
    t39 = *((unsigned int *)t40);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB25;

LAB26:    t43 = (t0 + 2872);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    memcpy(t47, t37, 7U);
    xsi_driver_first_trans_fast_port(t43);
    goto LAB2;

LAB4:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4746);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB27;

LAB28:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4753);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB29;

LAB30:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4760);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB31;

LAB32:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4767);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB33;

LAB34:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB8:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4774);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB35;

LAB36:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB9:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4781);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB37;

LAB38:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB10:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4788);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB39;

LAB40:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB11:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4795);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB41;

LAB42:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB12:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4802);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB43;

LAB44:    t8 = (t0 + 2872);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB24:;
LAB25:    xsi_size_not_matching(7U, t41, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(7U, t41, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(7U, t41, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(7U, t41, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(7U, t41, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(7U, t41, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(7U, t41, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(7U, t41, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(7U, t41, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(7U, t41, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(7U, t41, 0);
    goto LAB46;

}

static void work_a_0213060440_3212880686_p_3(char *t0)
{
    char t32[16];
    char t35[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t33;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4816);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB14:    t5 = (t0 + 4820);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB15:    t8 = (t0 + 4824);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB16:    t11 = (t0 + 4828);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB17:    t14 = (t0 + 4832);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB18:    t17 = (t0 + 4836);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB19:    t20 = (t0 + 4840);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB20:    t23 = (t0 + 4844);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB21:    t26 = (t0 + 4848);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB22:    t29 = (t0 + 4852);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB23:
LAB13:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 4926);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB45;

LAB46:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t1 = (t0 + 2684);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(73, ng0);
    t33 = (t0 + 4856);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 0;
    t37 = (t36 + 4U);
    *((int *)t37) = 6;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (6 - 0);
    t39 = (t38 * 1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t33, t35);
    t40 = (t32 + 12U);
    t39 = *((unsigned int *)t40);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB25;

LAB26:    t43 = (t0 + 2908);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    memcpy(t47, t37, 7U);
    xsi_driver_first_trans_fast_port(t43);
    goto LAB2;

LAB4:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4863);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB27;

LAB28:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 4870);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB29;

LAB30:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB6:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 4877);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB31;

LAB32:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB7:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 4884);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB33;

LAB34:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB8:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4891);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB35;

LAB36:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB9:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 4898);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB37;

LAB38:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB10:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4905);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB39;

LAB40:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB11:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4912);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB41;

LAB42:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB12:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 4919);
    t3 = (t35 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 0;
    t5 = (t3 + 4U);
    *((int *)t5) = 6;
    t5 = (t3 + 8U);
    *((int *)t5) = 1;
    t4 = (6 - 0);
    t39 = (t4 * 1);
    t39 = (t39 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t39;
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t1, t35);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t41 = (1U * t39);
    t42 = (7U != t41);
    if (t42 == 1)
        goto LAB43;

LAB44:    t8 = (t0 + 2908);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB24:;
LAB25:    xsi_size_not_matching(7U, t41, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(7U, t41, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(7U, t41, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(7U, t41, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(7U, t41, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(7U, t41, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(7U, t41, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(7U, t41, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(7U, t41, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(7U, t41, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(7U, t41, 0);
    goto LAB46;

}


extern void work_a_0213060440_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0213060440_3212880686_p_0,(void *)work_a_0213060440_3212880686_p_1,(void *)work_a_0213060440_3212880686_p_2,(void *)work_a_0213060440_3212880686_p_3};
	xsi_register_didat("work_a_0213060440_3212880686", "isim/test_isim_beh.exe.sim/work/a_0213060440_3212880686.didat");
	xsi_register_executes(pe);
}
