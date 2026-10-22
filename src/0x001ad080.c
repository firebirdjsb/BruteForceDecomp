/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21EB8284F259449A8C73988B0F0C2AC17131AEC4AF5ADF08FAD87D9194D631F5
 * Entry: 0x001ad080, Ghidra index: 5537, label: FUN_001ad080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ad080(int *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 local_50 [5];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (in_EAX != 0) {
    if (*param_1 == 0) {
      local_50[0] = 0;
      local_3c = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      iVar1 = FUN_002ea01d(0x50);
      iVar2 = 0;
      if (iVar1 != 0) {
        FUN_000fdc90(local_50);
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar1 + 0x2c) = local_24;
        *(undefined4 *)(iVar1 + 0x34) = local_1c;
        *(undefined4 *)(iVar1 + 0x30) = local_20;
        *(undefined4 *)(iVar1 + 0x38) = local_18;
        *(undefined4 *)(iVar1 + 0x3c) = local_14;
        FUN_001bddb0(iVar1 + 0x40);
        iVar2 = iVar1;
      }
      *param_1 = iVar2;
      FUN_0006a240();
    }
    return;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    FUN_0006a240();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  *param_1 = 0;
  return;
}
