/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB28F19CB95DEC47FF359C8029CA88C49CB84F3D8BCDA1051887C1B44257254D
 * Entry: 0x00167750, Ghidra index: 4728, label: FUN_00167750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00167750(void)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  float *unaff_EBX;
  float *unaff_ESI;
  uint uVar1;
  float local_c [3];
  
  local_c[0] = *in_ECX * *in_EAX + in_EAX[2] * in_ECX[2] + in_ECX[1] * in_EAX[1];
  local_c[1] = *unaff_ESI * *in_EAX + in_EAX[1] * unaff_ESI[1] + in_EAX[2] * unaff_ESI[2];
  uVar1 = (uint)(local_c[0] < local_c[1]);
  if (in_EDX[1] * in_EAX[1] + in_EAX[2] * in_EDX[2] + *in_EDX * *in_EAX <= local_c[uVar1]) {
    if (uVar1 == 0) {
      *unaff_EBX = *in_ECX;
      unaff_EBX[1] = in_ECX[1];
      unaff_EBX[2] = in_ECX[2];
      return;
    }
    if (uVar1 == 1) {
      *unaff_EBX = *unaff_ESI;
      unaff_EBX[1] = unaff_ESI[1];
      unaff_EBX[2] = unaff_ESI[2];
      return;
    }
  }
  *unaff_EBX = *in_EDX;
  unaff_EBX[1] = in_EDX[1];
  unaff_EBX[2] = in_EDX[2];
  return;
}
