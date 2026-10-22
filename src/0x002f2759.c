/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09AF7CA8DC51E9ECC32C7A0FE476D6DC60CF2250C683921327740FF7B115FFB5
 * Entry: 0x002f2759, Ghidra index: 10804, label: FUN_002f2759
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f2759(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  iVar1 = FUN_002f2614(param_1,param_2,1,param_3,param_4,param_5);
  if (-1 < iVar1) {
    iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x20) + 0x250);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x14))(2,0);
    }
    iVar1 = HalReturnToFirmware(2);
  }
  RtlNtStatusToDosError(iVar1);
  return;
}
