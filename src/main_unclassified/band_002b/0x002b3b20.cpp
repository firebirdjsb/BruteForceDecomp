/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35B13BADD3983C8059A4C6CAA5794E6508F66214156A1B717346906D8C01CACA
 * Entry: 0x002b3b20, Ghidra index: 9770, label: FUN_002b3b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3b20(int param_1,float *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_002b3c60();
  iVar2 = *(int *)(param_1 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 1);
  *(float *)(iVar2 + 0x8c) = *(float *)(iVar2 + 0x8c) + *param_2;
  *(ulonglong *)(iVar2 + 0x90) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(iVar2 + 0x90) >> 0x20) +
                (float)((ulonglong)uVar1 >> 0x20),
                (float)*(undefined8 *)(iVar2 + 0x90) + (float)uVar1);
  return;
}
