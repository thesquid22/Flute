#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_link_boy.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

static Vtx gLinkAdultVtx_02E120[38];
static Vtx gLinkAdultVtx_02E7E0[114];
static Vtx gLinkAdultVtx_033760[54];
static Vtx gLinkAdultVtx_0340A0[146];

u64 gLinkAdultBirthmark[] = {
#include "assets/objects/object_link_boy/birthmark.ci8.inc.c"
};

u64 gLinkAdultEyesOpenTex[] = {
#include "assets/objects/object_link_boy/eyes_open.ci8.inc.c"
};

u64 gLinkAdultEyesHalfTex[] = {
#include "assets/objects/object_link_boy/eyes_half.ci8.inc.c"
};

u64 gLinkAdultEyesClosedfTex[] = {
#include "assets/objects/object_link_boy/eyes_closed.ci8.inc.c"
};

u64 gLinkAdultEyesLeftTex[] = {
#include "assets/objects/object_link_boy/eyes_left.ci8.inc.c"
};

u64 gLinkAdultEyesRightTex[] = {
#include "assets/objects/object_link_boy/eyes_right.ci8.inc.c"
};

u64 gLinkAdultEyesWideTex[] = {
#include "assets/objects/object_link_boy/eyes_wide.ci8.inc.c"
};

u64 gLinkAdultEyesDownTex[] = {
#include "assets/objects/object_link_boy/eyes_down.ci8.inc.c"
};

u64 gLinkAdultEyesWincingTex[] = {
#include "assets/objects/object_link_boy/eyes_wincing.ci8.inc.c"
};

u64 gLinkAdultMouthClosedTex[] = {
#include "assets/objects/object_link_boy/mouth_closed.ci8.inc.c"
};

u64 gLinkAdultMouthHalfTex[] = {
#include "assets/objects/object_link_boy/mouth_half.ci8.inc.c"
};

u64 gLinkAdultMouthOpenTex[] = {
#include "assets/objects/object_link_boy/mouth_open.ci8.inc.c"
};

u64 gLinkAdultMouthSmileTex[] = {
#include "assets/objects/object_link_boy/mouth_smile.ci8.inc.c"
};

u64 gLinkAdultEarTex[] = {
#include "assets/objects/object_link_boy/ear.ci8.inc.c"
};

u64 gLinkAdultNoseTex[] = {
#include "assets/objects/object_link_boy/nose.ci8.inc.c"
};

u64 gLinkAdultNose2Tex[] = {
#include "assets/objects/object_link_boy/nose2.ci8.inc.c"
};

u64 gLinkAdultUnusedHandTex[] = {
#include "assets/objects/object_link_boy/unused_hand.ci8.inc.c"
};

u64 object_link_boyTLUT_005400[] = {
#include "assets/objects/object_link_boy/object_link_boyTLUT_005400.rgba16.inc.c"
};

u64 gLinkAdultBootFarTex[] = {
#include "assets/objects/object_link_boy/boot_far.ci8.inc.c"
};

u64 object_link_boyTLUT_005800[] = {
#include "assets/objects/object_link_boy/object_link_boyTLUT_005800.rgba16.inc.c"
};

u64 object_link_boyTLUT_005A00[] = {
#include "assets/objects/object_link_boy/object_link_boyTLUT_005A00.rgba16.inc.c"
};

u64 gLinkAdultHeadTLUT[] = {
#include "assets/objects/object_link_boy/head_tlut.rgba16.inc.c"
};

u64 gLinkAdultTlut_005E00[] = {
#include "assets/objects/object_link_boy/tlut_5E00.rgba16.inc.c"
};

u64 gLinkAdultBootTex[] = {
#include "assets/objects/object_link_boy/boot.ci8.inc.c"
};

u64 gLinkAdultLegTex[] = {
#include "assets/objects/object_link_boy/leg.ci8.inc.c"
};

u64 gLinkAdultBoot2Tex[] = {
#include "assets/objects/object_link_boy/boot_2.ci8.inc.c"
};

u64 gLinkAdultBootBuckleTex[] = {
#include "assets/objects/object_link_boy/boot_buckle.ci8.inc.c"
};

u64 gLinkAdultSkirtAndHatTex[] = {
#include "assets/objects/object_link_boy/skirt_and_hat.rgba16.inc.c"
};

u64 gLinkAdultBeltTex[] = {
#include "assets/objects/object_link_boy/belt.ci8.inc.c"
};

u64 gLinkAdultBeltClaspTex[] = {
#include "assets/objects/object_link_boy/belt_clasp.ci8.inc.c"
};

u64 gLinkAdultEarringTex[] = {
#include "assets/objects/object_link_boy/earring.ia16.inc.c"
};

u64 gLinkAdultNeckTex[] = {
#include "assets/objects/object_link_boy/neck.ci8.inc.c"
};

u64 gLinkAdultUnusedGauntlet1Tex[] = {
#include "assets/objects/object_link_boy/unused_gauntlet_1.ci8.inc.c"
};

u64 gLinkAdultUnusedGauntlet2Tex[] = {
#include "assets/objects/object_link_boy/unused_gauntlet_2.ci8.inc.c"
};

u64 gLinkAdultArmGauntletTex[] = {
#include "assets/objects/object_link_boy/arm_gauntlet.ci8.inc.c"
};

u64 gLinkAdultUnusedSheathTex[] = {
#include "assets/objects/object_link_boy/unused_sheath.ci8.inc.c"
};

u64 gLinkAdultUnusedSheathBandTex[] = {
#include "assets/objects/object_link_boy/unused_sheat_band.ci8.inc.c"
};

u64 gLinkAdultUnusedSwordPommelTex[] = {
#include "assets/objects/object_link_boy/unused_sword_pommel.ci8.inc.c"
};

u64 gLinkAdultUnusedSwordGuardTex[] = {
#include "assets/objects/object_link_boy/unused_sword_guard.ci8.inc.c"
};

u64 gLinkAdultUnusedSwordEmblemTex[] = {
#include "assets/objects/object_link_boy/unused_sword_emblem.ci8.inc.c"
};

u64 gLinkAdultTunicTex[] = {
#include "assets/objects/object_link_boy/tunic.ci8.inc.c"
};

u64 gLinkAdultCollarTex[] = {
#include "assets/objects/object_link_boy/collar.rgba16.inc.c"
};

u64 gLinkAdultGauntletPlate1Tex[] = {
#include "assets/objects/object_link_boy/gauntlet_plate_1.rgba16.inc.c"
};

u64 gLinkAdultGauntletPlate2Tex[] = {
#include "assets/objects/object_link_boy/gauntlet_plate_2.rgba16.inc.c"
};

u64 gLinkAdultHoverBootsHeelTex[] = {
#include "assets/objects/object_link_boy/hover_boots_heel.rgba16.inc.c"
};

u64 gLinkAdultHoverBootsJetTex[] = {
#include "assets/objects/object_link_boy/hover_boots_jet.rgba16.inc.c"
};

u64 gLinkAdultHoverBootsFeatherTex[] = {
#include "assets/objects/object_link_boy/hover_boots_feather.rgba16.inc.c"
};

u64 gLinkAdultMirrorShieldLowerDesignTex[] = {
#include "assets/objects/object_link_boy/mirror_shield_lower_design.ia16.inc.c"
};

u64 gLinkAdultMirrorShieldUpperDesignTex[] = {
#include "assets/objects/object_link_boy/mirror_shield_upper_design.ia8.inc.c"
};

u64 gLinkAdultHookshotMetalTex[] = {
#include "assets/objects/object_link_boy/hookshot_metal.rgba16.inc.c"
};

u64 gLinkAdultBowBodyTex[] = {
#include "assets/objects/object_link_boy/bow_body.i8.inc.c"
};

u64 object_link_boyTLUT_00CB40[] = {
#include "assets/objects/object_link_boy/object_link_boyTLUT_00CB40.rgba16.inc.c"
};

u8 object_link_boy_unaccounted_00CD40[] = {
    0x00, 0x00, 0x01, 0x01, 0x00, 0x29, 0x00, 0x8A, 
};

u64 object_link_boyTLUT_00CD48[] = {
#include "assets/objects/object_link_boy/object_link_boyTLUT_00CD48.rgba16.inc.c"
};

u8 object_link_boy_unaccounted_00CF48[] = {
    0x00, 0x00, 0x02, 0x01, 0x86, 0x08, 0x02, 0xFF, 
};

u64 object_link_boyTLUT_00CF50[] = {
#include "assets/objects/object_link_boy/object_link_boyTLUT_00CF50.rgba16.inc.c"
};

u64 object_link_boyTLUT_00D078[] = {
#include "assets/objects/object_link_boy/object_link_boyTLUT_00D078.rgba16.inc.c"
};

u64 gLinkAdultSwordPommelTex[] = {
#include "assets/objects/object_link_boy/sword_pommel.ci8.inc.c"
};

u64 gLinkAdultIronBootTex[] = {
#include "assets/objects/object_link_boy/iron_boot.ci8.inc.c"
};

u64 gLinkAdultDefaultGauntlet1Tex[] = {
#include "assets/objects/object_link_boy/default_gauntlet_1.ci8.inc.c"
};

u64 gLinkAdultShieldHandleTex[] = {
#include "assets/objects/object_link_boy/shield_handle.ci8.inc.c"
};

u64 gLinkAdultDefaultGauntlet2Tex[] = {
#include "assets/objects/object_link_boy/default_gauntlet_2.ci8.inc.c"
};

u64 gLinkAdultHandTex[] = {
#include "assets/objects/object_link_boy/hand.ci8.inc.c"
};

u64 gLinkAdultClosedHandThumbTex[] = {
#include "assets/objects/object_link_boy/closed_hand_thumb.ci8.inc.c"
};

u64 gLinkAdultHylianShieldBackTex[] = {
#include "assets/objects/object_link_boy/hylian_shield_back.ci8.inc.c"
};

u64 gLinkAdultClosedHandSideTex[] = {
#include "assets/objects/object_link_boy/closed_hand_side.ci8.inc.c"
};

u64 gLinkAdultSheathTex[] = {
#include "assets/objects/object_link_boy/sheath.ci8.inc.c"
};

u64 gLinkAdultArmOutUpperGauntletTex[] = {
#include "assets/objects/object_link_boy/arm_out_upper_gauntlet.ci8.inc.c"
};

u64 gLinkAdultSwordGuardTex[] = {
#include "assets/objects/object_link_boy/sword_guard.ci8.inc.c"
};

u64 gLinkAdultSheathBandTex[] = {
#include "assets/objects/object_link_boy/sheath_band.ci8.inc.c"
};

u64 gLinkAdultSwordEmblemTex[] = {
#include "assets/objects/object_link_boy/sword_emblem.ci8.inc.c"
};

u64 gLinkAdultHookshotHandleTex[] = {
#include "assets/objects/object_link_boy/hookshot_handle.ci8.inc.c"
};

u64 gLinkAdultHookshotDesignTex[] = {
#include "assets/objects/object_link_boy/hookshot_design.ci8.inc.c"
};

u64 gLinkAdultArmOutSleeveTex[] = {
#include "assets/objects/object_link_boy/arm_out_sleeve.ci8.inc.c"
};



Gfx gLinkAdultHylianShieldSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_00EFB8, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 2, 0),
    gsSP2Triangles(5, 2, 7, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 2, 1, 0, 4, 3, 6, 0),
    gsSP2Triangles(6, 5, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 4, 0, 7, 8, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[10], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 1, 0, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHylianShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_00EFB8[22], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[28], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[47], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 3, 7, 0),
    gsSP2Triangles(7, 2, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 2, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(0, 2, 14, 0, 12, 14, 2, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(4, 26, 27, 0, 28, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[77], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 5, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(13, 12, 17, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 11, 0, 18, 11, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(22, 21, 23, 0, 22, 23, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[103], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[115], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultHylianShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[125], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[137], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[147], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[151], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 2, 0),
    gsSP2Triangles(5, 2, 7, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 2, 1, 0, 4, 3, 6, 0),
    gsSP2Triangles(6, 5, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 4, 0, 7, 8, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[161], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 1, 0, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHylianShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_00EFB8[173], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultMirrorShieldSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x2710, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[179], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[182], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsDPPipeSync(),
    gsSPTexture(0x05DC, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetPrimColor(0, 0, 215, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[189], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 6, 0),
    gsSP2Triangles(14, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 17, 7, 6, 0),
    gsSP2Triangles(11, 10, 14, 0, 14, 15, 11, 0),
    gsSP2Triangles(16, 9, 1, 0, 17, 6, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, 1),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[207], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[210], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP1Triangle(10, 1, 0, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[221], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[233], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[243], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[262], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 3, 7, 0),
    gsSP2Triangles(7, 2, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 2, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(0, 2, 14, 0, 12, 14, 2, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(4, 26, 27, 0, 28, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[292], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 5, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(13, 12, 17, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 11, 0, 18, 11, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(22, 21, 23, 0, 22, 23, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldLowerDesignTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 205, 225, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[4436], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldUpperDesignTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4440], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 2, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultMirrorShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x2710, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[318], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[321], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsDPPipeSync(),
    gsSPTexture(0x05DC, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetPrimColor(0, 0, 215, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[328], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 6, 0),
    gsSP2Triangles(14, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 17, 7, 6, 0),
    gsSP2Triangles(11, 10, 14, 0, 14, 15, 11, 0),
    gsSP2Triangles(16, 9, 1, 0, 17, 6, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, 1),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[346], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[349], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[360], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[372], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[382], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldLowerDesignTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 205, 225, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[4446], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldUpperDesignTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4450], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 2, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[386], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 5, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(16, 17, 14, 0, 5, 4, 10, 0),
    gsSP2Triangles(7, 6, 18, 0, 0, 2, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 9, 10, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(12, 30, 13, 0, 31, 20, 22, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[418], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[424], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 3, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 0, 2, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[434], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 5, 4, 0),
    gsSP2Triangles(9, 8, 4, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 3, 9, 0, 6, 10, 5, 0),
    gsSP2Triangles(8, 9, 6, 0, 4, 8, 7, 0),
    gsSP2Triangles(5, 10, 3, 0, 2, 1, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(12, 0, 14, 0, 2, 14, 0, 0),
    gsSP2Triangles(13, 2, 11, 0, 13, 14, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandClosedNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[449], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 6, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 16, 4, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[472], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[482], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[485], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[488], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP1Triangle(0, 2, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandHoldingMasterSwordNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[499], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[502], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(2, 30, 0, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[533], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 11, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[553], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[572], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 4, 5, 6, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 5, 10, 0, 8, 10, 5, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(1, 23, 24, 0, 25, 26, 24, 0),
    gsSP2Triangles(27, 17, 19, 0, 28, 29, 13, 0),
    gsSP2Triangles(21, 20, 15, 0, 15, 20, 30, 0),
    gsSP2Triangles(15, 30, 16, 0, 13, 12, 18, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[603], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 10, 12, 0),
    gsSP2Triangles(11, 12, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[621], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPVertex(&object_link_boyVtx_00EFB8[635], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 6, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 16, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[662], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[668], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[671], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[674], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP1Triangle(0, 2, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[685], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 7, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 21, 18, 0, 13, 8, 7, 0),
    gsSP2Triangles(22, 12, 11, 0, 23, 4, 6, 0),
    gsSP2Triangles(24, 25, 26, 0, 13, 14, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[716], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[731], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[737], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 3, 7, 0),
    gsSP2Triangles(4, 6, 9, 0, 8, 7, 3, 0),
    gsSP2Triangles(9, 5, 4, 0, 3, 10, 8, 0),
    gsSP2Triangles(8, 9, 6, 0, 7, 6, 4, 0),
    gsSP2Triangles(5, 10, 3, 0, 11, 1, 0, 0),
    gsSP2Triangles(12, 13, 11, 0, 13, 12, 14, 0),
    gsSP2Triangles(14, 2, 13, 0, 2, 14, 0, 0),
    gsSP2Triangles(11, 0, 12, 0, 0, 14, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandClosedNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[752], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 15, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[779], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[785], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[788], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[791], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingHylianShieldNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[802], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 6, 5, 0),
    gsSP2Triangles(4, 7, 6, 0, 7, 4, 3, 0),
    gsSP2Triangles(8, 6, 7, 0, 7, 3, 8, 0),
    gsSP2Triangles(8, 3, 9, 0, 2, 9, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[812], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_00EFB8[824], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 16, 0, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 2, 15, 0, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[851], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 5, 4, 0, 0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[857], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHylianShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsSPVertex(&object_link_boyVtx_00EFB8[860], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 0, 0, 0, 5, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[866], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[869], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingBowNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultBowBodyTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 69, 69, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[880], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 7, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 13, 7, 0, 7, 13, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 161, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[896], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[914], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 6, 0),
    gsSP2Triangles(9, 6, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 15, 16, 0),
    gsSP2Triangles(11, 17, 15, 0, 10, 18, 19, 0),
    gsSP2Triangles(10, 19, 2, 0, 20, 3, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 17, 23, 15, 0),
    gsSP2Triangles(24, 25, 26, 0, 14, 27, 28, 0),
    gsSP2Triangles(24, 29, 25, 0, 21, 3, 5, 0),
    gsSP2Triangles(0, 2, 19, 0, 30, 29, 24, 0),
    gsSP2Triangles(23, 31, 15, 0, 14, 13, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[946], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[952], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 15, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[979], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[985], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[988], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[991], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 10, 0),
    gsSP1Triangle(11, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultMasterSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1003], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1015], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1025], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1044], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 3, 7, 0),
    gsSP2Triangles(7, 2, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 2, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(0, 2, 14, 0, 12, 14, 2, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(4, 26, 27, 0, 28, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1074], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 5, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(13, 12, 17, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 11, 0, 18, 11, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(22, 21, 23, 0, 22, 23, 25, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandHoldingHammerNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuStickTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 79, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1100], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 1, 0, 0, 2, 6, 0, 0),
    gsSP2Triangles(7, 3, 5, 0, 7, 5, 0, 0),
    gsSP2Triangles(8, 4, 3, 0, 4, 6, 2, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 1, 5, 0),
    gsDPPipeSync(),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 155, 192, 201, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1109], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1112], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 28, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1144], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1174], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1203], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1233], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1264], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1294], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1303], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 15, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1330], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[1336], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1339], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1342], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandHoldingBgsNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1353], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 2, 5, 0, 0, 5, 3, 0),
    gsSP2Triangles(6, 3, 7, 0, 6, 7, 2, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1361], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(1, 4, 10, 0, 1, 11, 2, 0),
    gsSP2Triangles(0, 2, 12, 0, 13, 5, 14, 0),
    gsSP2Triangles(14, 1, 15, 0, 13, 14, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 16, 2, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1386], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1389], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 1, 0, 0),
    gsSP2Triangles(10, 3, 5, 0, 4, 11, 5, 0),
    gsSP2Triangles(1, 12, 2, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 7, 6, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 8, 7, 0),
    gsSP2Triangles(24, 25, 22, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1421], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 6, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 16, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1448], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[1454], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1457], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1460], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP1Triangle(0, 2, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultHandHoldingBrokenGiantsKnifeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1471], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 2, 5, 0, 0, 5, 3, 0),
    gsSP2Triangles(6, 3, 7, 0, 6, 7, 2, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 2, 1, 0),
    gsSP2Triangles(3, 5, 7, 0, 5, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1479], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 4, 14, 0, 11, 13, 8, 0),
    gsSP2Triangles(15, 8, 5, 0, 16, 8, 7, 0),
    gsSP2Triangles(9, 4, 8, 0, 15, 5, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1500], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1503], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 7, 6, 0),
    gsSP2Triangles(16, 9, 11, 0, 17, 13, 12, 0),
    gsSP1Triangle(18, 3, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1522], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 11, 10, 0, 6, 13, 14, 0),
    gsSP2Triangles(11, 12, 15, 0, 6, 14, 4, 0),
    gsSP1Triangle(3, 2, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1539], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[1549], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1552], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1555], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP1Triangle(0, 2, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingMirrorShieldNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1564], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1567], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsDPPipeSync(),
    gsSPTexture(0x05DC, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetPrimColor(0, 0, 215, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1574], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 6, 0),
    gsSP2Triangles(14, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 17, 7, 6, 0),
    gsSP2Triangles(11, 10, 14, 0, 14, 15, 11, 0),
    gsSP2Triangles(16, 9, 1, 0, 17, 6, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, 1),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1592], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1595], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP1Triangle(9, 10, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1606], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 15, 4, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1629], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(6, 9, 8, 0, 4, 6, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[1639], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1642], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1645], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldLowerDesignTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 205, 225, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[4456], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldUpperDesignTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4460], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 2, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingOotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1656], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 7, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 21, 18, 0, 13, 8, 7, 0),
    gsSP2Triangles(22, 12, 11, 0, 23, 4, 6, 0),
    gsSP2Triangles(24, 25, 26, 0, 13, 14, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1687], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1702], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1708], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 3, 7, 0),
    gsSP2Triangles(4, 6, 9, 0, 8, 7, 3, 0),
    gsSP2Triangles(9, 5, 4, 0, 3, 10, 8, 0),
    gsSP2Triangles(8, 9, 6, 0, 7, 6, 4, 0),
    gsSP2Triangles(5, 10, 3, 0, 11, 1, 0, 0),
    gsSP2Triangles(12, 13, 11, 0, 13, 12, 14, 0),
    gsSP2Triangles(14, 2, 13, 0, 2, 14, 0, 0),
    gsSP2Triangles(11, 0, 12, 0, 0, 14, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOcarinaofTimeDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1723], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 6, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(11, 9, 0, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 1, 13, 0, 11, 3, 14, 0),
    gsSP2Triangles(11, 0, 3, 0, 0, 9, 1, 0),
    gsSP2Triangles(12, 4, 1, 0, 1, 9, 8, 0),
    gsSP2Triangles(1, 8, 5, 0, 14, 10, 11, 0),
    gsSP2Triangles(1, 5, 13, 0, 15, 13, 5, 0),
    gsSP2Triangles(15, 5, 7, 0, 7, 14, 15, 0),
    gsSP2Triangles(10, 14, 6, 0, 6, 14, 7, 0),
    gsSP2Triangles(12, 13, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 15, 14, 0, 17, 14, 19, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 21, 19, 0),
    gsSP2Triangles(4, 20, 3, 0, 3, 20, 14, 0),
    gsSP2Triangles(12, 17, 19, 0, 12, 19, 22, 0),
    gsSP2Triangles(12, 22, 4, 0, 21, 20, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1746], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1758], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1768], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandOutNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1772], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 8, 0),
    gsSP2Triangles(7, 5, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 8, 13, 14, 0),
    gsSP2Triangles(13, 4, 6, 0, 8, 4, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1787], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1791], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 6, 13, 0),
    gsSP2Triangles(8, 13, 6, 0, 15, 14, 16, 0),
    gsSP2Triangles(14, 15, 12, 0, 17, 13, 8, 0),
    gsSP2Triangles(17, 14, 13, 0, 2, 18, 0, 0),
    gsSP2Triangles(18, 5, 0, 0, 18, 3, 5, 0),
    gsSP2Triangles(18, 2, 3, 0, 19, 17, 8, 0),
    gsSP2Triangles(17, 16, 14, 0, 19, 16, 17, 0),
    gsSP2Triangles(20, 15, 21, 0, 12, 20, 6, 0),
    gsSP1Triangle(12, 15, 20, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingHookshotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHookshotMetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1813], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 2, 4, 0, 0),
    gsSP2Triangles(1, 0, 5, 0, 1, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(7, 6, 12, 0, 12, 6, 10, 0),
    gsSP2Triangles(5, 0, 4, 0, 5, 4, 3, 0),
    gsSP2Triangles(11, 13, 9, 0, 11, 9, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 16, 0),
    gsSP2Triangles(14, 17, 19, 0, 14, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 24, 21, 0),
    gsSP2Triangles(25, 21, 20, 0, 24, 25, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultHookshotHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPVertex(&object_link_boyVtx_00EFB8[1839], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 7, 0, 8, 9, 3, 0),
    gsSP2Triangles(2, 6, 7, 0, 5, 4, 10, 0),
    gsSP2Triangles(9, 4, 3, 0, 5, 10, 8, 0),
    gsSP2Triangles(8, 10, 9, 0, 0, 6, 1, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(11, 13, 15, 0, 14, 11, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHookshotDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsSPVertex(&object_link_boyVtx_00EFB8[1855], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_link_boyVtx_00EFB8[1875], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 15, 4, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1898], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 5, 4, 0, 0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsSPVertex(&object_link_boyVtx_00EFB8[1904], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1907], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1910], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(4, 10, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftGauntletPlate1DL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1921], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 8, 15, 9, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(18, 22, 16, 0, 19, 21, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftGauntletPlate2DL[] = {
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1945], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 14, 13, 21, 0),
    gsSP2Triangles(10, 9, 22, 0, 19, 23, 20, 0),
    gsSP2Triangles(23, 19, 24, 0, 16, 15, 25, 0),
    gsDPPipeSync(),
    gsSPTexture(0x2710, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 254, 15, 15, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1971], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1974], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftGauntletPlate3DL[] = {
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1983], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 6, 5, 13, 0),
    gsSP2Triangles(2, 1, 14, 0, 11, 15, 12, 0),
    gsSP2Triangles(15, 11, 16, 0, 8, 7, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 22, 0),
    gsDPPipeSync(),
    gsSPTexture(0x2710, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 254, 15, 15, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2009], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2012], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightGauntletPlate1DL[] = {
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2021], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 9, 15, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(18, 22, 16, 0, 23, 19, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightGauntletPlate2DL[] = {
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2045], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 13, 12, 0),
    gsSP2Triangles(22, 9, 8, 0, 18, 23, 19, 0),
    gsSP2Triangles(24, 19, 23, 0, 25, 17, 16, 0),
    gsDPPipeSync(),
    gsSPTexture(0x2710, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 254, 15, 15, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2071], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2074], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightGauntletPlate3DL[] = {
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2083], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 5, 4, 0),
    gsSP2Triangles(14, 1, 0, 0, 10, 15, 11, 0),
    gsSP2Triangles(16, 11, 15, 0, 17, 9, 8, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 22, 0),
    gsDPPipeSync(),
    gsSPTexture(0x2710, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 254, 15, 15, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2109], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2112], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftIronBootDL[] = {
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultIronBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2121], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 4, 9, 10, 0),
    gsSP2Triangles(4, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 5, 0),
    gsSP2Triangles(12, 5, 8, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 18, 17, 22, 0),
    gsSP2Triangles(0, 23, 24, 0, 11, 25, 21, 0),
    gsSP2Triangles(23, 22, 26, 0, 26, 22, 17, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 27, 0),
    gsSP1Triangle(25, 19, 21, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2153], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 7, 0, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightIronBootDL[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultIronBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CB40),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2164], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 3, 4, 0),
    gsSP2Triangles(10, 9, 4, 0, 5, 8, 11, 0),
    gsSP2Triangles(5, 11, 12, 0, 5, 12, 13, 0),
    gsSP2Triangles(5, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 19, 16, 15, 0),
    gsSP2Triangles(20, 21, 2, 0, 18, 22, 10, 0),
    gsSP2Triangles(23, 24, 21, 0, 16, 19, 25, 0),
    gsSP2Triangles(20, 23, 21, 0, 26, 27, 28, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 26, 0),
    gsSP1Triangle(18, 17, 22, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2195], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHoverBootDL[] = {
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsHeelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2208], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 8, 13, 9, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 5, 0),
    gsSP2Triangles(25, 5, 4, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2238], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsJetTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[2250], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 3, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 14, 22, 0, 22, 14, 13, 0),
    gsSP2Triangles(9, 4, 3, 0, 13, 10, 23, 0),
    gsSP2Triangles(20, 19, 24, 0, 0, 20, 24, 0),
    gsSP2Triangles(5, 6, 3, 0, 10, 13, 11, 0),
    gsSP2Triangles(5, 7, 6, 0, 23, 22, 13, 0),
    gsSP2Triangles(24, 1, 0, 0, 8, 25, 9, 0),
    gsSP2Triangles(6, 8, 9, 0, 2, 26, 0, 0),
    gsSP2Triangles(0, 26, 20, 0, 26, 18, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsFeatherTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[2277], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHoverBootDL[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsHeelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2285], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 7, 13, 8, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 21, 23, 0, 5, 25, 26, 0),
    gsSP2Triangles(6, 5, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2315], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(10, 11, 9, 0, 8, 10, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsJetTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[2327], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 13, 22, 0, 14, 13, 21, 0),
    gsSP2Triangles(5, 4, 9, 0, 23, 12, 14, 0),
    gsSP2Triangles(24, 19, 18, 0, 24, 18, 2, 0),
    gsSP2Triangles(5, 8, 3, 0, 11, 14, 12, 0),
    gsSP2Triangles(8, 7, 3, 0, 14, 21, 23, 0),
    gsSP2Triangles(2, 1, 24, 0, 9, 25, 6, 0),
    gsSP2Triangles(9, 6, 8, 0, 2, 26, 0, 0),
    gsSP2Triangles(18, 26, 2, 0, 18, 20, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsFeatherTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[2354], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultHandHoldingBottleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3403], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 8, 0),
    gsSP2Triangles(7, 5, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 8, 13, 14, 0),
    gsSP2Triangles(13, 4, 6, 0, 8, 4, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[3418], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[3422], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 6, 13, 0),
    gsSP2Triangles(8, 13, 6, 0, 15, 14, 16, 0),
    gsSP2Triangles(14, 15, 12, 0, 17, 13, 8, 0),
    gsSP2Triangles(17, 14, 13, 0, 2, 18, 0, 0),
    gsSP2Triangles(18, 5, 0, 0, 18, 3, 5, 0),
    gsSP2Triangles(18, 2, 3, 0, 19, 17, 8, 0),
    gsSP2Triangles(17, 16, 14, 0, 19, 16, 17, 0),
    gsSP2Triangles(20, 15, 21, 0, 12, 20, 6, 0),
    gsSP1Triangle(12, 15, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3444], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3447], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 0, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 2, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP1Triangle(14, 16, 17, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_boyVtx_00EFB8[3465], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 0, 0, 5, 7, 8, 0),
    gsSP2Triangles(0, 9, 5, 0, 0, 10, 9, 0),
    gsSP2Triangles(2, 10, 0, 0, 2, 11, 10, 0),
    gsSP2Triangles(9, 7, 5, 0, 12, 7, 9, 0),
    gsSP2Triangles(13, 2, 3, 0, 13, 11, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightArmOutNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultArmOutSleeveTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00D078),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3479], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(9, 8, 5, 0, 9, 10, 8, 0),
    gsSP2Triangles(11, 12, 1, 0, 11, 13, 12, 0),
    gsSP2Triangles(1, 14, 2, 0, 1, 12, 14, 0),
    gsSP2Triangles(0, 15, 3, 0, 16, 0, 4, 0),
    gsSP2Triangles(16, 17, 0, 0, 18, 19, 12, 0),
    gsSP2Triangles(14, 12, 19, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 18, 20, 0, 7, 20, 5, 0),
    gsSP2Triangles(7, 21, 20, 0, 3, 8, 4, 0),
    gsSP2Triangles(3, 6, 8, 0, 2, 15, 0, 0),
    gsSP2Triangles(5, 22, 9, 0, 5, 20, 22, 0),
    gsSP2Triangles(12, 23, 18, 0, 12, 13, 23, 0),
    gsSP2Triangles(1, 17, 11, 0, 1, 0, 17, 0),
    gsSP2Triangles(17, 10, 24, 0, 17, 16, 10, 0),
    gsSP2Triangles(13, 24, 23, 0, 23, 24, 22, 0),
    gsSP2Triangles(9, 24, 10, 0, 9, 22, 24, 0),
    gsSP2Triangles(22, 18, 23, 0, 22, 20, 18, 0),
    gsSP2Triangles(24, 11, 17, 0, 24, 13, 11, 0),
    gsSP2Triangles(4, 10, 16, 0, 4, 8, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultArmOutUpperGauntletTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPVertex(&object_link_boyVtx_00EFB8[3504], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 1, 0, 6, 0),
    gsSP2Triangles(10, 8, 7, 0, 10, 7, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 15, 11, 10, 0),
    gsSP2Triangles(17, 23, 18, 0, 24, 16, 25, 0),
    gsSP2Triangles(24, 25, 26, 0, 22, 27, 28, 0),
    gsSP2Triangles(22, 28, 19, 0, 29, 21, 20, 0),
    gsSP1Triangle(29, 20, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3535], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 1, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 11, 10, 0),
    gsSP2Triangles(12, 21, 22, 0, 12, 22, 9, 0),
    gsSP2Triangles(16, 23, 24, 0, 16, 24, 15, 0),
    gsSP2Triangles(3, 25, 26, 0, 3, 26, 19, 0),
    gsSP2Triangles(0, 27, 6, 0, 20, 24, 28, 0),
    gsSP2Triangles(20, 28, 29, 0, 12, 11, 30, 0),
    gsSP2Triangles(31, 27, 0, 0, 0, 2, 31, 0),
    gsSP1Triangle(25, 27, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3567], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 20, 0),
    gsSP2Triangles(21, 22, 0, 0, 21, 0, 23, 0),
    gsSP2Triangles(8, 24, 20, 0, 20, 25, 8, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 9, 0),
    gsSP2Triangles(11, 7, 9, 0, 12, 9, 27, 0),
    gsSP2Triangles(17, 23, 15, 0, 3, 6, 28, 0),
    gsSP2Triangles(29, 30, 17, 0, 21, 28, 6, 0),
    gsSP1Triangle(6, 31, 21, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3599], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandOutNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3602], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 2, 0),
    gsSP2Triangles(14, 12, 2, 0, 15, 14, 2, 0),
    gsSP2Triangles(1, 15, 2, 0, 8, 16, 6, 0),
    gsSP2Triangles(17, 18, 10, 0, 18, 19, 11, 0),
    gsSP2Triangles(5, 3, 20, 0, 21, 10, 22, 0),
    gsSP2Triangles(23, 15, 24, 0, 25, 8, 7, 0),
    gsSP2Triangles(3, 0, 20, 0, 22, 24, 15, 0),
    gsSP2Triangles(26, 22, 15, 0, 1, 26, 15, 0),
    gsSP2Triangles(3, 8, 27, 0, 8, 28, 16, 0),
    gsSP2Triangles(27, 1, 3, 0, 0, 2, 29, 0),
    gsSP1Triangle(7, 30, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3634], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 8, 10, 0),
    gsSP2Triangles(11, 6, 8, 0, 12, 10, 13, 0),
    gsSP2Triangles(14, 12, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 2, 0, 7, 20, 21, 0),
    gsSP2Triangles(22, 19, 18, 0, 21, 20, 18, 0),
    gsSP2Triangles(2, 21, 18, 0, 6, 22, 18, 0),
    gsSP2Triangles(18, 20, 6, 0, 21, 23, 17, 0),
    gsSP2Triangles(1, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(13, 7, 29, 0, 13, 10, 8, 0),
    gsSP2Triangles(17, 16, 21, 0, 23, 21, 2, 0),
    gsSP2Triangles(30, 31, 17, 0, 16, 29, 21, 0),
    gsSP2Triangles(28, 1, 26, 0, 28, 24, 1, 0),
    gsSP2Triangles(8, 9, 11, 0, 2, 1, 23, 0),
    gsSP1Triangle(2, 19, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[3666], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 21, 6, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 12, 0),
    gsSP2Triangles(25, 12, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3697], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(1, 9, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 17, 19, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 26, 19, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3728], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 1, 15, 0, 2, 16, 0, 0),
    gsSP2Triangles(17, 18, 19, 0, 2, 20, 21, 0),
    gsSP2Triangles(17, 22, 18, 0, 23, 24, 25, 0),
    gsSP2Triangles(13, 26, 11, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 30, 27, 0, 1, 20, 2, 0),
    gsSP1Triangle(31, 1, 14, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3760], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 1, 0),
    gsSP2Triangles(19, 20, 0, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3792], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 14, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 17, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 4, 26, 0),
    gsSP1Triangle(25, 26, 27, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftArmOutNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultArmOutSleeveTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00D078),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3820], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 12, 14, 0, 12, 13, 10, 0),
    gsSP2Triangles(0, 16, 17, 0, 12, 11, 8, 0),
    gsSP2Triangles(2, 16, 0, 0, 2, 18, 16, 0),
    gsSP2Triangles(19, 5, 7, 0, 6, 12, 4, 0),
    gsSP2Triangles(6, 14, 12, 0, 20, 15, 14, 0),
    gsSP2Triangles(20, 1, 15, 0, 19, 20, 5, 0),
    gsSP2Triangles(18, 20, 19, 0, 1, 18, 2, 0),
    gsSP2Triangles(1, 20, 18, 0, 8, 4, 12, 0),
    gsSP2Triangles(14, 5, 20, 0, 14, 6, 5, 0),
    gsSP2Triangles(15, 3, 13, 0, 15, 1, 3, 0),
    gsSP2Triangles(21, 3, 0, 0, 21, 22, 3, 0),
    gsSP2Triangles(0, 17, 21, 0, 13, 22, 10, 0),
    gsSP1Triangle(13, 3, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultArmOutUpperGauntletTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsSPVertex(&object_link_boyVtx_00EFB8[3843], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 10, 17, 18, 0),
    gsSP2Triangles(19, 9, 8, 0, 19, 8, 12, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 6, 0),
    gsSP2Triangles(23, 6, 5, 0, 12, 11, 19, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 14, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3874], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(0, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 1, 13, 0, 21, 13, 22, 0),
    gsSP2Triangles(23, 20, 24, 0, 25, 26, 19, 0),
    gsSP2Triangles(25, 19, 18, 0, 13, 1, 0, 0),
    gsSP2Triangles(16, 27, 28, 0, 23, 5, 4, 0),
    gsSP2Triangles(23, 4, 18, 0, 25, 9, 8, 0),
    gsSP2Triangles(25, 8, 17, 0, 12, 29, 30, 0),
    gsSP2Triangles(16, 26, 25, 0, 31, 6, 5, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3906], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 8, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 9, 18, 0),
    gsSP2Triangles(19, 18, 9, 0, 20, 21, 22, 0),
    gsSP1Triangle(5, 6, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingBowFirstPersonDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultBowBodyTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 69, 69, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3930], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 3, 0, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 6, 5, 0),
    gsSP2Triangles(7, 8, 6, 0, 4, 8, 7, 0),
    gsSP2Triangles(9, 4, 1, 0, 9, 8, 4, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 12, 11, 0),
    gsSP2Triangles(7, 11, 4, 0, 13, 12, 10, 0),
    gsSP2Triangles(13, 14, 12, 0, 2, 14, 13, 0),
    gsSP2Triangles(2, 15, 14, 0, 4, 15, 2, 0),
    gsSP2Triangles(4, 16, 15, 0, 11, 16, 4, 0),
    gsSP2Triangles(7, 5, 10, 0, 13, 0, 2, 0),
    gsSP2Triangles(10, 0, 13, 0, 10, 5, 0, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 161, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3947], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(0, 4, 3, 0, 2, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(7, 8, 5, 0, 6, 5, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3957], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 5, 0, 10, 2, 11, 0),
    gsSP2Triangles(12, 8, 13, 0, 12, 5, 8, 0),
    gsSP2Triangles(14, 8, 6, 0, 14, 13, 8, 0),
    gsSP2Triangles(15, 14, 6, 0, 6, 16, 7, 0),
    gsSP2Triangles(17, 15, 6, 0, 5, 12, 17, 0),
    gsSP2Triangles(17, 6, 5, 0, 9, 16, 6, 0),
    gsSP2Triangles(5, 18, 9, 0, 0, 19, 20, 0),
    gsSP2Triangles(0, 11, 19, 0, 20, 21, 0, 0),
    gsSP2Triangles(7, 18, 5, 0, 4, 10, 11, 0),
    gsSP2Triangles(11, 0, 4, 0, 22, 23, 1, 0),
    gsSP2Triangles(11, 1, 23, 0, 11, 23, 19, 0),
    gsSP2Triangles(21, 1, 0, 0, 21, 22, 1, 0),
    gsSP2Triangles(11, 2, 1, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CD48),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3981], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 12, 0, 13, 5, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 17, 16, 24, 0),
    gsSP2Triangles(6, 5, 13, 0, 25, 6, 26, 0),
    gsSP2Triangles(27, 28, 15, 0, 29, 30, 26, 0),
    gsSP1Triangle(23, 22, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4013], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 11, 10, 0, 13, 15, 16, 0),
    gsSP2Triangles(16, 11, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 12, 0, 0, 21, 1, 0, 0),
    gsSP2Triangles(22, 17, 23, 0, 18, 17, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 22, 8, 7, 0),
    gsSP2Triangles(27, 25, 1, 0, 23, 28, 22, 0),
    gsSP2Triangles(22, 7, 18, 0, 1, 25, 29, 0),
    gsSP2Triangles(12, 20, 10, 0, 0, 3, 20, 0),
    gsSP1Triangle(30, 31, 17, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4045], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 1, 15, 2, 0),
    gsSP2Triangles(2, 16, 0, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4069], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 1, 0, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 0, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 6, 11, 12, 0),
    gsSP2Triangles(6, 12, 13, 0, 3, 8, 0, 0),
    gsSP2Triangles(3, 2, 11, 0, 8, 7, 9, 0),
    gsSP2Triangles(3, 11, 6, 0, 5, 14, 4, 0),
    gsSP2Triangles(6, 8, 3, 0, 7, 13, 15, 0),
    gsSP2Triangles(7, 15, 9, 0, 13, 7, 6, 0),
    gsSP1Triangle(8, 10, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_boyTLUT_00CF50),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[4085], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 12, 6, 0, 13, 14, 15, 0),
    gsSP2Triangles(0, 16, 17, 0, 13, 15, 18, 0),
    gsSP2Triangles(12, 19, 13, 0, 20, 1, 21, 0),
    gsSP2Triangles(20, 2, 1, 0, 9, 19, 22, 0),
    gsSP2Triangles(12, 22, 19, 0, 23, 15, 14, 0),
    gsSP2Triangles(23, 14, 11, 0, 24, 25, 16, 0),
    gsSP2Triangles(11, 19, 9, 0, 1, 3, 26, 0),
    gsSP2Triangles(18, 7, 6, 0, 18, 6, 13, 0),
    gsSP2Triangles(26, 21, 1, 0, 26, 3, 27, 0),
    gsSP2Triangles(1, 0, 28, 0, 26, 29, 30, 0),
    gsSP2Triangles(11, 10, 31, 0, 17, 28, 0, 0),
    gsSP2Triangles(27, 29, 26, 0, 5, 27, 3, 0),
    gsSP1Triangle(30, 21, 26, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4117], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 8, 17, 6, 0),
    gsSP2Triangles(18, 19, 2, 0, 20, 21, 22, 0),
    gsSP2Triangles(10, 12, 20, 0, 23, 24, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultBottleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 178),
    gsSPVertex(&object_link_boyVtx_00EFB8[4466], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4469], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 5, 8, 3, 0),
    gsSP2Triangles(5, 9, 8, 0, 1, 9, 5, 0),
    gsSP2Triangles(1, 10, 9, 0, 8, 6, 3, 0),
    gsSP2Triangles(11, 6, 8, 0, 12, 1, 0, 0),
    gsSP1Triangle(12, 10, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 204),
    gsSPVertex(&object_link_boyVtx_00EFB8[4482], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(1, 3, 4, 0, 4, 3, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 5, 3, 0, 6, 3, 0, 0),
    gsSP2Triangles(10, 1, 11, 0, 10, 11, 7, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_boyVtx_02AE70[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02AE70.vtx.inc"
};

Gfx gLinkAdultHookshotChainDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHookshotChainTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_02AE70, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_boyVtx_02B0A8[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02B0A8.vtx.inc"
};

Gfx gLinkAdultBowStringDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_02B0A8, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_boyVtx_02B168[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02B168.vtx.inc"
};

Gfx gLinkAdultHookshotTipDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_02B168, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_02B168[3], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 10, 0, 11, 12, 13, 0),
    gsSP1Triangle(12, 11, 14, 0),
    gsSPEndDisplayList(),
};

u64 gLinkAdultHookshotChainTex[] = {
#include "assets/objects/object_link_boy/hookshot_chain.rgba16.inc.c"
};

Vtx object_link_boyVtx_02B738[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02B738.vtx.inc"
};

Gfx gLinkAdultBrokenGiantsKnifeBladeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x4E20, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_02B738, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_02B738[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_02B738[33], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSPEndDisplayList(),
};

u64 gLinkAdultHookshotReticleTex[] = {
#include "assets/objects/object_link_boy/hookshot_dot.i8.inc.c"
};

Vtx object_link_boyVtx_02CB18[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02CB18.vtx.inc"
};

Gfx gLinkAdultHookshotReticleDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHookshotReticleTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 0, 0, 255),
    gsSPVertex(object_link_boyVtx_02CB18, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_boyVtx_02CBB0[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02CBB0.vtx.inc"
};

static Vtx gLinkAdultVtx_02E120[38] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_02E120.vtx.inc"
};

Vtx object_link_boyVtx_02E380[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02E380.vtx.inc"
};

static Vtx gLinkAdultVtx_02E7E0[114] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_02E7E0.vtx.inc"
};

Vtx object_link_boyVtx_02EF00[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02EF00.vtx.inc"
};


Vtx object_link_boyVtx_031350[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_031350.vtx.inc"
};

static Vtx gLinkAdultVtx_033760[54] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_033760.vtx.inc"
};

Vtx object_link_boyVtx_033AC0[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_033AC0.vtx.inc"
};

static Vtx gLinkAdultVtx_0340A0[146] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_0340A0.vtx.inc"
};

Vtx object_link_boyVtx_0349C0[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_0349C0.vtx.inc"
};

Gfx gLinkAdultWaistNearDL[] = {
    
};

Gfx gLinkAdultRightThighNearDL[] = {
    
};

Gfx gLinkAdultRightLegNearDL[] = {
    
};

Gfx gLinkAdultRightFootNearDL[] = {
    
};

Gfx gLinkAdultLeftThighNearDL[] = {
    
};

Gfx gLinkAdultLeftLegNearDL[] = {
    
};

Gfx gLinkAdultLeftFootNearDL[] = {
    
};

Gfx gLinkAdultCollarNearDL[] = {
    
};

Gfx gLinkAdultTorsoNearDL[] = {
    
};

Gfx gLinkAdultHeadNearDL[] = {
    
};

Gfx gLinkAdultHatNearDL[] = {
   
};

Gfx gLinkAdultRightShoulderNearDL[] = {
    
};

Gfx gLinkAdultRightArmNearDL[] = {
    
};

Gfx gLinkAdultLeftShoulderNearDL[] = {
    
};

Gfx gLinkAdultLeftArmNearDL[] = {
    
};

LodLimb gLinkAdultRootLimb = { 
    { -57, 3377, 0 }, 0x01, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkAdultWaistLimb = { 
    { 0, 0, 0 }, 0x02, 0x09,
    { gLinkAdultWaistNearDL,  }
};

LodLimb gLinkAdultLowerControlLimb = { 
    { 945, 0, 0 }, 0x03, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkAdultRightThighLimb = { 
    { -399, 69, -249 }, 0x04, 0x06,
    { gLinkAdultRightThighNearDL,  }
};

LodLimb gLinkAdultRightLegLimb = { 
    { 1306, 0, 0 }, 0x05, LIMB_DONE,
    { gLinkAdultRightLegNearDL,}
};

LodLimb gLinkAdultRightFootLimb = { 
    { 1256, 5, 11 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultRightFootNearDL,}
};

LodLimb gLinkAdultLeftThighLimb = { 
    { -396, 76, 264 }, 0x07, LIMB_DONE,
    { gLinkAdultLeftThighNearDL,}
};

LodLimb gLinkAdultLeftLegLimb = { 
    { 1304, 0, 0 }, 0x08, LIMB_DONE,
    { gLinkAdultLeftLegNearDL, }
};

LodLimb gLinkAdultLeftFootLimb = { 
    { 1257, 6, 3 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultLeftFootNearDL,  }
};

LodLimb gLinkAdultUpperControlLimb = { 
    { 0, 21, -7 }, 0x0A, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkAdultHeadLimb = { 
    { 1392, -259, 0 }, 0x0B, 0x0C,
    { gLinkAdultHeadNearDL,}
};

LodLimb gLinkAdultHatLimb = { 
    { -298, -700, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultHatNearDL,  }
};

LodLimb gLinkAdultCollarLimb = { 
    { 0, 0, 0 }, LIMB_DONE, 0x0D,
    { gLinkAdultCollarNearDL,}
};

LodLimb gLinkAdultLeftShoulderLimb = { 
    { 1039, -172, 680 }, 0x0E, 0x10,
    { gLinkAdultLeftShoulderNearDL,}
};

LodLimb gLinkAdultLeftArmLimb = { 
    { 919, 0, 0 }, 0x0F, LIMB_DONE,
    { gLinkAdultLeftArmNearDL,}
};

LodLimb gLinkAdultLeftHandLimb = { 
    { 754, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultLeftHandNearDL,}
};

LodLimb gLinkAdultRightShoulderLimb = { 
    { 1039, -173, -680 }, 0x11, 0x13,
    { gLinkAdultRightShoulderNearDL,}
};

LodLimb gLinkAdultRightArmLimb = { 
    { 919, 0, 0 }, 0x12, LIMB_DONE,
    { gLinkAdultRightArmNearDL,}
};

LodLimb gLinkAdultRightHandLimb = { 
    { 754, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultRightHandNearDL,}
};

LodLimb gLinkAdultSwordAndSheathLimb = { 
    { 978, -692, 342 }, LIMB_DONE, 0x14,
    { gLinkAdultMasterSwordAndSheathNearDL,}
};

LodLimb gLinkTorsoLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultTorsoNearDL,}
};

void* gLinkAdultSkelLimbs[] = {
    &gLinkAdultRootLimb,
    &gLinkAdultWaistLimb,
    &gLinkAdultLowerControlLimb,
    &gLinkAdultRightThighLimb,
    &gLinkAdultRightLegLimb,
    &gLinkAdultRightFootLimb,
    &gLinkAdultLeftThighLimb,
    &gLinkAdultLeftLegLimb,
    &gLinkAdultLeftFootLimb,
    &gLinkAdultUpperControlLimb,
    &gLinkAdultHeadLimb,
    &gLinkAdultHatLimb,
    &gLinkAdultCollarLimb,
    &gLinkAdultLeftShoulderLimb,
    &gLinkAdultLeftArmLimb,
    &gLinkAdultLeftHandLimb,
    &gLinkAdultRightShoulderLimb,
    &gLinkAdultRightArmLimb,
    &gLinkAdultRightHandLimb,
    &gLinkAdultSwordAndSheathLimb,
    &gLinkTorsoLimb,
};

FlexSkeletonHeader gLinkAdultSkel = { 
    { gLinkAdultSkelLimbs, ARRAY_COUNT(gLinkAdultSkelLimbs) }, 18
};

