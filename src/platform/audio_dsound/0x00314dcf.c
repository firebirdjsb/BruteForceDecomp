/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57FD89A0DED194ADE02D79B5C60C826592AFB1F29C4EBF795459A8EDABD6CA8E
 * Entry: 0x00314dcf, Ghidra index: 12093, label: FUN_00314dcf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0031ccc0;
extern uint32_t DAT_0031ccdc;
void FUN_00314dcf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  in_ECX[0x12] = param_1;
  in_ECX[0x13] = param_2;
  in_ECX[0x14] = param_3;
  puVar2 = &DAT_0031ccc0;
  puVar3 = in_ECX;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_0031ccdc;
  puVar3 = in_ECX + 7;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}
