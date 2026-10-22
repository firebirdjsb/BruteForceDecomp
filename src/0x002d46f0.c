/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1E67DAC29145B1397AE905BA4C8F0CCAF57A236CF53DD924520E550D2FAB15E
 * Entry: 0x002d46f0, Ghidra index: 10207, label: FUN_002d46f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d46f0(int param_1,int param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xec + param_2 * 4);
  pfVar1 = (float *)(param_2 * 0x10 + 0x44 + param_1);
  uVar2 = *(undefined8 *)(pfVar1 + 1);
  *(float *)(iVar3 + 0x8c) = *pfVar1 - *(float *)(iVar3 + 0xac);
  *(ulonglong *)(iVar3 + 0x90) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(iVar3 + 0xb0) >> 0x20),
                (float)uVar2 - (float)*(undefined8 *)(iVar3 + 0xb0));
  pfVar1 = (float *)(param_2 * 0x10 + 0x24 + param_1);
  uVar2 = *(undefined8 *)(pfVar1 + 1);
  *(float *)(iVar3 + 0x7c) = *pfVar1 - *(float *)(iVar3 + 0x9c);
  *(ulonglong *)(iVar3 + 0x80) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(iVar3 + 0xa0) >> 0x20),
                (float)uVar2 - (float)*(undefined8 *)(iVar3 + 0xa0));
  return;
}
