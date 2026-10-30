/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88D723CD7547DD2A2930D7D47C471E50DD2C07DE91F3448736DC149DC758E59A
 * Entry: 0x0007f670, Ghidra index: 1504, label: FUN_0007f670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00080700(undefined4 param_1,undefined4 param_2);

undefined4 FUN_0007f670(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  if ((in_EAX[0x170] != 0) && ((*(byte *)(in_EAX + 0x16f) & 8) == 0)) {
    return CONCAT31((int3)((uint)in_EAX[0x170] >> 8),1);
  }
  *(byte *)(in_EAX + 0x16f) = *(byte *)(in_EAX + 0x16f) & 0xf7;
  *(undefined1 *)(in_EAX + 0x1bc) = 0;
  iVar1 = (**(code **)(*in_EAX + 200))();
  in_EAX[0x172] = 0;
  if (0xf < *(uint *)(iVar1 + 0xa4)) {
    uVar2 = FUN_00080700(*(undefined4 *)(iVar1 + 0x90),0);
    return uVar2;
  }
  uVar2 = FUN_00080700(iVar1 + 0x90,0);
  return uVar2;
}
