/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1ABBB3BE67AB5A47863F03C98E2829321850BF17BA887361CCEFD5AE42162803
 * Entry: 0x0015ae30, Ghidra index: 4519, label: FUN_0015ae30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0015ae30(int *param_1)

{
  undefined4 uVar1;
  uint unaff_EBX;
  float fVar2;
  
  if (((byte)param_1[0x6b] & 3) == 1) {
    (**(code **)(*param_1 + 0xbc))();
    FUN_00156300(param_1);
    if (((uint)param_1 & -(uint)((*(byte *)((int)param_1 + 0x26) & 0x40) != 0)) != 0) {
      uVar1 = (**(code **)(*param_1 + 0x34))(0);
      FUN_0015a7e0(uVar1);
      if ((*(byte *)((int)param_1 + 0x71) & 2) != 0) {
        (**(code **)(*param_1 + 0xb8))(0x3f800000);
      }
    }
    fVar2 = (float)param_1[0x14];
    if ((float)param_1[0x14] <= (float)param_1[0x14]) {
      fVar2 = (float)param_1[0x14];
    }
    param_1[0x15] = (int)fVar2;
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xbf;
    (**(code **)(*param_1 + 0x144))(0);
    return unaff_EBX >> 0x18;
  }
  FUN_000cdbc0(param_1);
  return 0;
}
