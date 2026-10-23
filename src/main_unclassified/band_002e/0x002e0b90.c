/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 174F3586203264E599E8B0301B2CBA9A660CAB8B038EF94B450E4032D4C2F148
 * Entry: 0x002e0b90, Ghidra index: 10361, label: FUN_002e0b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e0b90(int param_1,int param_2)

{
  int in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  
  if ((((param_1 != 0) && (param_1 != -1)) && (param_1 != -2)) &&
     (((param_1 != -3 && (param_1 != -4)) && ((param_1 != -5 && (*(int *)(param_1 + 0x28) != 0))))))
  {
    if (*(int *)(param_1 + 0x38) != param_2) {
      *(int *)(param_1 + 0x38) = param_2;
      uVar1 = 0;
      if (*(int *)(in_ECX + 0x68) != 0) {
        puVar2 = (undefined4 *)(in_ECX + 0x6c);
        do {
          (**(code **)(*(int *)*puVar2 + 4))(param_1,param_2);
          uVar1 = uVar1 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar1 < *(uint *)(in_ECX + 0x68));
      }
    }
    return 0;
  }
  return 0x80040004;
}
