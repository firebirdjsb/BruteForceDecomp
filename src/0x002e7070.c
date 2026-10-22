/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60A0408C5A0A8A45D59461CE2D71ED8733063B7BDA888276C770887ABC3A4F40
 * Entry: 0x002e7070, Ghidra index: 10502, label: FUN_002e7070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e7070(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 != '\0') {
    if (*(int *)(in_ECX + 0x4898) != 5) {
      *(undefined4 *)(in_ECX + 0x4898) = 5;
      if (*(int *)(in_ECX + 0x48bc) == 0) {
        FUN_00344fef(in_ECX + 0x48b4,8);
        *(undefined4 *)(in_ECX + 0x48bc) = 1;
      }
      (**(code **)**(undefined4 **)(in_ECX + 0x20))(1);
    }
    uVar1 = FUN_002e5f00();
    return uVar1;
  }
  (**(code **)**(undefined4 **)(in_ECX + 0x20))(0);
  *(undefined4 *)(in_ECX + 0x4898) = 0;
  return 0;
}
