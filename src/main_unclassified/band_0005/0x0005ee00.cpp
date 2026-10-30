/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FE7F7FD6D073762BCC92C447F8B4B7BC01865CDF6E16572A6E1C26092B1741A
 * Entry: 0x0005ee00, Ghidra index: 1000, label: FUN_0005ee00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005ee00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *in_EAX = *in_ECX;
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[4];
  in_EAX[3] = in_ECX[3];
  in_EAX[4] = uVar2;
  in_EAX[5] = uVar1;
  return;
}
