/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 350517E0A445FF4CD776635E389424B73BDB3BEF33074FF7CB905C99455C8DDD
 * Entry: 0x00087a00, Ghidra index: 1623, label: FUN_00087a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00087a00(void)

{
  undefined4 *puVar1;
  uint in_EAX;
  uint uVar2;
  uint in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  
  if (*(uint *)(unaff_EDI + 0x14) < in_ECX) {
    FUN_002f254a();
  }
  uVar2 = *(int *)(unaff_EDI + 0x14) - in_ECX;
  if (uVar2 < in_EAX) {
    in_EAX = uVar2;
  }
  if (in_EAX != 0) {
    puVar4 = (undefined4 *)(unaff_EDI + 4);
    puVar3 = puVar4;
    puVar1 = puVar4;
    if (7 < *(uint *)(unaff_EDI + 0x18)) {
      puVar3 = (undefined4 *)*puVar4;
      puVar1 = (undefined4 *)*puVar4;
    }
    _memmove((void *)((int)puVar3 + in_ECX * 2),(void *)((int)puVar1 + (in_ECX + in_EAX) * 2),
             (uVar2 - in_EAX) * 2);
    uVar2 = *(int *)(unaff_EDI + 0x14) - in_EAX;
    if (0x7ffffffe < uVar2) {
      FUN_002f258a();
    }
    if (*(uint *)(unaff_EDI + 0x18) < uVar2) {
      FUN_00087810(unaff_EDI,uVar2,*(undefined4 *)(unaff_EDI + 0x14));
    }
    else if (uVar2 == 0) {
      *(undefined4 *)(unaff_EDI + 0x14) = 0;
      if (7 < *(uint *)(unaff_EDI + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined2 *)puVar4 = 0;
      return;
    }
    if (uVar2 != 0) {
      *(uint *)(unaff_EDI + 0x14) = uVar2;
      if (7 < *(uint *)(unaff_EDI + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined2 *)((int)puVar4 + uVar2 * 2) = 0;
    }
  }
  return;
}
