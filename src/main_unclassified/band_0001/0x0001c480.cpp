/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF0712E2FA38DF2FEC06DBB49099B9523EDDAE976313A5C5340AF8E5E4FAF414
 * Entry: 0x0001c480, Ghidra index: 107, label: FUN_0001c480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001c480(void)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(unaff_EBX + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBX + 4) = 0;
    *(undefined4 *)(unaff_EBX + 8) = 0;
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(unaff_EBX + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
