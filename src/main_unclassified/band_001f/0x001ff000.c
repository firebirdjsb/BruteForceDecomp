/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53BB6AE26E49DD9FE3DEFCE6A0D20A295CBFCA99E02BBE1E2C6EC33259DB888E
 * Entry: 0x001ff000, Ghidra index: 7242, label: FUN_001ff000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_001ff000(void)

{
  int *unaff_ESI;
  int unaff_EDI;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(unaff_EDI + 4) != 0xd) {
    if ((*(byte *)((int)unaff_ESI + 0x3d) & 2) != 0) {
      *(byte *)((int)unaff_ESI + 0x3d) = *(byte *)((int)unaff_ESI + 0x3d) & 0xfd | 0x10;
      (**(code **)(*unaff_ESI + 0x48))();
      uStack_8 = *(undefined4 *)(unaff_EDI + 0xc);
      iStack_c = (int)(char)unaff_ESI[0xf];
      uStack_4 = *(undefined4 *)(unaff_EDI + 0x10);
      ppuStack_14 = &PTR_LAB_003a3fb4;
      uStack_10 = 6;
      FUN_001ff0a0(&ppuStack_14);
    }
    if ((*(byte *)((int)unaff_ESI + 0x3d) & 4) != 0) {
      *(byte *)((int)unaff_ESI + 0x3d) = *(byte *)((int)unaff_ESI + 0x3d) & 0xfb;
      (**(code **)(*unaff_ESI + 0x48))();
      uStack_8 = *(undefined4 *)(unaff_EDI + 0xc);
      uStack_4 = *(undefined4 *)(unaff_EDI + 0x10);
      iStack_c = (int)(char)unaff_ESI[0xf];
      ppuStack_14 = &PTR_LAB_003a3fb4;
      uStack_10 = 5;
      FUN_001ff0a0(&ppuStack_14);
    }
  }
  return;
}
