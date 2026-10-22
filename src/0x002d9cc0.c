/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DFBE181694F87F159EDE21BF169F5206FEB04FFC48104D0E4A68C6C7C426479
 * Entry: 0x002d9cc0, Ghidra index: 10257, label: FUN_002d9cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d9cc0(float param_1)

{
  float *in_EAX;
  int in_ECX;
  float *pfVar1;
  int iVar2;
  int in_EDX;
  
  pfVar1 = in_EAX;
  if (in_ECX == 0) {
    pfVar1 = (float *)((uint)in_EAX & 0xfffffff0);
    in_EDX = in_EDX + ((int)in_EAX - (int)pfVar1 >> 2);
  }
  if (0 < in_EDX) {
    iVar2 = (in_EDX - 1U >> 2) + 1;
    do {
      *pfVar1 = *pfVar1 * param_1;
      pfVar1[1] = pfVar1[1] * param_1;
      pfVar1[2] = pfVar1[2] * param_1;
      pfVar1[3] = pfVar1[3] * param_1;
      pfVar1 = pfVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
