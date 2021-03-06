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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003490507747_1643002060_init();
    work_m_00000000003865352682_3383896982_init();
    work_m_00000000003940740954_1451755364_init();
    work_m_00000000000370666087_3037376393_init();
    work_m_00000000000969697345_4046562011_init();
    work_m_00000000003875835540_3092946469_init();
    work_m_00000000001166809212_2112728383_init();
    work_m_00000000000042338064_3146453351_init();
    work_m_00000000001434598131_2347679131_init();
    work_m_00000000003912860539_3363942390_init();
    work_m_00000000002096387383_0742349510_init();
    work_m_00000000002590012398_2725559894_init();
    work_m_00000000000734116876_1221241088_init();
    work_m_00000000002665153752_2589504913_init();
    work_m_00000000001835385559_0010801604_init();
    work_m_00000000003897066153_2727240708_init();
    work_m_00000000003574416961_3701740304_init();
    work_m_00000000000968742869_3027548060_init();
    work_m_00000000000054603305_2624096694_init();
    work_m_00000000003841613936_1452706411_init();
    work_m_00000000003118997981_2291385546_init();
    work_m_00000000002840283252_2364370701_init();
    work_m_00000000000147722601_3877310806_init();
    work_m_00000000002047498008_2221974671_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_2221974671");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
