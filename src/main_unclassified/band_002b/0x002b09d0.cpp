/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11C296E891A781FE60F0F1C60D854F6C4276A7C0E032E62D2D5291CF045CE22C
 * Entry: 0x002b09d0, Ghidra index: 9730, label: FUN_002b09d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038ead0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b09d0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_EAX;
  int *unaff_ESI;
  int *piVar4;
  undefined4 auStack_8 [2];
  
  FUN_000620a0();
  *in_EAX = &PTR_FUN_0038ead0;
  piVar4 = in_EAX + 0xc;
  *piVar4 = 0;
  piVar1 = in_EAX + 0xd;
  *piVar1 = 0;
  in_EAX[0xe] = 0;
  piVar2 = in_EAX + 0xf;
  *piVar2 = 0;
  piVar3 = (int *)*piVar4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar4 = 0;
  }
  FUN_00062710(0x41200000,piVar4);
  piVar4 = (int *)*piVar1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar1 = 0;
  }
  FUN_00062710(0x3e99999a,piVar1);
  piVar4 = (int *)in_EAX[0xe];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    in_EAX[0xe] = 0;
  }
  FUN_00062710(0x42480000,in_EAX + 0xe);
  piVar4 = (int *)*piVar2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar2 = 0;
  }
  FUN_00063360(0x3f800000,piVar2);
  /* XBE 0x002B0A96 zeros [ESP+0x18], the same 32-bit guest
   * output word reloaded at 0x002B0AA4 and 0x002B0ACC as
   * [ESP+0x10] after the two pushed call arguments are removed.
   * Keep the original guest word separate from host pointer/ABI proof. */
  auStack_8[0] = 0;
  (**(code **)(*(int *)*piVar2 + 0x24))((int *)*piVar2,0,auStack_8);
  piVar4 = (int *)(uintptr_t)auStack_8[0];
  /* Original 0x002B0AA4 loads EAX from the same guest DWORD and
   * calls its vtable +0x14, not the unrelated Ghidra unaff_ESI. */
  (**(code **)(*piVar4 + 0x14))(piVar4,0x3f800000);
  (**(code **)(*piVar4 + 0x34))(piVar4,3);
  piVar4 = (int *)(uintptr_t)auStack_8[0];
  if (piVar4 != (int *)0x0) {
    /* XBE 0x002B0ACC..0x002B0AD7: load DWORD [ESP+0x10],
     * TEST EAX, then push the pointer and call [ECX+8].
     * TODO/ABI_UNVERIFIED: translate guest32 address for native hosts. */
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return;
}
