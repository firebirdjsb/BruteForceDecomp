/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB09B8670ECA049DE05CB434A1F59F55D6145DA02C58550425600BC90FA054F7
 * Entry: 0x002c60d0, Ghidra index: 10079, label: FUN_002c60d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_002c60d0(void)

{
  int *piVar1;
  uint *puVar2;
  int in_ECX;
  uint *puVar3;
  int in_EDX;
  
  if ((int)*(char *)(in_EDX + 0xe) != (int)*(short *)(in_ECX + 0x1a)) {
    return false;
  }
  switch((int)*(char *)(in_EDX + 0xe)) {
  case 0:
    puVar3 = (uint *)((uint)*(uint **)(in_ECX + 0x14) & 0xfffffff0);
    puVar2 = (uint *)((uint)*(uint **)(in_EDX + 0x10) & 0xfffffff0);
    if (puVar2 + (0xfffffff - (*puVar2 & 0xfff)) * 4 == puVar3 + (0xfffffff - (*puVar3 & 0xfff)) * 4
       ) {
      return ((**(uint **)(in_EDX + 0x10) ^ **(uint **)(in_ECX + 0x14)) & 0xffff) == 0;
    }
    break;
  case 1:
    piVar1 = *(int **)(in_EDX + 0x10);
    if (piVar1 == *(int **)(in_ECX + 0x14)) {
      return true;
    }
    if (piVar1 + ((*piVar1 << 1) >> 0x11) == *(int **)(in_ECX + 0x14)) {
      return true;
    }
    break;
  case 2:
    return ((*(uint *)(in_ECX + 0x14) ^ *(uint *)(in_EDX + 0x10)) & 0xfffffff0) == 0;
  case 3:
    return true;
  default:
    _DAT_00000000 = 0;
  }
  return false;
}
