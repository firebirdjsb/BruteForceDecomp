/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3E6E13D6B5333043180A8E9EE5D5DD73A510B12FA3704F9FDCDDC46C7A84FED
 * Entry: 0x0029c4e0, Ghidra index: 9439, label: FUN_0029c4e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0029c4e0(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  if ((*(byte *)(param_1[3] + 0xc) & 0x10) != 0) {
    return 0xffffffff;
  }
  pbVar1 = (byte *)(param_1 + 5);
  iVar2 = FUN_002eb78d(pbVar1,1,0x100,param_1[3]);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  param_1[1] = (int)pbVar1;
  *param_1 = iVar2 + -1;
  param_1[1] = (int)param_1 + 0x15;
  return (uint)*pbVar1;
}
