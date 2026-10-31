/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 166A9F5AF7F7CA3E2AE3179B1064C16C9EC43D6ACDD638F4D1E5A24E81FBA36B
 * Entry: 0x00177500, Ghidra index: 4952, label: FUN_00177500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern undefined4 FUN_000d42b0(void);
undefined4 FUN_00177500(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_000d42b0();
  puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 8) + 4))();
  uVar1 = puVar4[2];
  uVar2 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return 0;
}
