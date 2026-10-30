/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00B0E3C1B013B1D61ED390D37DD5B9878188D12FC1BA609E509C16D8EA00C237
 * Entry: 0x0010d600, Ghidra index: 3494, label: FUN_0010d600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0010d600(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = 0;
      (*(int *)(in_EAX + 0xbc) != 0 &&
      (uVar1 < (uint)(*(int *)(in_EAX + 0xc0) - *(int *)(in_EAX + 0xbc) >> 2))); uVar1 = uVar1 + 1)
  {
    iVar2 = *(int *)(*(int *)(in_EAX + 0xbc) + uVar1 * 4);
    if ((*(byte *)(iVar2 + 0x2c) & 1) != 0) {
      return iVar2;
    }
  }
  if (iVar2 != 0) {
    FUN_00101170();
    return iVar2;
  }
  return 0;
}
