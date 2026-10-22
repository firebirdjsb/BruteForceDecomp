/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B8E70779E9B8CD02D5ACFA1D62397259235E0C2B378E1735F964CE914E9702D
 * Entry: 0x003793b5, Ghidra index: 13481, label: FUN_003793b5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_00400700;
void FUN_003793b5(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = *(int *)((int)&PTR_DAT_00400700 + iVar1);
  while (iVar2 != 0) {
    uVar3 = *(uint *)(iVar1 + 0x100);
    if ((uVar3 & 0x1000) != 0) {
      FUN_00377cb0();
    }
    if ((uVar3 & 0x1000000) != 0) {
      FUN_00377a50();
    }
    iVar2 = *(int *)((int)&PTR_DAT_00400700 + iVar1);
  }
  return;
}
