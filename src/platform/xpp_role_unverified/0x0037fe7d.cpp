/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7ABDED3F13F755F6FDD8CC93FEBFEDEC9A3E2A1A845501C5A0A65D5D5518D191
 * Entry: 0x0037fe7d, Ghidra index: 13520, label: FUN_0037fe7d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041266c;
void FUN_0037fe7d(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar3 = FUN_00381139();
  bVar5 = 0xf < uVar3;
  if (bVar5) {
    uVar3 = uVar3 - 0x10;
  }
  puVar1 = (undefined4 *)(DAT_0041266c + ((uint)bVar5 + uVar3 * 2) * 0xc);
  iVar4 = FUN_003810c3(2,1,0);
  if ((((iVar4 == 0) ||
       (*(undefined1 *)((int)puVar1 + 5) = *(undefined1 *)(iVar4 + 2), *(short *)(iVar4 + 4) != 0x40
       )) || (iVar4 = FUN_003810c3(2,0,0), iVar4 == 0)) ||
     (*(undefined1 *)((int)puVar1 + 6) = *(undefined1 *)(iVar4 + 2), *(short *)(iVar4 + 4) != 0x40))
  {
    uVar6 = 0x80000400;
  }
  else {
    FUN_00380fc8(puVar1);
    *puVar1 = param_1;
    uVar2 = FUN_00380fd5();
    *(undefined1 *)(puVar1 + 1) = uVar2;
    FUN_00380fd9(0);
    uVar6 = 0;
  }
  FUN_0038274f(uVar6);
  return;
}
