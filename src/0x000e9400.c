/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAFCE5497903A903164868E689E35C8E1588220581DA316FE0A953C6508FB148
 * Entry: 0x000e9400, Ghidra index: 2883, label: FUN_000e9400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e9400(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int *in_ECX;
  int *in_EDX;
  uint local_c [3];
  
  local_c[0] = (uint)(in_ECX[1] < in_EAX[1]);
  local_c[1] = (uint)(*in_ECX < *in_EAX);
  if (local_c[in_EAX[1] == in_ECX[1]] != 0) {
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
  local_c[0] = (uint)(in_EAX[1] < in_EDX[1]);
  local_c[1] = (uint)(*in_EAX < *in_EDX);
  if (local_c[in_EDX[1] == in_EAX[1]] != 0) {
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
  local_c[0] = (uint)(in_ECX[1] < in_EAX[1]);
  local_c[1] = (uint)(*in_ECX < *in_EAX);
  if (local_c[in_EAX[1] == in_ECX[1]] != 0) {
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
