/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5E0B7225A1570F64CF647A4C8DC1FED32A578D35BC3C5BC2BF5840DD435C421
 * Entry: 0x00109a60, Ghidra index: 3415, label: FUN_00109a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00109a60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_001098f0();
  if (iVar1 != 0) {
    FUN_00087940(param_1,0,0xffffffff);
    return 1;
  }
  return 0;
}
