/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A9833C99AEE5BEF9DFEA6BF5A9DD5853CCE36F7C63A27E38E9A456D41E4370E
 * Entry: 0x0033d7b3, Ghidra index: 12590, label: FUN_0033d7b3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033d7b3(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_0033c8ee();
  if (-1 < iVar2) {
    iVar2 = XAPILIB__GetLastError();
    if (iVar2 == 0xb7) {
      iVar1 = *(int *)(in_ECX + 0x10);
      iVar2 = iVar1 + 0x84c;
      *(int *)(in_ECX + 0x18) = iVar2;
      FUN_0033ee35(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0xc),
                   *(int *)(iVar1 + 0x10) << 9,0,0,*(undefined4 *)(iVar1 + 0x8b8),iVar2);
      iVar2 = FUN_0033edd5(iVar2,1);
      if (iVar2 < 0) goto LAB_0033d825;
      *(undefined4 *)(in_ECX + 0x14) = 2;
    }
    else {
LAB_0033d825:
      iVar2 = FUN_0033d64e();
      if (iVar2 < 0) goto LAB_0033d84a;
      FUN_0033bc7e(4,0,0,0,1);
      iVar2 = FUN_0033d4fc();
    }
    if (-1 < iVar2) goto LAB_0033d850;
  }
LAB_0033d84a:
  *(undefined4 *)(in_ECX + 0x14) = 1;
  *(int *)(in_ECX + 0x2c) = iVar2;
LAB_0033d850:
  if (*(int *)(in_ECX + 0x14) == 1) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  return;
}
