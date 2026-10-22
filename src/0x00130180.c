/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51526E9EAE8E58483D7403453A8C7AA9CB72495EF6508C1DC4641BC6CCA39A60
 * Entry: 0x00130180, Ghidra index: 3822, label: FUN_00130180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00130180(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  uVar1 = unaff_EBX - 0x1c;
  if (2 < uVar1) {
    FUN_001297e0(param_1 + 0x33c);
  }
  if ((*(uint *)(param_1 + 0x33c + (uVar1 >> 5) * 4) & 1 << ((byte)uVar1 & 0x1f)) != 0) {
    uVar2 = FUN_00160da0(0xffffffff,1);
    return uVar2;
  }
  return 0;
}
