/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 048CC6707D849E70BD5BF14D622A97CC68AAA27E8D49F52F6DE834BB14ECA38C
 * Entry: 0x0028a170, Ghidra index: 9155, label: FUN_0028a170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_too_many_nested_blocks_00404b04[];
void FUN_0028a170(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_00294b10(0xc,s_too_many_nested_blocks_00404b04);
  iVar2 = DAT_00469888;
  *(int *)(DAT_00469888 + 0x2c) = iVar3;
  puVar1 = (undefined4 *)(iVar3 + *(int *)(iVar2 + 0x30) * 0xc);
  *puVar1 = *(undefined4 *)(iVar2 + 0xc);
  puVar1[1] = *(undefined4 *)(iVar2 + 0x10);
  puVar1[2] = *(undefined4 *)(iVar2 + 0x14);
  *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
  return;
}
