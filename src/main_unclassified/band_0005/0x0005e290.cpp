/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 802BC667AC89E3A0B5DDF1D85C152EFEBD789B3696F5E67C4945AAF318F8304A
 * Entry: 0x0005e290, Ghidra index: 983, label: FUN_0005e290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005e290(uint param_1,uint param_2)

{
  int in_EAX;
  uint uVar1;
  int in_ECX;
  uint *puVar2;
  
  if (in_EAX == 1) {
    if (*(int *)(in_ECX + 0x14) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 3;
    }
    puVar2 = &param_2;
    if ((int)param_2 <= (int)param_1) {
      puVar2 = &param_1;
    }
    if (*puVar2 < uVar1) {
      FUN_0005ebf0();
      return;
    }
  }
  else if (in_EAX == 4) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 3;
    }
    puVar2 = &param_2;
    if ((int)param_2 <= (int)param_1) {
      puVar2 = &param_1;
    }
    if (*puVar2 < uVar1) {
      FUN_0005ebf0();
    }
  }
  return;
}
