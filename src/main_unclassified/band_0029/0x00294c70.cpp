/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29F97D9B827487353BC67AE24A10C4611601826143EB759A874A5C4E067B01B5
 * Entry: 0x00294c70, Ghidra index: 9305, label: FUN_00294c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_internal_array_bigger_than__int__004047c0[];
undefined4 FUN_00294c70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00469888;
  *(int *)(DAT_00469888 + 0x68) = *(int *)(DAT_00469888 + 0x68) + -1;
  iVar3 = FUN_00294b10(0x120,s_internal_array_bigger_than__int__004047c0);
  iVar2 = DAT_00469888;
  *(int *)(iVar1 + 100) = iVar3;
  iVar3 = *(int *)(iVar2 + 0x68) * -0x120;
  iVar4 = 0x12;
  do {
    *(undefined4 *)(iVar3 + *(int *)(iVar1 + 100)) = 0xfffffffa;
    iVar3 = iVar3 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return *(undefined4 *)(iVar2 + 0x68);
}
