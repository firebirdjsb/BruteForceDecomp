/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B88A2ED95DF97CD76F11BE8666145561400335E8DEDA18AA3C228669ABCB17F8
 * Entry: 0x0002f250, Ghidra index: 311, label: FUN_0002f250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0002f250(void)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)23.0;
  if (*(int *)(in_EAX + 0x59c) != 0) {
    fVar1 = (float10)10.0;
  }
  return fVar1;
}
