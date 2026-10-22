/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9570B94593CF772A7BC7D6545CE889008BACCF4542A4B88F50AED4C01D33AD1A
 * Entry: 0x00076ac0, Ghidra index: 1383, label: FUN_00076ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_ISchema_00406e3c[];
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_00076ac0(void)

{
  int iVar1;
  undefined1 uVar2;
  uint unaff_EBX;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 *puStack_10;
  undefined1 local_4 [4];
  
  puStack_10 = local_4;
  uVar2 = 0;
  (**(code **)(*unaff_ESI + 0xc))();
  if ((unaff_EBX & 0x10) == 0) {
    *unaff_EDI = unaff_ESI;
    (**(code **)(*unaff_ESI + 4))();
    return 1;
  }
  puStack_10 = (undefined1 *)0x0;
  (**(code **)(*unaff_ESI + 0x1c))();
  if (&puStack_10 != (undefined1 **)0x0) {
    iVar1 = (**(code **)(puStack_10 + 0x10))(&puStack_10,s_23_23_ISchema_00406e3c);
    if (iVar1 < 0) goto LAB_00076b09;
  }
  uVar2 = 1;
LAB_00076b09:
  if (&puStack_10 != (undefined1 **)0x0) {
    (**(code **)(puStack_10 + 8))(&puStack_10);
  }
  return uVar2;
}
