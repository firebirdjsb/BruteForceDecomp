/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EB5AB75810598A74EAB8578225FAC4715FAEAF4993562E781FFEFCD04FE3299
 * Entry: 0x0011c100, Ghidra index: 3617, label: FUN_0011c100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0011c100(float param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int unaff_ESI;
  int local_8;
  undefined1 local_4 [4];
  
  local_8 = **(int **)(unaff_ESI + 0x7f8);
  uVar1 = 0;
  uVar2 = 0;
  if ((int *)local_8 != *(int **)(unaff_ESI + 0x7f8)) {
    do {
      if (*(float *)(local_8 + 0x10) < param_1 == (*(float *)(local_8 + 0x10) == param_1)) {
        *(float *)(local_8 + 0x10) = *(float *)(local_8 + 0x10) - param_1;
        FUN_0012aba0();
        uVar1 = uVar2;
      }
      else {
        local_8 = FUN_0012a450(unaff_ESI + 0x7f4,local_4,local_8);
        local_8 = *(int *)local_8;
        uVar1 = 1;
      }
      uVar2 = uVar1;
    } while (local_8 != *(int *)(unaff_ESI + 0x7f8));
  }
  return uVar1;
}
