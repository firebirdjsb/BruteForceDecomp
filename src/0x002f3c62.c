/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 081EF31A9FCD900482444636E2B1A5550A60974C053FE672CD82D760A12B38AB
 * Entry: 0x002f3c62, Ghidra index: 10846, label: FUN_002f3c62
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f3c62(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_34 [4];
  undefined1 local_24 [24];
  undefined1 local_c [8];
  
  iVar1 = FUN_002f2b3f(param_1,0xc0000000,3,0,3,0x2000000,0);
  if (iVar1 != -1) {
    puVar3 = local_34;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    KeQuerySystemTime(local_24);
    NtSetInformationFile(iVar1,local_c,local_34,0x28,4);
    XAPILIB__CloseHandle(iVar1);
  }
  return;
}
