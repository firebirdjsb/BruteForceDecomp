/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE8C67B3F78CAFE9DD0820ACD87975FD3C998144DB8F34A240C30CAF4CE16C5C
 * Entry: 0x00131da0, Ghidra index: 3835, label: FUN_00131da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00131da0(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  iVar1 = *(int *)(in_ECX + 0x2b4);
  iVar2 = 0;
  if ((iVar1 != 0) && (0 < *(int *)(in_ECX + 0x2b0))) {
    piVar3 = (int *)(iVar1 + 4);
    do {
      if (*param_1 == *piVar3) {
        return iVar2 * 0x584 + iVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x161;
    } while (iVar2 < *(int *)(in_ECX + 0x2b0));
  }
  return 0;
}
