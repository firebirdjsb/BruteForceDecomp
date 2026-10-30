/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8779585E684EF9AD9CFDB8BBA3313E57FE21B3A6260EBD901EAC4ACFA209730
 * Entry: 0x0026c810, Ghidra index: 8768, label: FUN_0026c810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443644;
extern uint32_t DAT_00469888;
extern uint32_t DAT_00469898;
extern uint32_t PTR_FUN_00392720;
void FUN_0026c810(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  undefined1 local_9;
  
  uVar1 = DAT_00469888;
  unaff_EDI[1] = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[3] = 0;
  *unaff_EDI = PTR_FUN_00392720;
  DAT_00469888 = 0;
  FUN_0028a210();
  DAT_00469898 = DAT_00469888;
  unaff_EDI[4] = uVar1;
  puVar2 = (undefined1 *)FUN_002ea01d(0xc);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = local_9;
    iVar3 = FUN_001f2750(puVar2);
    *(int *)(puVar2 + 4) = iVar3;
    *(undefined1 *)(iVar3 + 0x2d) = 1;
    *(int *)(*(int *)(puVar2 + 4) + 4) = *(int *)(puVar2 + 4);
    *(undefined4 *)*(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + 4);
    *(int *)(*(int *)(puVar2 + 4) + 8) = *(int *)(puVar2 + 4);
    *(undefined4 *)(puVar2 + 8) = 0;
    DAT_00443644 = puVar2;
    FUN_0026b7d0();
    return;
  }
  DAT_00443644 = (undefined1 *)0x0;
  FUN_0026b7d0();
  return;
}
