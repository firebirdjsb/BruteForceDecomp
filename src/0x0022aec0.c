/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D73F07296EC8981E068B1F07D573FF04DDA79583FFA9BB1F1FAE1F17671C7F2B
 * Entry: 0x0022aec0, Ghidra index: 7681, label: FUN_0022aec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f18c;
void FUN_0022aec0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EDI + 0x44) == 0) && (param_1 != 0)) {
    puVar1 = (undefined4 *)FUN_002ea01d(0x40);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_000bc9c0();
      *(undefined2 *)(puVar1 + 9) = 7;
      *puVar1 = &PTR_FUN_0039f18c;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
    }
    *(undefined4 **)(unaff_EDI + 0x44) = puVar1;
    iVar2 = FUN_000120f0();
    if (iVar2 != 0) {
      FUN_000120f0();
    }
    FUN_000ba410(*(undefined4 *)(unaff_EDI + 0x44));
    if (*(int *)(*(int *)(unaff_EDI + 0x44) + 0x34) != param_1) {
      FUN_0008f6a0(param_1);
    }
    if (*(int *)(*(int *)(unaff_EDI + 0x44) + 0x10) != *(int *)(unaff_EDI + 0x2c)) {
      FUN_0008f6a0(*(int *)(unaff_EDI + 0x2c));
    }
    (**(code **)(**(int **)(unaff_EDI + 0x44) + 0x14))();
  }
  return;
}
