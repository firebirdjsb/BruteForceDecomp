/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84F7E5F5BAB3C312963943968A4CEB9C0DE77A057F1FF1EF2E339E35C7EF5F4D
 * Entry: 0x000fbfb0, Ghidra index: 3148, label: FUN_000fbfb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000fbfb0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x88))(param_1);
  if ((iVar2 != 0) && (unaff_ESI != 0)) {
    FUN_000fbe60();
    if (*(int *)(iVar2 + 0x24) != 0) {
      FUN_0010ad40(unaff_ESI);
    }
    if (*(undefined4 **)(iVar2 + 0x14) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x94) = **(undefined4 **)(iVar2 + 0x14);
    }
    if (*(undefined4 **)(iVar2 + 0x18) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x90) = **(undefined4 **)(iVar2 + 0x18);
    }
    puVar1 = *(undefined4 **)(iVar2 + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x88) = *puVar1;
      *(undefined4 *)(unaff_ESI + 0x8c) = puVar1[1];
      FUN_0010ab60();
    }
    if (*(char *)(iVar2 + 0x3c) != -0x80) {
      *(byte *)(unaff_ESI + 0x28) =
           *(byte *)(unaff_ESI + 0x28) ^
           (*(char *)(iVar2 + 0x3cU & (*(char *)(iVar2 + 0x3cU) == -0x80) - 1) << 4 ^
           *(byte *)(unaff_ESI + 0x28)) & 0x10;
    }
    if (*(int *)(iVar2 + 0x40) != -0x400000) {
      FUN_0010a240(*(undefined4 *)(iVar2 + 0x40U & (*(int *)(iVar2 + 0x40U) == -0x400000) - 1));
    }
  }
  return;
}
