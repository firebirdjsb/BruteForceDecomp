/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63CD7387932596D1B79F3439501ECF224698BEF8EDD9B3F311CF92DFB8C26515
 * Entry: 0x002b3bc0, Ghidra index: 9772, label: FUN_002b3bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3bc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_ESI;
  undefined1 local_64 [12];
  undefined4 local_58;
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined4 local_38 [12];
  undefined4 local_8;
  
  FUN_002b3c60();
  uVar1 = *(undefined4 *)(unaff_ESI + 0x90);
  puVar2 = local_38;
  iVar3 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_8 = 0;
  FUN_002ba920(*(undefined4 *)(*(int *)(unaff_ESI + 0x14) + 0x108),
               *(undefined4 *)(*(int *)(unaff_ESI + 0x14) + 0x10c));
  local_58 = 0;
  local_48 = 0;
  FUN_002b7360(local_44,param_1,local_54);
  FUN_002b73d0(local_44,param_2,local_64);
  FUN_002bac00(uVar1,local_54,local_64,param_2);
  return;
}
