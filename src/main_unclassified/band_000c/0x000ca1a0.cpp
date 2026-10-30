/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21EED94506E3717FEC932AF7DC8083525B465F04C709C29596E977B8B7B9ACF7
 * Entry: 0x000ca1a0, Ghidra index: 2500, label: FUN_000ca1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ca1a0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int unaff_retaddr;
  
  FUN_000bb9d0(*(undefined4 *)(param_1 + 0x68));
  pbVar1 = (byte *)(*(int *)(param_1 + 0x68) + 0x13);
  *pbVar1 = *pbVar1 & 0xfe;
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(0);
  pbVar1 = (byte *)(*(int *)(unaff_retaddr + 100) + 0x13);
  *pbVar1 = *pbVar1 | 1;
  iVar2 = *(int *)(unaff_retaddr + 0x6c);
  *(short *)(iVar2 + 4) =
       (short)(int)((float)(int)*(short *)(*(int *)(unaff_retaddr + 0x68) + 0xe) +
                   *(float *)(unaff_retaddr + 0x70));
  *(undefined2 *)(iVar2 + 6) = 0;
  return;
}
