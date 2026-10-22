/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E439AE85EAF18BCE4077BD8571E12612B73ED8F2DBB53F7EF50616924468EADB
 * Entry: 0x00061ff0, Ghidra index: 1043, label: FUN_00061ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00061ff0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x30) = iVar1;
  return iVar1;
}
