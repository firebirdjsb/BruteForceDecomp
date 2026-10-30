/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E7358F1EBA6BEB0DAFCB70BC79225B4585DE902D149D121D790E98C6632D6AD
 * Entry: 0x00115940, Ghidra index: 3581, label: FUN_00115940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00115940(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x3c))(param_1);
  FUN_002368d0(0);
  in_ECX[0x17d] = 0;
  (**(code **)(in_ECX[0x6d] + 0x24))(in_ECX[0x1b] + 0x14);
  FUN_0011e7c0(in_ECX,0xbe19999a);
  FUN_001152a0();
  if (in_ECX[0x179] != 0) {
    FUN_0006e940();
    in_ECX[0x128] = in_ECX[0x10d];
    return;
  }
  in_ECX[0x128] = in_ECX[0x10d];
  return;
}
