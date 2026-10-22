/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAF60696F84F2819E3E59F9D0BC3CDFABD3C314A7F3EF9EBC1B3A95E43B5E5F1
 * Entry: 0x001feac0, Ghidra index: 7238, label: FUN_001feac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_001feac0(void)

{
  char cVar1;
  int unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  unaff_EDI[5] = unaff_EDI[5] + 1;
  cVar1 = (**(code **)(*unaff_EDI + 8))();
  if ((cVar1 != '\0') && (unaff_EDI[4] <= unaff_EDI[5])) {
    uStack_8 = *(undefined4 *)(unaff_EBX + 0xc);
    iStack_c = (int)(char)unaff_ESI[0xf];
    uStack_4 = *(undefined4 *)(unaff_EBX + 0x10);
    ppuStack_14 = &PTR_LAB_003a3fb4;
    uStack_10 = 5;
    FUN_001ff0a0(&ppuStack_14);
    (**(code **)(*unaff_ESI + 0x48))();
    return;
  }
  if ((*(byte *)((int)unaff_ESI + 0x3d) & 8) != 0) {
    uStack_8 = *(undefined4 *)(unaff_EBX + 0xc);
    iStack_c = (int)(char)unaff_ESI[0xf];
    uStack_4 = *(undefined4 *)(unaff_EBX + 0x10);
    ppuStack_14 = &PTR_LAB_003a3fb4;
    uStack_10 = 5;
    FUN_001ff0a0(&ppuStack_14);
    (**(code **)(*unaff_ESI + 0x48))();
  }
  return;
}
