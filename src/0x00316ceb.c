/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BE71DA7E25894D80DEC9D3EA32842FCDB44D492643CCC93CC21718520BA259F
 * Entry: 0x00316ceb, Ghidra index: 12161, label: FUN_00316ceb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00316ceb(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 * 0x10 + 0x98 + in_ECX);
  if (*puVar1 == 0) {
    do {
      piVar2 = *(int **)(in_ECX + 0xb0);
      if ((piVar2 == (int *)(in_ECX + 0xb0)) || (iVar3 = FUN_003168e3(param_1,piVar2), iVar3 == 0))
      break;
      local_8 = 1;
      if ((*(byte *)(*(int *)(in_ECX + 0x88) + 0xb) & 0x60) != 0) goto LAB_00316d43;
    } while (*puVar1 < 0x10);
    if (local_8 != 0) {
LAB_00316d43:
      FUN_00316a44(param_1);
    }
  }
  return local_8;
}
