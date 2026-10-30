/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1645A18AA8730AF26668E42FC498DFBDBC5610F7D7F85F6C22F0E3862E74932
 * Entry: 0x00149d00, Ghidra index: 4277, label: FUN_00149d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00149d00(int param_1)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*in_EAX + 4);
  iVar2 = 0;
  while( true ) {
    if (piVar1 == *(int **)(*in_EAX + 8)) {
      FUN_001611d0();
      return iVar2;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
