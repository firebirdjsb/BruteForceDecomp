/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A26516C85C5174DAF92CDE2D9CFDB3BEFD017D8F6CB426C647DCAC38550C353
 * Entry: 0x0029c080, Ghidra index: 9435, label: FUN_0029c080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029c080(undefined4 *param_1)

{
  int in_EAX;
  undefined4 uVar1;
  int local_8;
  undefined4 local_4;
  
  switch(*(undefined4 *)(in_EAX + 4)) {
  case 0x3b:
  case 0x7d:
    *param_1 = 0;
    param_1[1] = *(undefined4 *)(in_EAX + 4);
    return;
  default:
    FUN_0029ae00();
    break;
  case 0x5b:
    FUN_0029c3f0();
    uVar1 = FUN_0029c280();
    param_1[1] = 1;
    *param_1 = uVar1;
    return;
  case 0x114:
    FUN_0029aeb0();
    if (*(int *)(in_EAX + 4) == 0x3d) {
      if (local_8 == 0) {
        FUN_00299580(0xb,local_4,1);
      }
      else if (local_8 == 1) {
        FUN_002996c0();
      }
      else {
        FUN_0029a1e0();
      }
      uVar1 = FUN_00296110();
      *(undefined4 *)(in_EAX + 4) = uVar1;
      FUN_0029ae00();
      uVar1 = FUN_0029c280();
      param_1[1] = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00299cd0();
  }
  uVar1 = FUN_0029c300();
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}
