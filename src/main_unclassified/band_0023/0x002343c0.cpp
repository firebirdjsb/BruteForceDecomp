/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2AF6C860962A34901D2E1E704BC6575409B609EE4AC92047357F060BBE838D48
 * Entry: 0x002343c0, Ghidra index: 7798, label: FUN_002343c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443314;
void FUN_002343c0(void)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(unaff_EDI + 4);
  *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(unaff_EDI + 0x1c);
  bVar3 = *(byte *)(unaff_ESI + 0x24) ^
          (*(char *)(unaff_EDI + 0x24) << 2 ^ *(byte *)(unaff_ESI + 0x24)) & 4;
  *(byte *)(unaff_ESI + 0x24) = bVar3;
  *(byte *)(unaff_ESI + 0x24) = (*(char *)(unaff_EDI + 0x24) << 1 ^ bVar3) & 8 ^ bVar3;
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_EDI + 0x18);
  *(undefined4 *)(unaff_ESI + 0x30) = *(undefined4 *)(unaff_EDI + 0xc);
  *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(unaff_EDI + 8);
  if (0 < *(int *)(unaff_ESI + 0x1c)) {
    piVar1 = *(int **)(unaff_ESI + 0x14);
    for (piVar4 = *(int **)(unaff_ESI + 0x10); piVar4 != piVar1; piVar4 = piVar4 + 1) {
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        (**(code **)(**(int **)(iVar2 + 0x58) + 0x20))(*(int **)(iVar2 + 0x58),iVar2);
      }
    }
  }
  (**(code **)(*DAT_00443314 + 0x44))(DAT_00443314);
  return;
}
