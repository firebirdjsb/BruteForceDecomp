/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 714243BA807F9A31940939BADBEC26D68D8AA29691FEBE053EF62AE5929FC129
 * Entry: 0x002656e0, Ghidra index: 8723, label: FUN_002656e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002656e0(void)

{
  int iVar1;
  int *piVar2;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  while (iVar1 != 0) {
    piVar2 = (int *)*in_EAX;
    *in_EAX = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = *in_EAX;
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  return;
}
