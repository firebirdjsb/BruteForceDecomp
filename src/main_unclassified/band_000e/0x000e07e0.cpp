/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECAC5DBD7D05A34E39FC82D768A16BC243C55BBD04F4D1CBEB23582B1D441F7E
 * Entry: 0x000e07e0, Ghidra index: 2748, label: FUN_000e07e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e1150(int param_1,undefined4 *param_2,int *param_3,int *param_4);

void FUN_000e07e0(void)

{
  undefined4 *puVar1;
  int in_EDX;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(in_EDX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_000e1150(in_EDX,local_4,0,0);
    return;
  }
  FUN_000e1150(in_EDX,local_4,*puVar1,puVar1);
  return;
}
