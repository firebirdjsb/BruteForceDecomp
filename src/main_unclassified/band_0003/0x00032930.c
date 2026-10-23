/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 402036BB174F704BBBB49C7AC9A99E6B0F07C0CBA8D54A54D8A0CD6B3F7CB65A
 * Entry: 0x00032930, Ghidra index: 327, label: FUN_00032930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00032930(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x5bc))();
  iVar1 = in_ECX[0x17f];
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0003296c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*in_ECX + 0xdc))();
    return uVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00032954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*in_ECX + 0xec))();
      return uVar2;
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00032960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*in_ECX + 0xec))();
  return uVar2;
}
