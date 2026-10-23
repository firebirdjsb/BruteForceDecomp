/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95B71225750E8E250472F2424F057FB5B8CAB48179975A9AA75E0D1E4D900220
 * Entry: 0x003764c0, Ghidra index: 13452, label: FUN_003764c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037af64;
extern uint32_t DAT_0037b824;
extern uint32_t DAT_0037b830;
extern uint32_t DAT_0037b838;
extern uint32_t DAT_0037ba10;
extern uint32_t DAT_0037ba14;
extern uint32_t DAT_0037dd90;
extern uint32_t _DAT_0037e030;
extern uint32_t _DAT_80000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_003764c0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint unaff_EBP;
  uint *puVar8;
  undefined4 *puVar9;
  int unaff_FS_OFFSET;
  uint auStack_c8 [4];
  uint uStack_a8;
  uint uStack_98;
  undefined1 auStack_84 [116];
  uint *puStack_10;
  undefined4 *puStack_c;
  
  auStack_c8[3] = 4;
  auStack_c8[2] = 0;
  auStack_c8[1] = 0x7ffffff;
  auStack_c8[0] = 0;
  uVar5 = MmAllocateContiguousMemoryEx(0x60);
  puStack_10[0x80a] = uVar5;
  if (puStack_10[0x80a] == 0) {
    return -0x7ff8fff2;
  }
  puStack_10[0xc] = puStack_10[0x80a];
  puStack_10[0x80c] = puStack_10[0xc] + 0x20;
  puStack_10[0x80b] = puStack_10[0x80c] + 0x20;
  puVar9 = (undefined4 *)puStack_10[0x80c];
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar7 = FUN_00371a00();
  puVar4 = puStack_10;
  if (-1 < iVar7) {
    DAT_0037dd90 = DAT_0037dd90 | 0x7f7f;
    puStack_10[0x144] = 0x40;
    puVar8 = puStack_10 + 0x5f2;
    D3D8LTCG__CMiniport_InitHardware();
    FUN_003746af(3,0x3d,0,0x7ffafff);
    FUN_003746af(5,2,0,0x7ffafff);
    FUN_003746af(4,3,0,0x7ffafff);
    FUN_003746af(9,0x3d,0,0x7ffafff);
    puStack_10[0x807] = unaff_EBP;
    FUN_003746af(10,0x3d,0,0x7ffafff);
    puStack_10[0x808] = uStack_a8;
    FUN_003746af(0xb,0x3d,0,0x7ffafff);
    puStack_10[0x809] = uStack_98;
    FUN_003746af(2,3,puStack_10[0x80c],0x1f);
    FUN_003746af(7,0x3d,puStack_10[0x80b],0x1f);
    FUN_003746af(0xc,0x3d,0x80000000,0x10000000);
    FUN_003746af(8,0x3d,puStack_10[0xc],0x20);
    FUN_003746af(6,2,0,0x7ffafff);
    FUN_00374779(0x206e,0,auStack_84,0,auStack_c8);
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    FUN_003747d7();
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 0x33;
    puVar4[puVar4[0x632] + 0x643] = uVar5;
    FUN_00379a01();
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x97;
    iVar7 = uVar1 + uVar5 * 0x10;
    *(undefined4 *)(iVar7 + 0x700004) = 0xa00;
    *(undefined4 *)(iVar7 + 0x700008) = 0;
    *(undefined4 *)(iVar7 + 0x70000c) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = *puVar8;
    uVar3 = puVar4[0x63e];
    *(undefined4 *)(uVar3 + 0x68 + uVar2) = 0xd;
    *(uint *)(uVar3 + 0x6c + uVar2) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    uVar5 = puVar4[0x64a];
    uVar1 = *puVar8;
    puVar4[0x64a] = uVar5 + 1;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x1000039;
    iVar7 = uVar5 * 0x10;
    *(undefined4 *)(uVar1 + 0x700004 + iVar7) = 0;
    *(undefined4 *)(uVar1 + 0x700008 + iVar7) = 0;
    *(undefined4 *)(uVar1 + iVar7 + 0x70000c) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = puVar4[0x63e];
    uVar3 = *puVar8;
    *(undefined4 *)(uVar2 + 0x70 + uVar3) = 0xe;
    *(uint *)(uVar2 + 0x74 + uVar3) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 1;
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x9f;
    iVar7 = uVar1 + uVar5 * 0x10;
    *(undefined4 *)(iVar7 + 0x700004) = 0;
    *(undefined4 *)(iVar7 + 0x700008) = 0;
    *(undefined4 *)(iVar7 + 0x70000c) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = puVar4[0x63e];
    uVar3 = *puVar8;
    *(undefined4 *)(uVar2 + 0x80 + uVar3) = 0x10;
    *(uint *)(uVar2 + 0x84 + uVar3) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    FUN_00374807(puVar8,0x11,0x62);
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 1;
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x44;
    iVar7 = uVar1 + uVar5 * 0x10;
    *(undefined4 *)(iVar7 + 0x700004) = 0x201;
    *(undefined4 *)(iVar7 + 0x700008) = 0;
    *(undefined4 *)(iVar7 + 0x70000c) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = puVar4[0x63e];
    uVar3 = *puVar8;
    *(undefined4 *)(uVar2 + 0x90 + uVar3) = 0x12;
    *(uint *)(uVar2 + 0x94 + uVar3) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 1;
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x57;
    iVar7 = uVar5 * 0x10;
    *(undefined4 *)(uVar1 + 0x700004 + iVar7) = 0xb00;
    *(undefined4 *)(uVar1 + 0x700008 + iVar7) = 0;
    *(undefined4 *)(uVar1 + 0x70000c + iVar7) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = puVar4[0x63e];
    uVar3 = *puVar8;
    *(undefined4 *)(uVar2 + 0x98 + uVar3) = 0x13;
    *(uint *)(uVar2 + 0x9c + uVar3) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 1;
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x43;
    iVar7 = uVar5 * 0x10;
    *(undefined4 *)(uVar1 + 0x700004 + iVar7) = 0;
    *(undefined4 *)(uVar1 + 0x700008 + iVar7) = 0;
    *(undefined4 *)(uVar1 + iVar7 + 0x70000c) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = puVar4[0x63e];
    uVar3 = *puVar8;
    *(undefined4 *)(uVar2 + 0xa0 + uVar3) = 0x14;
    *(uint *)(uVar2 + 0xa4 + uVar3) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 1;
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x12;
    iVar7 = uVar1 + uVar5 * 0x10;
    *(undefined4 *)(iVar7 + 0x700004) = 0;
    *(undefined4 *)(iVar7 + 0x700008) = 0;
    *(undefined4 *)(iVar7 + 0x70000c) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = puVar4[0x63e];
    uVar3 = *puVar8;
    *(undefined4 *)(uVar2 + 0xa8 + uVar3) = 0x15;
    *(uint *)(uVar2 + 0xac + uVar3) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 1;
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x72;
    iVar7 = uVar1 + uVar5 * 0x10;
    *(undefined4 *)(iVar7 + 0x700004) = 0;
    *(undefined4 *)(iVar7 + 0x700008) = 0;
    *(undefined4 *)(iVar7 + 0x70000c) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = puVar4[0x63e];
    uVar3 = *puVar8;
    *(undefined4 *)(uVar2 + 0xb0 + uVar3) = 0x16;
    *(uint *)(uVar2 + 0xb4 + uVar3) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 1;
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x19;
    iVar7 = uVar5 * 0x10;
    *(undefined4 *)(uVar1 + 0x700004 + iVar7) = 0;
    *(undefined4 *)(uVar1 + 0x700008 + iVar7) = 0;
    *(undefined4 *)(uVar1 + 0x70000c + iVar7) = 0;
    uVar1 = *puVar8;
    uVar2 = puVar4[0x632];
    uVar3 = puVar4[0x63e];
    *(undefined4 *)(uVar3 + 0xc0 + uVar1) = 0x18;
    *(uint *)(uVar3 + 0xc4 + uVar1) = uVar2 << 0x18 | uVar5 & 0xffff | 0x80010000;
    uVar5 = puVar4[0x64a];
    puVar4[0x64a] = uVar5 + 1;
    uVar1 = *puVar8;
    *(undefined4 *)((uVar5 + 0x70000) * 0x10 + uVar1) = 0x30;
    *(undefined4 *)(uVar1 + 0x700004 + uVar5 * 0x10) = 0;
    iVar7 = uVar1 + uVar5 * 0x10;
    *(undefined4 *)(iVar7 + 0x700008) = 0;
    *(undefined4 *)(iVar7 + 0x70000c) = 0;
    uVar1 = puVar4[0x632];
    uVar2 = puVar4[0x63e];
    uVar3 = *puVar8;
    *(undefined4 *)(uVar2 + 200 + uVar3) = 0x19;
    *(uint *)(uVar2 + 0xcc + uVar3) = uVar1 << 0x18 | uVar5 & 0xffff | 0x80010000;
    puStack_10[0x13e] = *puVar8;
    puStack_10[0x5f0] = auStack_c8[0];
    _DAT_0037e030 = puStack_10[0x13e];
    _DAT_80000000 = (puStack_10[9] & 0xfffffff) + 1;
    D3D8LTCG__CDevice_KickOff_0__LTCG_edx1();
    uVar5 = *(uint *)(puStack_10[0x5f0] + 0x44);
    while ((uVar5 & 0xfffffff) != (*puStack_10 & 0xfffffff)) {
      auStack_c8[0] = 400;
      do {
        auStack_c8[0] = auStack_c8[0] - 1;
      } while (auStack_c8[0] != 0);
      auStack_c8[0] = 0;
      uVar5 = *(uint *)(puStack_10[0x5f0] + 0x44);
    }
    _DAT_80000000 = 0xdeadbeef;
    FUN_003761f0();
    iVar7 = D3D8LTCG__CDevice_InitializeFrameBuffers_4__LTCG_ebx1(puStack_c);
    if (-1 < iVar7) {
      uVar6 = FUN_0036e100();
      iVar7 = FUN_00378439(*puStack_c,puStack_c[1],puStack_c[0xb],puStack_c[10],puStack_c[2],
                           puStack_c[0xc],uVar6);
      if (-1 < iVar7) {
        puStack_10[0xdf] = (uint)&DAT_0037b838;
        D3D8LTCG__D3DDevice_SetVertexShader(2);
        puVar9 = &DAT_0037ba10;
        for (iVar7 = 0x46; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        DAT_0037ba14 = 0x10;
        D3D8LTCG__D3D_CommonSetRenderTarget(puStack_10[0x570],puStack_10[0x573],&DAT_0037af64);
        FUN_003762e0();
        D3D8LTCG__D3DDevice_Clear(0,0,3,0,0x3f800000,0);
        iVar7 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x20) + 0x250);
        if ((iVar7 != 0) && (puVar9 = *(undefined4 **)(iVar7 + 0x20), puVar9 != (undefined4 *)0x0))
        {
          *puVar9 = puStack_10 + 0x661;
          puVar9[1] = puStack_10 + 0x806;
          puVar9[2] = puStack_10[0x571];
          puVar9[3] = puStack_10 + 0x5f2;
          puVar9[5] = puStack_10 + 0x126;
          puVar9[6] = puStack_10 + 0x128;
          puVar9[7] = &LAB_0036e9d0;
          puVar9[8] = 0xabcdef00;
        }
        D3D8LTCG__D3DDevice_SetFlickerFilter_0();
        if ((DAT_0037b830 == 0) || (DAT_0037b824 != 0)) {
          AvSendTVEncoderOption(*(undefined4 *)(D3D8__D3D_g_pDevice + 0x17c8),0xe,0,0);
          DAT_0037b830 = 1;
          DAT_0037b824 = 0;
        }
        iVar7 = 0;
      }
    }
  }
  return iVar7;
}
