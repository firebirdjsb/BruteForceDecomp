/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 355B00D9346B81AE58B0CD03257A39EED13DA5BB9A4522D1D22CCA20310942D6
 * Entry: 0x0010e470, Ghidra index: 3511, label: FUN_0010e470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010e470(void)

{
  int iVar1;
  int *in_EAX;
  
  if (((*(byte *)(in_EAX + 7) & 1) == 0) || (in_EAX[6] == 0)) {
    if (*(float *)(in_EAX[6] + 0x494) * 0.1 <= *(float *)(in_EAX[6] + 0x490)) {
      *(byte *)(in_EAX + 7) = *(byte *)(in_EAX + 7) | 1;
      (**(code **)(*in_EAX + 0x120))();
      (**(code **)(*in_EAX + 0x128))();
      FUN_00140a60(*(undefined4 *)(*(int *)(in_EAX[6] + 8) + 0xbe8),in_EAX[6],0x1c0514bd,0);
      iVar1 = in_EAX[6];
      *(undefined4 *)(iVar1 + 0x5ac) = 0;
      *(undefined4 *)(iVar1 + 0x5a8) = 0;
      return 1;
    }
  }
  return 0;
}
