/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32A5A4E70E932E8ED3B6054BA2A77C8B01F75F4006B63E343974F968A31452C4
 * Entry: 0x00313f2f, Ghidra index: 12043, label: CDirectSoundBufferSettings_SetBufferData
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int DSOUND__CDirectSoundBufferSettings_SetBufferData(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 local_8;
  
  local_8 = 0;
  if ((*(uint *)(in_ECX + 8) & 0x80000000) == 0) {
    if (*(int *)(in_ECX + 0xb8) == 0) goto LAB_00313f5d;
    FUN_00314937(*(int *)(in_ECX + 0xb8));
  }
  *(undefined4 *)(in_ECX + 0xb8) = 0;
LAB_00313f5d:
  *(int *)(in_ECX + 0xbc) = param_2;
  if (param_2 != 0) {
    if (param_1 == 0) {
      *(byte *)(in_ECX + 0xb) = *(byte *)(in_ECX + 0xb) & 0x7f;
      iVar1 = FUN_003148cf(0x61645344,param_2,0);
      *(int *)(in_ECX + 0xb8) = iVar1;
      local_8 = (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
    }
    else {
      *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x80000000;
      *(int *)(in_ECX + 0xb8) = param_1;
    }
  }
  FUN_003131d4(0,*(undefined4 *)(in_ECX + 0xbc));
  return local_8;
}
