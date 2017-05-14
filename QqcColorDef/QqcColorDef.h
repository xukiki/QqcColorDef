//
//  QqcColorDef.h
//  QqcBaseFramework
//
//  Created by qiuqinchuan on 15/2/3.
//  Copyright (c) 2015年 Qqc. All rights reserved.
//

#ifndef QqcBaseFramework_QqcColorDef_h
#define QqcBaseFramework_QqcColorDef_h


#define color_rgb_a_qqc(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)/1]
#define color_rgb_qqc(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define color_from_rgb_qqc(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

//颜色定义
#define color_929292_qqc color_from_rgb_qqc(0x929292)
#define color_f8f8f8_qqc color_from_rgb_qqc(0xf8f8f8)
#define color_bbbbbb_qqc color_from_rgb_qqc(0xbbbbbb)
#define color_6b6b6b_qqc color_from_rgb_qqc(0x6b6b6b)
#define color_64c277_qqc color_from_rgb_qqc(0x64c277)
#define color_00b0f6_qqc color_from_rgb_qqc(0x00b0f6)
#define color_dedede_qqc color_from_rgb_qqc(0xdedede)
#define color_f7f7f7_qqc color_from_rgb_qqc(0xf7f7f7)
#define color_f96b53_qqc color_from_rgb_qqc(0xf96b53)
#define color_d6503a_qqc color_from_rgb_qqc(0xd6503a)
#define color_1a7fee_qqc color_from_rgb_qqc(0x1a7fee)
#define color_54badb_qqc color_from_rgb_qqc(0x54badb)
#define color_009cda_qqc color_from_rgb_qqc(0x009cda)
#define color_5fcbef_qqc color_from_rgb_qqc(0x5fcbef)
#define color_197fee_qqc color_from_rgb_qqc(0x197fee)
#define color_f0f0f0_qqc color_from_rgb_qqc(0xf0f0f0)
#define color_fef998_qqc color_from_rgb_qqc(0xfef998)
#define color_ff2400_qqc color_from_rgb_qqc(0xff2400)
#define color_606060_qqc color_from_rgb_qqc(0x606060)
#define color_888888_qqc color_from_rgb_qqc(0x888888)
#define color_00abb7_qqc color_from_rgb_qqc(0x00abb7)
#define color_00c1c3_qqc color_from_rgb_qqc(0x00c1c3)
#define color_0270cc_qqc color_from_rgb_qqc(0x0270cc)
#define color_0098ff_qqc color_from_rgb_qqc(0x0098ff)
#define color_00beff_qqc color_from_rgb_qqc(0x00beff)
#define color_1a80ec_qqc color_from_rgb_qqc(0x1a80ec)
#define color_0685ce_qqc color_from_rgb_qqc(0x0685ce)
#define color_00baff_qqc color_from_rgb_qqc(0x00baff)
#define color_e6faff_qqc color_from_rgb_qqc(0xe6faff)
#define color_eb8172_qqc color_from_rgb_qqc(0xeb8172)
#define color_fa6468_qqc color_from_rgb_qqc(0xfa6468)
#define color_26ad47_qqc color_from_rgb_qqc(0x26ad47)
#define color_7CCC5C_qqc color_from_rgb_qqc(0x7ccc5c)
#define color_7f70ed_qqc color_from_rgb_qqc(0x7f70ed)
#define color_67ade4_qqc color_from_rgb_qqc(0x67ade4)
#define color_cc6eff_qqc color_from_rgb_qqc(0xcc6eff)
#define color_5a5a5a_qqc color_from_rgb_qqc(0x5a5a5a)
#define color_00beff_qqc color_from_rgb_qqc(0x00beff)
#define color_dbdbdb_qqc color_from_rgb_qqc(0xDBDBDB)
#define color_fbfbfb_qqc color_from_rgb_qqc(0xFBFBFB)
#define color_acacac_qqc color_from_rgb_qqc(0xacacac)
#define color_efefef_qqc color_from_rgb_qqc(0xefefef)
#define color_e7e7e7_qqc color_from_rgb_qqc(0xe7e7e7)
#define color_fe865f_qqc color_from_rgb_qqc(0xFE865F)
#define color_01beff_qqc color_from_rgb_qqc(0x01beff)
#define color_ff8560_qqc color_from_rgb_qqc(0xff8560)
#define color_7dcb5d_qqc color_from_rgb_qqc(0x7dcb5d)
#define color_fa6368_qqc color_from_rgb_qqc(0xfa6368)
#define color_cc6dff_qqc color_from_rgb_qqc(0xcc6dff)
#define color_fa6469_qqc color_from_rgb_qqc(0xfa6469)
#define color_ffff00_qqc color_from_rgb_qqc(0xffff00)
#define color_ffff00_qqc color_from_rgb_qqc(0xffff00)
#define color_fc8473_qqc color_from_rgb_qqc(0xfc8473)
#define color_6d5bed_qqc color_from_rgb_qqc(0x6d5bed)
#define color_e04243_qqc color_from_rgb_qqc(0xe04243)
#define color_5bafeb_qqc color_from_rgb_qqc(0x5bafeb)
#define color_c672fb_qqc color_from_rgb_qqc(0xc672fb)
#define color_ec5ba0_qqc color_from_rgb_qqc(0xec5ba0)
#define color_ecab5b_qqc color_from_rgb_qqc(0xecab5b)
#define color_46bd63_qqc color_from_rgb_qqc(0x46bd63)
#define color_f9fafe_qqc color_from_rgb_qqc(0xf9fafe)
#define color_3cb87a_qqc color_from_rgb_qqc(0x3cb87a)
#define color_278fe3_qqc color_from_rgb_qqc(0x278fe3)
#define color_ff0000_qqc color_from_rgb_qqc(0xff0000)
#define color_00ff00_qqc color_from_rgb_qqc(0x00ff00)
#define color_0000ff_qqc color_from_rgb_qqc(0x0000ff)

#define color_000000_qqc color_from_rgb_qqc(0x000000)
#define color_ffffff_qqc color_from_rgb_qqc(0xffffff)
#define color_5e9eee_qqc color_from_rgb_qqc(0x5e9eee)
#define color_b9d3f4_qqc color_from_rgb_qqc(0xb9d3f4)
#define color_e8e8e8_qqc color_from_rgb_qqc(0xe8e8e8)
#define color_eff5fd_qqc color_from_rgb_qqc(0xeff5fd)
#define color_666666_qqc color_from_rgb_qqc(0x666666)
#define color_999999_qqc color_from_rgb_qqc(0x999999)
#define color_f28638_qqc color_from_rgb_qqc(0xf28638)
#define color_333333_qqc color_from_rgb_qqc(0x333333)
#define color_f3f3f3_qqc color_from_rgb_qqc(0xf3f3f3)
#define color_cccccc_qqc color_from_rgb_qqc(0xcccccc)
#define color_eeeeee_qqc color_from_rgb_qqc(0xeeeeee)
#define color_cecece_qqc color_from_rgb_qqc(0xcecece)
#define color_dedede_qqc color_from_rgb_qqc(0xdedede)
#define color_bad2f7_qqc color_from_rgb_qqc(0xbad2f7)
#define color_f9f9f9_qqc color_from_rgb_qqc(0xf9f9f9)
#define color_7bbc2c_qqc color_from_rgb_qqc(0x7bbc2c)
#define color_46c01b_qqc color_from_rgb_qqc(0x46c01b)
#define color_393a3f_qqc color_from_rgb_qqc(0x393a3f)
#define color_49484b_qqc color_from_rgb_qqc(0x49484b)
#define color_dddddd_qqc color_from_rgb_qqc(0xdddddd)

#define color_f89090_qqc color_from_rgb_qqc(0xf89090)
#define color_f7bc5f_qqc color_from_rgb_qqc(0xf7bc5f)
#define color_ffa42f_qqc color_from_rgb_qqc(0xffa42f)

#define color_theme_app   color_from_rgb_qqc(0xff0000)


//...颜色定义 end...


#endif
