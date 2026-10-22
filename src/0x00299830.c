/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CAB8290410D5A4C67D80C3C0C4E33D3C492968BEA002D1D8AEC86656C117B58
 * Entry: 0x00299830, Ghidra index: 9382, label: FUN_00299830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5b2c;
void FUN_00299830(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (unaff_ESI[7] != -1) {
    iVar1 = *unaff_ESI;
    iVar2 = FUN_00294b10(8,&DAT_004a5b2c);
    *(int *)(iVar1 + 0x1c) = iVar2;
    *(undefined4 *)(iVar2 + unaff_ESI[7] * 8) = param_1;
    *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4 + unaff_ESI[7] * 8) = param_2;
    unaff_ESI[7] = unaff_ESI[7] + 1;
  }
  return;
}
