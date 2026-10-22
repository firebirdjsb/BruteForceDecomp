/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63AA5C71123028C4D801D5DCD659BA6076313435F9EB4E1F623DF75C869C244A
 * Entry: 0x000ab860, Ghidra index: 2050, label: FUN_000ab860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ab860(void)

{
  int iVar1;
  int in_EAX;
  byte bVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *(int *)(in_EAX + 0x7c) = iVar1;
  *(int *)(in_EAX + 0x80) = in_ECX[1];
  if ((iVar1 == 10) && (*(int *)(in_EAX + 0x80) == -1)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  *(byte *)(*(int *)(in_EAX + 0x68) + 0x13) =
       *(byte *)(*(int *)(in_EAX + 0x68) + 0x13) & 0xfe | bVar2;
  *(byte *)(*(int *)(in_EAX + 0x6c) + 0x13) =
       *(byte *)(*(int *)(in_EAX + 0x6c) + 0x13) & 0xfe | bVar2;
  *(byte *)(*(int *)(in_EAX + 100) + 0x13) = *(byte *)(*(int *)(in_EAX + 100) + 0x13) & 0xfe | bVar2
  ;
  if ((*(byte *)(in_EAX + 0x74) & 1) == 0) {
    *(byte *)(in_EAX + 0x13) = *(byte *)(in_EAX + 0x13) & 0xfe | bVar2;
  }
  return;
}
