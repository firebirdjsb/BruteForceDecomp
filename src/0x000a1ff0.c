/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15E689983F565FAC576D999A91A7B6461CEAF04BD42247676439E69B100DD6A5
 * Entry: 0x000a1ff0, Ghidra index: 1918, label: FUN_000a1ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
void FUN_000a1ff0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x114) != -1) {
    (**(code **)(*DAT_00443308 + 0x18))(DAT_00443308,*(int *)(unaff_EDI + 0x114));
    *(undefined4 *)(unaff_EDI + 0x114) = 0xffffffff;
  }
  if (*(int *)(unaff_EDI + 0x110) != 0) {
    piVar1 = *(int **)(unaff_EDI + 0x10c);
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      FUN_0012aba0();
      piVar3 = (int *)piVar2[4];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    }
    FUN_000a2750(*(undefined4 *)(*(int *)(unaff_EDI + 0x10c) + 4));
    *(int *)(*(int *)(unaff_EDI + 0x10c) + 4) = *(int *)(unaff_EDI + 0x10c);
    *(undefined4 *)(unaff_EDI + 0x110) = 0;
    *(undefined4 *)*(undefined4 *)(unaff_EDI + 0x10c) = *(undefined4 *)(unaff_EDI + 0x10c);
    *(int *)(*(int *)(unaff_EDI + 0x10c) + 8) = *(int *)(unaff_EDI + 0x10c);
  }
  return;
}
