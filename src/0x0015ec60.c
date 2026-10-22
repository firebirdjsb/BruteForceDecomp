/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3164A1E57B31CA8D166818D0812DCEA72879D33D84FFD5FEC3F6B8C514420FDF
 * Entry: 0x0015ec60, Ghidra index: 4563, label: FUN_0015ec60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015ec60(int param_1,int param_2)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int iVar1;
  
  if (in_ECX != in_EAX) {
    if (*(uint *)(in_EDX + 0x18) < 0x10) {
      iVar1 = in_EDX + 4;
    }
    else {
      iVar1 = *(int *)(in_EDX + 4);
    }
    if (param_1 == 0) {
      FUN_000785b0(0,in_ECX,in_EAX - in_ECX);
      return;
    }
    FUN_000785b0(param_1 - iVar1,in_ECX,in_EAX - in_ECX);
    return;
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 - param_1;
  }
  if (*(uint *)(in_EDX + 0x18) < 0x10) {
    iVar1 = in_EDX + 4;
  }
  else {
    iVar1 = *(int *)(in_EDX + 4);
  }
  if (param_1 == 0) {
    FUN_0001f5a0(0,param_2);
    return;
  }
  FUN_0001f5a0(param_1 - iVar1,param_2);
  return;
}
