/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D405483BAAD99EA057EC3BAAA86AF52007CE2BF6E4C1F0F4618D52273C2F1BE9
 * Entry: 0x00150420, Ghidra index: 4405, label: FUN_00150420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00150420(undefined4 param_1,char param_2,char param_3)

{
  /* Ghidra _param_ alias is a draft-only temporary. Original x86 stack-slot
   * aliasing and incoming register/stack ABI remain UNVERIFIED. */
  float bf_scratch_float_arg;
  float *pfVar1;
  undefined4 *in_EAX;
  int iVar2;
  int iVar3;
  uint unaff_EBX;
  int unaff_ESI;
  float10 fVar4;
  undefined1 auStack_30 [3];
  undefined1 local_2d;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  byte local_8;
  
  local_28 = 0.0;
  local_18 = 0;
  local_1c = 0;
  local_14 = 0x3f800000;
  local_c = 0;
  local_20 = 0x3f800000;
  local_8 = (local_8 & 0xfc | 4) ^ *(byte *)(in_EAX + 0x94) >> 1 & 1;
  local_10 = (-(uint)((*(byte *)(in_EAX + 0x94) & 1) != 0) & 0xf551247c) + 0xf9d40e62;
  local_2c = 4.2695415e-23;
  local_24 = *(float *)(*(int *)(unaff_ESI + 0xc) + 0x29c) * (float)in_EAX[0x96];
  local_2d = 0;
  fVar4 = (float10)(**(code **)(**(int **)(unaff_ESI + 0x5a4) + 0xcc))(*in_EAX);
  local_28 = (float)(fVar4 * (float10)local_28);
  if ((*(byte *)((int)in_EAX + 0x251) & 8) != 0) {
    local_28 = *(float *)(unaff_ESI + 0x570) * local_28;
  }
  if (((*(int *)(unaff_ESI + 0x21c) == 0) ||
      (local_2c = *(float *)(*(int *)(unaff_ESI + 0x21c) + 0x38),
      local_2c < 0.0 != (local_2c == 0.0))) || (param_3 != '\0')) {
    local_2c = 0.0;
  }
  local_1c = in_EAX[0x95];
  iVar3 = *(int *)(unaff_ESI + 0x5b0);
  if (((*(byte *)((int)in_EAX + 0x252) & 1) != 0) &&
     (iVar3 = *(int *)(*(int *)(unaff_ESI + 0x2e8) + 0x1cc), iVar3 == 0)) {
    iVar3 = *(int *)(unaff_ESI + 0x7e4);
  }
  iVar2 = FUN_00117270();
  iVar3 = iVar2 + -6 + iVar3 * 6;
  if (param_2 != '\0') {
    iVar3 = iVar3 + 0xc;
  }
  if (*(char *)(unaff_ESI + 0x224) != '\0') {
    iVar3 = iVar3 + 0x18;
  }
  *(int *)(unaff_ESI + 0x220) = iVar3;
  pfVar1 = (float *)in_EAX[iVar3 * 3 + 2];
  if (pfVar1 != (float *)0x0) {
    if (*pfVar1 <= local_2c) {
      local_2c = 0.0;
    }
    if (0.0 <= *(float *)(unaff_ESI + 0x434)) {
      fVar4 = (float10)FUN_0001fae0(*(float *)(unaff_ESI + 0x434) + 3.1415927);
      bf_scratch_float_arg = (float)fVar4;
    }
    else {
      bf_scratch_float_arg = -1.0;
    }
    iVar3 = FUN_0023d240(*(undefined4 *)(unaff_ESI + 500),pfVar1 + 5,auStack_30,bf_scratch_float_arg);
    *(int *)(unaff_ESI + 0x21c) = iVar3;
    if (iVar3 != 0) {
      *(byte *)(unaff_ESI + 0x261) = *(byte *)(unaff_ESI + 0x261) & 0xfd;
      *(undefined4 **)(unaff_ESI + 0x1fc) = in_EAX;
      if (*(int *)(unaff_ESI + 0x214) != 0) {
        FUN_0014fd50(*(int *)(unaff_ESI + 0x214),unaff_ESI);
      }
      if (*(int *)(unaff_ESI + 0x240) != 0) {
        FUN_0014fd50(*(int *)(unaff_ESI + 0x240),unaff_ESI);
      }
      return 1;
    }
  }
  if (*(int *)(unaff_ESI + 0x21c) != 0) {
    FUN_0023d3e0();
    *(undefined4 *)(unaff_ESI + 0x21c) = 0;
  }
  return unaff_EBX >> 0x18;
}
