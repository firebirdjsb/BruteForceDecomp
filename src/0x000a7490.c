/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB077EB720316479838C9FAE90BD442591D7BF93F800B48331FF073567292800
 * Entry: 0x000a7490, Ghidra index: 1987, label: FUN_000a7490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000a7490(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x10))(param_1);
  if (iVar2 != 0) {
    return '\x01';
  }
  iVar2 = FUN_002ea01d(0x118);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_000a7080();
  }
  cVar1 = FUN_000a7270(iVar2);
  if (cVar1 == '\0') {
    if (iVar2 != 0) {
      FUN_000a7430(1);
      return '\0';
    }
  }
  else {
    FUN_001611d0();
  }
  return cVar1;
}
