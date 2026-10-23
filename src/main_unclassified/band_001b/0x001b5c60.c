/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CED71B5AA71CDC6A4551939DEDDCBF4E9668C377993F9026D4C46CCDF8059C6C
 * Entry: 0x001b5c60, Ghidra index: 5681, label: FUN_001b5c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5c60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  uVar1 = in_ECX[3];
  uVar2 = in_ECX[2];
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = uVar2;
  in_EAX[3] = uVar1;
  uVar1 = in_ECX[6];
  uVar2 = in_ECX[5];
  in_EAX[4] = in_ECX[4];
  in_EAX[5] = uVar2;
  in_EAX[6] = uVar1;
  uVar1 = in_ECX[9];
  uVar2 = in_ECX[8];
  in_EAX[7] = in_ECX[7];
  in_EAX[8] = uVar2;
  in_EAX[9] = uVar1;
  return;
}
