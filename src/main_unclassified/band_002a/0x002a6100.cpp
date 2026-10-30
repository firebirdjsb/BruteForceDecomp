/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E43187772AA754C8373EFC1BD630F4E7BF98FC93E1762E117C70084E9CB4069
 * Entry: 0x002a6100, Ghidra index: 9580, label: FUN_002a6100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Guest x86 0x002A617E stores EDI in the four-byte caller local [ESP+0x14],
 * after the first +4 virtual call and before the second.  0x002A6189
 * takes the address of that same local, and 0x002A6195 passes it to
 * 0x002A78B0.  There the callee reads a single DWORD at 0x002A78CD.
 * EDI is the result of the original +0x10 virtual call at 0x002A6113.
 * The guest EBX and EDI register inputs to 0x002A78B0 and guest-pointer
 * translation are still ABI_UNVERIFIED; this fixes the observed local
 * word/argument alias only, not native virtual-call runtime behavior. */

undefined4 FUN_002a6100(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EBP;
  int *piStack_10;
  undefined4 *puStack_c;
  int *piStack_8;
  int iStack_4;
  uint32_t guest_lookup_key;

  uVar2 = (**(code **)(*param_1 + 0x10))();
  iStack_4 = 0;
  (**(code **)(*param_1 + 0x2c))();
  if (piStack_10 != (int *)0x0) {
    (**(code **)(*piStack_10 + 0x7c))(piStack_10);
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    return 0x80004005;
  }
  (**(code **)(*piStack_8 + 0x80))(piStack_8,param_2);
  if (puStack_c != (undefined4 *)0x0) {
    *puStack_c = uVar2;
  }
  (**(code **)(*piStack_8 + 4))(piStack_8);
  guest_lookup_key = (uint32_t)uVar2;
  (**(code **)(*piStack_8 + 4))(piStack_8);
  iVar3 = FUN_002a78b0(&guest_lookup_key);
  cVar1 = *(char *)(iVar3 + 4);
  (**(code **)(*piStack_8 + 8))(piStack_8);
  (**(code **)(*piStack_8 + 8))(piStack_8);
  if (cVar1 != '\0') {
    FUN_002a79d0();
    param_1[1] = param_1[1] + 1;
    if (&iStack_4 != (int *)0x0) {
      (**(code **)(iStack_4 + 8))(&iStack_4);
    }
    return 0;
  }
  if (&iStack_4 != (int *)0x0) {
    (**(code **)(iStack_4 + 8))(&iStack_4);
  }
  return 0x80004005;
}