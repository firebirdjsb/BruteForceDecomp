/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A63684FE3E7426BA89154DA513B81921C7F2D85D5EC7266B3A552C8C7630BD9
 * Entry: 0x00299650, Ghidra index: 9378, label: FUN_00299650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_constant_table_overflow_004040a8[];
void FUN_00299650(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined4 uVar3;
  int *piVar4;
  int unaff_EBX;
  
  iVar1 = *in_EAX;
  if (((*(int *)(iVar1 + 0xc) <= *(int *)(unaff_EBX + 0xc)) ||
      (piVar4 = (int *)(*(int *)(unaff_EBX + 0xc) * 0x10 + *(int *)(iVar1 + 8)), *piVar4 != -2)) ||
     (piVar4[2] != unaff_EBX)) {
    uVar3 = FUN_00294b10(0x10,s_constant_table_overflow_004040a8);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    iVar2 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar2 + 1;
    *(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar1 + 8)) = 0xfffffffe;
    *(int *)(*(int *)(iVar1 + 8) + 8 + iVar2 * 0x10) = unaff_EBX;
    *(int *)(unaff_EBX + 0xc) = iVar2;
  }
  return;
}
