/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E10FF4F6C4D1B02768C5EA17A970B2C996D18356BC42C5FE5BB0756B77EBB76F
 * Entry: 0x002b8d60, Ghidra index: 9863, label: FUN_002b8d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
void FUN_002b8d60(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *unaff_ESI;
  undefined4 *puVar4;
  
  *unaff_ESI = in_EAX;
  iVar2 = 0;
  do {
    if (1 << ((byte)iVar2 & 0x1f) == in_EAX) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(in_EAX * 4);
  puVar4 = puVar1;
  for (uVar3 = in_EAX & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  uVar3 = *unaff_ESI;
  unaff_ESI[3] = (uint)puVar1;
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(uVar3 << 3);
  puVar4 = puVar1;
  for (iVar2 = (uVar3 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  unaff_ESI[1] = (uint)puVar1;
  unaff_ESI[2] = (uint)(puVar1 + *unaff_ESI);
  unaff_ESI[4] = 0;
  return;
}
