/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D26A0601557444BC69464F8F6BE1B2B9345FAEB515DB40D3022E93B5D9688981
 * Entry: 0x000d4500, Ghidra index: 2652, label: FUN_000d4500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000d4500(void)

{
  undefined4 *in_EAX;
  int iVar1;
  
  if ((undefined4 *)in_EAX[1] != (undefined4 *)0x0) {
    in_EAX[1] = *(undefined4 *)in_EAX[1];
  }
  if (in_EAX[1] == 0) {
    do {
      iVar1 = in_EAX[2] + 1;
      in_EAX[2] = iVar1;
      if (*(int *)*in_EAX <= iVar1) {
        return 0;
      }
      iVar1 = *(int *)(((int *)*in_EAX)[3] + iVar1 * 4);
      in_EAX[1] = iVar1;
    } while (iVar1 == 0);
  }
  return *(undefined4 *)(in_EAX[1] + 0xc);
}
