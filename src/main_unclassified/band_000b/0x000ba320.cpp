/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1519314E8A4EE1EF38B7A7C19DADA5CBB3D75BB392D3EDE5344C0A602B16AA5
 * Entry: 0x000ba320, Ghidra index: 2253, label: FUN_000ba320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c9024;
undefined4 FUN_000ba320(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_EDX;
  int unaff_ESI;
  bool bVar3;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 0x1380 + in_EDX * 8);
  iVar2 = *(int *)(&DAT_003c9024 + in_EDX * 4);
  if (*(int *)(&DAT_003c9024 + in_EDX * 4) != in_EDX) {
    do {
      if (*(int *)(unaff_ESI + 0x1380 + iVar2 * 8) == 0) {
        uVar1 = 0;
      }
      bVar3 = *(int *)(&DAT_003c9024 + iVar2 * 4) != iVar2;
      iVar2 = *(int *)(&DAT_003c9024 + iVar2 * 4);
    } while (bVar3);
  }
  return uVar1;
}
