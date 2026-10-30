/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71A600D97EBA99DCD2C160AD377881CAE6670D09D64D7F205CB2F4250A4465F6
 * Entry: 0x002b1b60, Ghidra index: 9741, label: FUN_002b1b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b1b60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x60) = iVar1;
  return iVar1;
}
