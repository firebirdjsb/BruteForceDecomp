/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAF28E13DCA3277BAA1B0852C585EB0AD3D5D58528FB860CB3934821E542067F
 * Entry: 0x00224230, Ghidra index: 7615, label: FUN_00224230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039489c;
extern uint32_t PTR_FUN_003948cc;
undefined4 * FUN_00224230(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  
  if (**(int **)(unaff_ESI + 4) == 1) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[2] = 0;
      *puVar2 = &PTR_FUN_003948cc;
      puVar2[3] = unaff_ESI;
      uVar1 = *(undefined4 *)(*(int *)(unaff_ESI + 4) + 4);
      puVar2[5] = 0;
      puVar2[4] = uVar1;
      return puVar2;
    }
  }
  else if (**(int **)(unaff_ESI + 4) == 2) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x20);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[2] = 0;
      *puVar2 = &PTR_FUN_003948cc;
      puVar2[3] = unaff_ESI;
      uVar1 = *(undefined4 *)(*(int *)(unaff_ESI + 4) + 4);
      puVar2[5] = 0;
      puVar2[4] = uVar1;
      *puVar2 = &PTR_FUN_0039489c;
      puVar2[7] = 0;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}
