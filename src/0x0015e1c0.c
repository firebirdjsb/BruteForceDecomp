/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64CCD48A6C9562DE9C2510140F6C76272B96D890D1A02CB6B25E67EEDFFF2481
 * Entry: 0x0015e1c0, Ghidra index: 4544, label: FUN_0015e1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015e1c0(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = in_EDX;
  puVar3 = in_EAX;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_EAX[7] = in_EDX[7];
  in_EAX[8] = in_EDX[8];
  in_EAX[9] = in_EDX[9];
  in_EAX[10] = in_EDX[10];
  in_EAX[0xb] = in_EDX[0xb];
  in_EAX[0xc] = in_EDX[0xc];
  return;
}
