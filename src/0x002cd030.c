/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42F40123298C1965F7950EEE1131E4EB13B0B0CD0F23C163A36AF06F40F0FDE1
 * Entry: 0x002cd030, Ghidra index: 10162, label: FUN_002cd030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002cd030(int param_1,undefined4 param_2)

{
  undefined1 local_10 [12];
  undefined4 local_4;
  
  local_4 = 0;
  FUN_00150930();
  FUN_002b7360(*(int *)(param_1 + 8) + 0x10,local_10,param_2);
  return;
}
