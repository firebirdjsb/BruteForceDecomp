/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DED0466287A32323F35837AE2EAA85396FC2DAB8C443A6E6D853E63E0682F82
 * Entry: 0x00126b20, Ghidra index: 3722, label: FUN_00126b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00126b20(void)

{
  int *piVar1;
  int in_EAX;
  uint3 uVar2;
  
  piVar1 = *(int **)(in_EAX + 0x214);
  uVar2 = (uint3)((uint)piVar1 >> 8);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}
