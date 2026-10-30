/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9281128AF1C224DF337122A40CE89471E8E9DFB462FDB790705E3DD7D749FC6B
 * Entry: 0x002e9a00, Ghidra index: 10557, label: FUN_002e9a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x002e9a73) */
/* WARNING: Removing unreachable block (ram,0x002e9ab4) */

void FUN_002e9a00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_002e9b20();
  iVar1 = FUN_002e9970(param_2);
  if (-1 < iVar1) {
    FUN_002ebea0();
    FUN_002e9b30();
    iVar1 = FUN_002e9970(param_2);
    if (-1 < iVar1) {
      FUN_002e9500();
      FUN_002e9b30();
      FUN_002e9970(param_1);
    }
  }
  return;
}
