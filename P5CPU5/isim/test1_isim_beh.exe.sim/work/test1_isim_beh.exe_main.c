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
    work_m_00000000002874029205_1643002060_init();
    work_m_00000000003865352682_3383896982_init();
    work_m_00000000003940740954_1451755364_init();
    work_m_00000000000370666087_3037376393_init();
    work_m_00000000000309681421_4046562011_init();
    work_m_00000000000054929604_2347679131_init();
    work_m_00000000000355460236_2112728383_init();
    work_m_00000000000618424680_3363942390_init();
    work_m_00000000001826073033_3146453351_init();
    work_m_00000000004101309476_0742349510_init();
    work_m_00000000003512744835_1221241088_init();
    work_m_00000000001702805833_2725559894_init();
    work_m_00000000001589143181_2589504913_init();
    work_m_00000000003452064621_0010801604_init();
    work_m_00000000000935519362_2727240708_init();
    work_m_00000000003907403977_2899240863_init();
    work_m_00000000000116679876_3701740304_init();
    work_m_00000000003746348353_3027548060_init();
    work_m_00000000001747014023_1452706411_init();
    work_m_00000000001210352275_2291385546_init();
    work_m_00000000002132177050_2364370701_init();
    work_m_00000000000645359717_3877310806_init();
    work_m_00000000002047498008_2221974671_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_2221974671");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
