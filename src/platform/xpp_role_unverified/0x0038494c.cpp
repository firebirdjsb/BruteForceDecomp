/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43CED668056D958243EC922BD16C9FC817391B90B6129DA803F3B18EF8F149D1
 * Entry: 0x0038494c, Ghidra index: 13652, label: FUN_0038494c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0038494c(int *param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)in_ECX >> 0x10),1);
  *(undefined4 *)(*param_1 + 0x50 + param_2 * 4) = local_8;
  return;
}
