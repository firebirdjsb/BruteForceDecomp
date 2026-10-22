/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 016E1391C8C90A9EDF8CF0EC2380BF418112DFAF6F038128C3775B948EB76C24
 * Entry: 0x000b34a0, Ghidra index: 2163, label: FUN_000b34a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b34a0(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 8);
  sVar1 = *(short *)(iVar2 + 0x22);
  *(short *)(param_1 + 8) =
       (short)(int)((float)(int)*(short *)(iVar2 + 0x20) * 0.5 -
                   (float)(int)*(short *)(param_1 + 0xe) * 0.5);
  *(short *)(param_1 + 10) = (short)(int)((float)(int)sVar1 * 0.6);
  return;
}
