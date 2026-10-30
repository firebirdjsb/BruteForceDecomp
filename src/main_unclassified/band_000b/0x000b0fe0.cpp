/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 651E25785F0B0074311A86C58C42C2632A1F15B541BBA91A3D86B8695B52ACE8
 * Entry: 0x000b0fe0, Ghidra index: 2104, label: FUN_000b0fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b1870(undefined4 param_1,int param_2);
extern void FUN_000b1170(int param_1);

void FUN_000b0fe0(void)

{
  int iVar1;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_ECX + 8) - iVar1 >> 5) < (uint)(*(int *)(in_ECX + 0xc) - iVar1 >> 5))) {
    iVar1 = *(int *)(in_ECX + 8);
    FUN_000b1870(iVar1,1);
    *(int *)(in_ECX + 8) = iVar1 + 0x20;
    return;
  }
  FUN_000b1170(*(undefined4 *)(in_ECX + 8),in_EAX);
  return;
}
