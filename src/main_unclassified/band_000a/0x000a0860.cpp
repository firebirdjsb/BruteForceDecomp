/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48705BB8FB4812CD2E4BE16084F51A5799DB36F4454DE622865772C9B8C5747C
 * Entry: 0x000a0860, Ghidra index: 1899, label: FUN_000a0860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a0860(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int *in_ECX;
  int *in_EDX;
  uint local_c [3];
  
  local_c[0] = (uint)(*in_ECX < *in_EAX);
  local_c[1] = (uint)((uint)in_ECX[2] < (uint)in_EAX[2]);
  if (local_c[*in_EAX == *in_ECX] != 0) {
    iVar1 = *in_EAX;
    iVar2 = in_EAX[1];
    iVar3 = in_EAX[2];
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    *in_ECX = iVar1;
    in_ECX[1] = iVar2;
    in_ECX[2] = iVar3;
  }
  local_c[0] = (uint)(*in_EAX < *in_EDX);
  local_c[1] = (uint)((uint)in_EAX[2] < (uint)in_EDX[2]);
  if (local_c[*in_EDX == *in_EAX] != 0) {
    iVar1 = *in_EDX;
    iVar2 = in_EDX[1];
    iVar3 = in_EDX[2];
    *in_EDX = *in_EAX;
    in_EDX[1] = in_EAX[1];
    in_EDX[2] = in_EAX[2];
    *in_EAX = iVar1;
    in_EAX[1] = iVar2;
    in_EAX[2] = iVar3;
  }
  local_c[0] = (uint)(*in_ECX < *in_EAX);
  local_c[1] = (uint)((uint)in_ECX[2] < (uint)in_EAX[2]);
  if (local_c[*in_EAX == *in_ECX] != 0) {
    iVar1 = *in_EAX;
    iVar2 = in_EAX[1];
    iVar3 = in_EAX[2];
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    *in_ECX = iVar1;
    in_ECX[1] = iVar2;
    in_ECX[2] = iVar3;
  }
  return;
}
