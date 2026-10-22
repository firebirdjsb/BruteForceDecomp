/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBBAFFC5B0529D8AD325CDF685418708695F472DEBBA17F52D8D52EC19A61EE2
 * Entry: 0x000ee450, Ghidra index: 2960, label: FUN_000ee450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000ee450(char param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  char *unaff_ESI;
  
  uVar3 = in_EAX & 0xffffff00;
  if ((*unaff_ESI == '\0') && (*param_2 == *param_3)) {
    if (param_1 != '\0') {
      uVar1 = in_EDX[2];
      uVar2 = in_EDX[1];
      *in_ECX = *in_EDX;
      in_ECX[1] = uVar2;
      in_ECX[2] = uVar1;
      *unaff_ESI = '\x01';
      return uVar3;
    }
    uVar1 = in_ECX[2];
    uVar2 = in_ECX[1];
    *in_EDX = *in_ECX;
    in_EDX[1] = uVar2;
    uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    in_EDX[2] = uVar1;
    *unaff_ESI = '\x01';
  }
  return uVar3;
}
