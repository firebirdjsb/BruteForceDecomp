/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25EA2EFC092218874678850C2049306730DC4200F806137DA70DA3C288770D3B
 * Entry: 0x00209620, Ghidra index: 7321, label: FUN_00209620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00209620(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)0x0;
  if (*(int *)(in_EAX + 0xcc) != 0) {
    if ((*(byte *)(in_EAX + 0xe4) & 4) == 0) {
      iVar2 = in_EAX + 0xd0;
    }
    else {
      iVar2 = 0;
    }
    piVar1 = (int *)FUN_000dfd90(*(undefined4 *)(in_EAX + 0x10),*(int *)(in_EAX + 0xcc),
                                 *(undefined4 *)(in_EAX + 0xd8),iVar2);
    if ((piVar1 != (int *)0x0) &&
       ((**(code **)(*piVar1 + 0x50))(in_EAX + 0x90), *(int *)(piVar1[3] + 4) == 3)) {
      piVar1[0x1cd] = 3;
      piVar1[0x1cf] = 0;
      piVar1[0x1ce] = 0;
      piVar1[0x1cf] = *(int *)(in_EAX + 0xdc);
      piVar1[0x1cd] = 0;
    }
    if (((*(byte *)(in_EAX + 0xe4) & 4) == 0) && (*(int *)(in_EAX + 0xcc) != 0)) {
      FUN_0008f6a0(0);
    }
  }
  return piVar1;
}
