/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BCDC598EEA332D54A76127DD4486CD0186324234CBE2DAE724445017D59F9E2
 * Entry: 0x003168b6, Ghidra index: 12152, label: FUN_003168b6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003168b6(void)

{
  int *in_ECX;
  
  FUN_00318851(0);
  in_ECX[0x66] = 0;
  if ((*(byte *)(in_ECX[0x22] + 10) & 4) != 0) {
    (**(code **)(*in_ECX + 0x18))(1,0,0,0);
  }
  return;
}
