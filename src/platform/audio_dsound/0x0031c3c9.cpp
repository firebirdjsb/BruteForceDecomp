/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 590E639239AC4F278EE8322AD1E4729BD037C80C68CA3D86E781B777BE42D0CA
 * Entry: 0x0031c3c9, Ghidra index: 12331, label: FUN_0031c3c9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c3c9(int param_1)

{
  int in_ECX;
  
  FUN_003118f0();
  FUN_0031c132();
  FUN_0031c357();
  FUN_0031c161(0,0,1,1);
  *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) & 0xfffffffd;
  if (param_1 != 0) {
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  FUN_00311923();
  return;
}
