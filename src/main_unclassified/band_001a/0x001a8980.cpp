/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1424E499C3D6BB61EE71E1F03E2985F61D8ACD06C1118E880C101353C3C523E1
 * Entry: 0x001a8980, Ghidra index: 5446, label: FUN_001a8980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8980(void)

{
  int in_EAX;
  undefined4 in_ECX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 6;
    if (iVar1 != 0) goto LAB_001a89a8;
  }
  FUN_001ae830(in_ECX);
LAB_001a89a8:
  FUN_001b4460(0);
  return iVar1 * 0x40 + *(int *)(in_EAX + 4);
}
