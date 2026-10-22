/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F563B8102D85ABFF4C42AFF139B76A053194659E7FDD4071004AE3C30B0F006
 * Entry: 0x0014f560, Ghidra index: 4395, label: FUN_0014f560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0014f560(char param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  char *unaff_ESI;
  
  uVar2 = in_EAX & 0xffffff00;
  if ((*unaff_ESI == '\0') && (*param_2 == *param_3)) {
    if (param_1 != '\0') {
      *in_ECX = *in_EDX;
      in_ECX[1] = in_EDX[1];
      in_ECX[2] = in_EDX[2];
      in_ECX[3] = in_EDX[3];
      *unaff_ESI = '\x01';
      return uVar2;
    }
    *in_EDX = *in_ECX;
    in_EDX[1] = in_ECX[1];
    uVar1 = in_ECX[2];
    in_EDX[2] = uVar1;
    uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),1);
    in_EDX[3] = in_ECX[3];
    *unaff_ESI = '\x01';
  }
  return uVar2;
}
