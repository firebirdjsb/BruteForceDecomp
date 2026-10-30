/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B3129802D9BF74F750A99B3E18EAE5E97C8BAB5589AE7989FF5CDD6299BB580
 * Entry: 0x000fd7b0, Ghidra index: 3169, label: FUN_000fd7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D allocation boundary takes one guest32 size and
 * returns guest32 EAX. No host allocation/pointer ABI is established. */
#include "bf_002ea01d_allocator_guest32.h"
undefined4 FUN_000fd7b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_002ea01d(0xac);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00103710();
  }
  iVar1 = param_1[2];
  piVar2[3] = param_1[1];
  piVar2[4] = iVar1;
  (**(code **)(*piVar2 + 0x1c))();
  piVar2[5] = param_1[3];
  (**(code **)(*piVar2 + 0x1c))();
  piVar2[6] = param_1[4];
  (**(code **)(*piVar2 + 0x1c))();
  piVar2[9] = *param_1;
  (**(code **)(*piVar2 + 0x2c))();
  piVar2[0x1e] = param_1[10];
  FUN_00103ff0(param_1[0xb],param_1[0xc]);
  if (param_1[5] != 0) {
    FUN_000fc6b0();
  }
  iVar1 = FUN_000ff9e0(piVar2);
  if (iVar1 != -1) {
    FUN_000fbd40();
  }
  FUN_0006a470();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_1);
}
