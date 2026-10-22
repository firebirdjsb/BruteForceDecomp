/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5EE422A39A0BC56B6F7B465D1088F0F6049252CA8074FDEB4754A45C5DA4EF3
 * Entry: 0x00330d60, Ghidra index: 12377, label: FUN_00330d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b02c8;
bool FUN_00330d60(void)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_1f0 [123];
  
  iVar1 = FUN_0034771b(*(undefined4 *)(in_ECX + 0x88),1,local_1f0,0x1ec);
  if (iVar1 == 0) {
    puVar2 = local_1f0;
    for (iVar1 = 0x7b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  puVar2 = (undefined4 *)(in_ECX + 0x18);
  puVar3 = local_1f0;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00330c6b(local_1f0,&DAT_004b02c8);
  iVar1 = FUN_003477ce(*(undefined4 *)(in_ECX + 0x88),1,local_1f0,0x1ec);
  return iVar1 != 0;
}
