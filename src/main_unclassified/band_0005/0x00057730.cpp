/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A840BB7756AFF937F5CB0BF18ACEA291194A6E2290635BEC638C8AAFBDFD7B6
 * Entry: 0x00057730, Ghidra index: 852, label: FUN_00057730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern char FUN_0004cfd0(int param_1);
extern void FUN_00057570(undefined4 param_1);

void FUN_00057730(undefined4 param_1)

{
  byte bVar1;
  int in_EAX;
  undefined1 local_2c [44];
  
  bVar1 = FUN_0004cfd0(*(undefined4 *)(in_EAX + 0x10),local_2c);
  bVar1 = *(byte *)(in_EAX + 0x14) ^ (*(byte *)(in_EAX + 0x14) ^ bVar1) & 1;
  *(byte *)(in_EAX + 0x14) = bVar1;
  if ((bVar1 & 1) != 0) {
    FUN_00057570(param_1);
  }
  return;
}
