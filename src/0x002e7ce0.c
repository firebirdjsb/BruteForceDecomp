/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3CE31955E4D5399BBD03F9ADC9E5362AC12D5E45A9F8562D129F5DFECC91580
 * Entry: 0x002e7ce0, Ghidra index: 10529, label: FUN_002e7ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e7ce0(int param_1,uint *param_2)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  switch(param_1) {
  case -4:
    *param_2 = 0xfffffffe;
    return 0;
  case -3:
    *param_2 = 0xfffffffd;
    return 0;
  case -2:
    *param_2 = 0xfffffffc;
    return 0;
  case -1:
    *param_2 = 0xfffffffb;
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(in_ECX + 8) != -4) {
    piVar2 = *(int **)(in_ECX + 0x24);
    do {
      if ((*piVar2 != 0) && (*piVar2 == param_1)) {
        *param_2 = uVar1;
        return 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(int *)(in_ECX + 8) + 4U);
  }
  uVar1 = 0;
  if (*(int *)(in_ECX + 8) != -4) {
    piVar2 = *(int **)(in_ECX + 0x24);
    do {
      if (*piVar2 == 0) {
        (*(int **)(in_ECX + 0x24))[uVar1] = param_1;
        *param_2 = uVar1;
        *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
        return 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(int *)(in_ECX + 8) + 4U);
  }
  (**(code **)(**(int **)(in_ECX + 0x44) + 8))(param_1);
  return 0x80004005;
}
