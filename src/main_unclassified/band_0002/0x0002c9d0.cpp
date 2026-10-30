/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B3A8ECD47372D56D79CE2AE2796143C1CCB44AEC2992F65DB865747085AA19C
 * Entry: 0x0002c9d0, Ghidra index: 296, label: FUN_0002c9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00055a60(void);
extern undefined4 FUN_00055aa0(void);
extern void FUN_0004e8f0(void);
extern uint FUN_00024080(int param_1,float *param_2,float param_3);
extern int FUN_000388b0(int param_1);
extern void FUN_00023b20(undefined4 param_1);
extern void FUN_0004d520(int *param_1);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_00041660(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 FUN_00025730(int param_1,undefined4 param_2,int param_3);
extern undefined4 FUN_00023ee0(void);
extern undefined1 FUN_0002e800(int param_1,int param_2);
extern undefined4 FUN_00023d00(void);
extern void FUN_0004dff0(void);

extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_LAB_0039cc18;
extern uint32_t PTR_LAB_003a3fcc;
undefined4 FUN_0002c9d0(void)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  byte bStack_174;
  undefined1 auStack_170 [4];
  undefined **ppuStack_16c;
  int iStack_160;
  int iStack_14c;
  int iStack_130;
  undefined **appuStack_128 [65];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar4 = FUN_000120f0();
  iVar7 = in_ECX + 0x3dc;
  iVar8 = 0;
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(iVar7);
  }
  uVar5 = (*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec)) - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(in_ECX + 0x3e4);
  }
  fVar1 = *(float *)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar5 * 4) + 0x84);
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    iVar6 = FUN_00055aa0();
    *(undefined4 *)(iVar6 + 0x84) = 0x40800000;
  }
  FUN_0004e8f0();
  *(undefined4 *)(in_ECX + 0x354) = 0;
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  *(byte *)(in_ECX + 0x350) = *(byte *)(in_ECX + 0x350) & 0xfa | 2;
  *(undefined4 *)(in_ECX + 0x4ac) = 0;
  *(undefined4 *)(in_ECX + 0x4b0) = 0;
  *(undefined4 *)(in_ECX + 0x4a8) = 0;
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(iVar7);
  }
  uVar5 = (*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec)) - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(in_ECX + 0x3e4);
  }
  piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar5 * 4) + 0x58);
  if (piVar2 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar2 + 0x40))();
    cVar3 = FUN_00024080(in_ECX + -0x40,iVar6 + 0x24,0x3f800000);
    if (cVar3 != '\0') {
      return 0;
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar8 = FUN_000388b0(*(undefined4 *)(in_ECX + 0x318));
    if (iVar8 != 0) {
      FUN_00023b20(0x25);
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_24 = 0;
      uStack_20 = 1;
      uStack_14 = 0;
      appuStack_128[0] = &PTR_LAB_003a3fcc;
      uStack_c = 0x41700000;
      uStack_10 = uVar4;
      FUN_0004d520(appuStack_128,auStack_170);
      appuStack_128[0] = &PTR_LAB_0039cc18;
      ppuStack_16c = &PTR_FUN_003a4f64;
      if (iStack_14c != 0) {
        FUN_0008f6e0();
      }
      if (iStack_160 != 0) {
        FUN_0008f6e0();
      }
    }
  }
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(iVar7);
  }
  iStack_130 = *(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec);
  uVar5 = iStack_130 - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(in_ECX + 0x3e4);
  }
  if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar5 * 4) + 0x88) >> 0xd & 1) != 0) {
    *(undefined4 *)(in_ECX + 0x4a8) = 3;
    iVar7 = FUN_00055aa0();
    iVar7 = *(int *)(iVar7 + 0x14);
    if (iVar7 != 0) {
      iVar6 = FUN_00055aa0();
      if (((*(byte *)(iVar6 + 0x88) & 4) == 0) || ((*(byte *)(iVar7 + 0x28) & 1) == 0)) {
        bStack_174 = bStack_174 & 0xfc;
        uStack_17c = 0;
        uStack_180 = 0;
        uStack_184 = 0;
        iStack_178 = iVar7;
        cVar3 = FUN_00041660(&uStack_184,in_ECX + 0x8f0,1);
        if (cVar3 == '\0') {
          FUN_0004e8f0();
          if (*(int *)(in_ECX + 0x4a8) == 0) {
            *(undefined4 *)(in_ECX + 0x4a8) = 2;
          }
          goto LAB_0002cc80;
        }
        FUN_00025730(in_ECX + 0x8f0,1,0);
      }
    }
  }
  if (*(int *)(in_ECX + 0x4a8) == 0) {
    cVar3 = FUN_00023ee0();
    *(uint *)(in_ECX + 0x4a8) = 2 - (uint)(cVar3 != '\0');
  }
LAB_0002cc80:
  if (iVar8 != 0) {
    if (*(int *)(in_ECX + 0x4a8) == 1) {
      cVar3 = FUN_0002e800(in_ECX + -0x40,iVar8);
      if (cVar3 == '\0') {
        *(uint *)(iVar8 + 0x80) = *(uint *)(iVar8 + 0x80) | 0x40;
        *(undefined4 *)(iVar8 + 0x84) = 0x40000000;
        *(undefined4 *)(in_ECX + 0x4a8) = 2;
      }
    }
    cVar3 = FUN_00023d00();
    if (cVar3 == '\0') {
      cVar3 = FUN_00023ee0();
      if (cVar3 != '\0') {
        *(undefined4 *)(in_ECX + 0x4a8) = 1;
        return 1;
      }
      FUN_00012320(0x5d);
      FUN_0004dff0(in_ECX + -0x40);
      FUN_00012440();
    }
  }
  return 1;
}
